----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:52:53 09/03/2023 
-- Design Name: 
-- Module Name:    top_modul - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.all;
use IEEE.std_logic_signed.all;
Library UNISIM;
use UNISIM.vcomponents.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top_modul is
    Port ( clk_system : in  STD_LOGIC;
			  
			  --switch
			  switch : in std_logic_vector (7 downto 0);
	--		  led : out std_logic_vector (7 downto 0);
			  
			  --display
			  anod : out std_logic_vector (3 downto 0);
			  cathod : out std_logic_vector (7 downto 0);
			  
			  --button
			  button : in std_logic_vector (4 downto 0);
			  
			  --uart
			  tx : out std_logic;
			  rx : in std_logic;
			  
			  --SPI
			  CS_sp : out std_logic;
			  CLK_sp : out std_logic;
			  MOSI1_sp  : out std_logic;
			  MOSI2_sp  : out std_logic;

			  --CLOCK COMPONENTS
			  CLK0 : out std_logic;
--			  CLK180 : out std_logic;
--			  CLK270 : out std_logic;
			  CLK2X : out std_logic;
			  CLK2X180 : out std_logic;
			  CLK90 : out std_logic;
			  CLKDV : out std_logic;
			  CLKFX : out std_logic
--			  CLKFX180 : out std_logic		  
			  
			  );
end top_modul;

architecture Behavioral of top_modul is

	signal clk_da2 : std_logic := '0';
	signal cnt : integer range 0 to 1000 := 0;
	signal number : integer range 0 to 1023 := 0;
	signal res_str : std_logic_vector(7 downto 0) := "00001101";
	signal f : integer;
	signal count : integer range 0 to 1023;
	
	signal sin_f : std_logic_vector (9 downto 0);
	signal sin_2f : std_logic_vector (9 downto 0);
	signal sin_3f : std_logic_vector (9 downto 0);
	signal sin_4f : std_logic_vector (9 downto 0);
	signal sin_5f : std_logic_vector (9 downto 0);
	signal sin_ff : signed (11 downto 0);
	signal sin_2ff : signed (11 downto 0);
	
	signal koeff : integer := 0;
	
	signal phase : std_logic_vector (15 downto 0);
	signal cs_spi : std_logic;
	signal pinc_in : std_logic_vector (9 downto 0);
	signal bit_counter : integer range 0 to 3 := 0;
	
			  --CLOCK COMPONENTS
			 signal CLK0 : std_logic;
			 signal  CLK180 : std_logic;
			 signal CLK270 : std_logic;
			 signal CLK2X : std_logic;
			 signal CLK2X180 : std_logic;
			 signal CLK90 : std_logic;
			 signal CLKDV : std_logic;
			 signal CLKFX : std_logic;
			 signal CLKFX180 : std_logic;		
	

	COMPONENT Display7Seg 	
			PORT 	(
				clk_in : in std_logic;
				count : in std_logic_vector (9 downto 0);
				anod : out std_logic_vector (3 downto 0);
				cathod : out std_logic_vector (7 downto 0);
				button : in std_logic_vector (4 downto 0);
				number_1 : out integer range 0 to 1023--число с экрана
				);
	END COMPONENT;		
	
	COMPONENT UART 
			PORT 	(
			clk_in : in std_logic;
			tx_count : in std_logic_vector(7 downto 0);
			tx : out std_logic
			);
	END COMPONENT;		
	
	COMPONENT UART_rx
			PORT (
			clk_in : in std_logic;
			rx : in std_logic;
			count_res : out integer range 0 to 1023
			);
	END COMPONENT;		
--	
	COMPONENT spi_master is
			PORT (
	      clk_in : in  STD_LOGIC; --
			Data1 : in  std_logic_vector(11 DOWNTO 0);
			Data2 : in  STD_LOGIC_VECTOR(11 DOWNTO 0);
			
			CS_spi : out std_logic;
			CLK_spi : out std_logic;
			MOSI1_spi  : out std_logic;
			MOSI2_spi  : out std_logic
	  );
	END COMPONENT;

	COMPONENT DDS_sin
	  PORT (
		 clk : IN STD_LOGIC;
		 pinc_in : IN STD_LOGIC_VECTOR(9 DOWNTO 0);
		 sine : OUT std_logic_vector(9 DOWNTO 0)
	  );
	END COMPONENT;

begin
	
   DCM_SP_inst : DCM_SP
   generic map (
      CLKDV_DIVIDE => 5.0,                   -- CLKDV divide value
                                             -- (1.5,2,2.5,3,3.5,4,4.5,5,5.5,6,6.5,7,7.5,8,9,10,11,12,13,14,15,16).
      CLKFX_DIVIDE => 1,                     -- Divide value on CLKFX outputs - D - (1-32)
      CLKFX_MULTIPLY => 6,                   -- Multiply value on CLKFX outputs - M - (2-32)
      CLKIN_DIVIDE_BY_2 => FALSE,            -- CLKIN divide by two (TRUE/FALSE)
      CLKIN_PERIOD => 20000.0,                  -- Input clock period specified in nS
      CLKOUT_PHASE_SHIFT => "NONE",          -- Output phase shift (NONE, FIXED, VARIABLE)
      CLK_FEEDBACK => "2X",                  -- Feedback source (NONE, 1X, 2X)
      DESKEW_ADJUST => "SYSTEM_SYNCHRONOUS", -- SYSTEM_SYNCHRNOUS or SOURCE_SYNCHRONOUS
      DFS_FREQUENCY_MODE => "LOW",           -- Unsupported - Do not change value
      DLL_FREQUENCY_MODE => "LOW",           -- Unsupported - Do not change value
      DSS_MODE => "NONE",                    -- Unsupported - Do not change value
      DUTY_CYCLE_CORRECTION => TRUE,         -- Unsupported - Do not change value
      FACTORY_JF => X"c080",                 -- Unsupported - Do not change value
      PHASE_SHIFT => 0,                      -- Amount of fixed phase shift (-255 to 255)
      STARTUP_WAIT => FALSE                  -- Delay config DONE until DCM_SP LOCKED (TRUE/FALSE)
   )
   port map (
      CLK0 => CLK0,         -- 1-bit output: 0 degree clock output =CLKIN
--      CLK180 => CLK180,     -- 1-bit output: 180 degree clock output ~CLKIN
--      CLK270 => CLK270,     -- 1-bit output: 270 degree clock output 
      CLK2X => CLK2X,       -- 1-bit output: 2X clock frequency clock output CLKIN/2
      CLK2X180 => CLK2X180, -- 1-bit output: 2X clock frequency, 180 degree clock output
      CLK90 => CLK90,       -- 1-bit output: 90 degree clock output
      CLKDV => CLKDV,       -- 1-bit output: Divided clock output CLKIN*2
      CLKFX => CLKFX,       -- 1-bit output: Digital Frequency Synthesizer output (DFS) CLKIN/4
--      CLKFX180 => CLKFX180, -- 1-bit output: 180 degree CLKFX output
--      LOCKED => LOCKED,     -- 1-bit output: DCM_SP Lock Output
--      PSDONE => PSDONE,     -- 1-bit output: Phase shift done output
--      STATUS => STATUS,     -- 8-bit output: DCM_SP status output
      CLKFB => clk_da2,       -- 1-bit input: Clock feedback input
      CLKIN => clk_da2,       -- 1-bit input: Clock input
--      DSSEN => DSSEN,       -- 1-bit input: Unsupported, specify to GND.
--      PSCLK => PSCLK,       -- 1-bit input: Phase shift clock input
--      PSEN => PSEN,         -- 1-bit input: Phase shift enable
--      PSINCDEC => PSINCDEC, -- 1-bit input: Phase shift increment/decrement input
      RST => '0'            -- 1-bit input: Active high reset input
   );
	
--	led(7 downto 0) <= switch(7 downto 0);
	led(0) <= CLK0;
	led(5) <= CLK2X;
	led(2) <= CLK2X180;
	led(3) <= CLK90;
	led(1) <= CLKDV;
	led(4) <= CLKFX;
	led(6) <= '0';
	led(7) <= '0';
	

	Display : Display7Seg 
		port map(
				clk_in => clk_da2,
				count => std_logic_vector(to_unsigned(count, 10)),
				anod => anod,
				cathod => cathod,
				button => button,
				number_1 => number
		);
	
	UART_tx : UART
		port map(
				clk_in => clk_system,
				tx_count => std_logic_vector(to_unsigned(count, 8)),--"100" & std_logic_vector(to_unsigned(tx_count, 6)) & "0",--"1001101010"--00110000 по акси нуль, +стартовый 0 +стоповый 1
				tx => tx
				);
				
	UART_rxt : UART_RX
		port map(
			clk_in => clk_system,
			rx => rx,
			count_res => count
			);
			
	pinc_in <= std_logic_vector(to_signed(count, 10));

	DDS_sine : DDS_sin
	  PORT MAP (
		 clk => cs_spi,
		 pinc_in => pinc_in,
		 sine => sin_f
	  );
	  
	process (cs_spi)
	begin
		if (cs_spi'event and cs_spi = '1') then
			if (bit_counter = 3) then
				bit_counter <= 0;
				koeff <= to_integer(signed(sin_ff)) * 123 / 100;--масштаб 
				sin_2ff <= to_signed(koeff, 12);		
				else 	
					bit_counter <=  bit_counter + 1;	
			end if;					
		end if;	
	end process;	
--	
	process (cs_spi, bit_counter)
	begin
		if (cs_spi'event and cs_spi = '0') then		
			case bit_counter is
				when 0 => pinc_in <= std_logic_vector(to_signed(count, 10));
							 sin_2f <= sin_f; 
							 sin_ff <= sin_f(9) & sin_f(9) & signed(sin_f);						 
				when 1 => pinc_in <= std_logic_vector(to_signed(count*2, 10));
							 sin_3f <= sin_f;
							 sin_ff <= sin_ff + signed(sin_f);
				when 2 => pinc_in <= std_logic_vector(to_signed(count*3, 10));
							 sin_4f <= sin_f;
							 sin_ff <= sin_ff + signed(sin_f);
				when 3 => pinc_in <= std_logic_vector(to_signed(count*4, 10));
							 sin_5f <= sin_f;
							 sin_ff <= sin_ff + signed(sin_f);
							-- sin_3f <= sin_f;
			end case;
		end if;	
	end process;
	
	
	spi : spi_master
		port map(
            clk_in => clk_da2, -- ~17(16.7, 100ћгц делю на 6)
				Data1 =>  sin_2f(9) & sin_2f(9) & sin_2f,
				Data2 => std_logic_vector(sin_2ff),
--				Data1 => sin_f,
--				Data2 => sin_f,
			
				
				CS_spi => CS_spi,
				CLK_spi => CLK_sp,
				MOSI1_spi => MOSI1_sp,
				MOSI2_spi => MOSI2_sp
		);
	
	cs_sp <= cs_spi;

	process (clk_system)
	--suda cnt
	begin
		if rising_edge(clk_system) then	
			if cnt = 1000 then 
				cnt <= 0;
				clk_da2 <= not clk_da2;
			else 
				cnt <= cnt + 1;
			end if;
		end if;
	end process;	
			

end Behavioral;

