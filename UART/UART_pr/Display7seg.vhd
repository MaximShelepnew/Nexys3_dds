----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:56:07 11/03/2023 
-- Design Name: 
-- Module Name:    Display7seg - Behavioral 
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
use IEEE.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity Display7Seg is

	PORT 	(
		clk_in : in std_logic;
		count : in std_logic_vector (9 downto 0);
		button : in std_logic_vector (4 downto 0);
		anod : out std_logic_vector (3 downto 0);
		cathod : out std_logic_vector (7 downto 0);
		number_1 : out integer range 0 to 1023
		);
		
end Display7Seg;

architecture Behavioral of Display7Seg is

signal bit_counter : integer range 0 to 3 := 0;
signal button_counter0 : integer range 0 to 100001;
signal button_counter1 : integer range 0 to 5000;
signal button_counter2 : integer range 0 to 5000;
signal button_counter3 : integer range 0 to 5000;
signal button_counter4 : integer range 0 to 5000;
signal number : integer range 0 to 1023;

begin

--number <= TO_INTEGER(unsigned(count));
process (clk_in)
begin
	if (clk_in'event and clk_in = '1') then
		if (bit_counter = 3) then
			bit_counter <= 0;
		else 
			bit_counter <= bit_counter +1 ;
		end if;		
	end if;
end process;

process (clk_in)
begin
	if (clk_in'event and clk_in = '1') then
		if (button_counter0 = 100000) then
			number <= TO_INTEGER(unsigned(count));
			button_counter0 <= 0;
		else 	
			if (button(0) = '1') then
				button_counter0 <= button_counter0 + 1;
			else 
				if (button(0) = '0' and button_counter0>0) then
					number <= TO_INTEGER(unsigned(count));
					button_counter0 <= 0;
				else button_counter0 <= 0;	
				end if;
			end if;
		end if;	
		
		if (button_counter1 = 5000) then
			number <= number*2 ;
			button_counter1 <= 0;
		else 
			if (button(1) = '1') then
				button_counter1 <= button_counter1 + 1;
			else button_counter1 <= 0;
			end if;
		end if;
		
		if (button_counter2 = 5000) then
			number <= number - 1 ;
			button_counter2 <= 0;
		else 
--			if (button(2) = '1') then
--				button_counter2 <= button_counter2 + 1;
--			else button_counter2 <= 0;
--			end if;
		end if;
		
		if (button_counter3 = 5000) then
			number <= number/2 ;
			button_counter3 <= 0;
		else 
			if (button(3) = '1') then
				button_counter3 <= button_counter3 + 1;
			else button_counter3 <= 0;
			end if;
		end if;
		
		if (button_counter4 = 5000) then
			number <= 0 ;
			button_counter4 <= 0;
		else 
			if (button(4) = '1') then
				button_counter4 <= button_counter4 + 1;
			else button_counter4 <= 0;
			end if;
		end if;
	end if;	
	
end process;
	
process (clk_in, bit_counter)
begin
	if (clk_in'event and clk_in = '0') then
		number_1 <= number;
		case bit_counter is
			when 0 => anod <= "1110";
						case number rem 10 is -- edinici
														--"PGFEDCBA"
							when 0  => cathod <= "11000000";
							when 1 => cathod <= "11111001";							
							when 2 => cathod <= "10100100";							
							when 3 => cathod <= "10110000";
							when 4 => cathod <= "10011001";
							when 5 => cathod <= "10010010";
							when 6 => cathod <= "10000010";
							when 7 => cathod <= "11111000";
							when 8 => cathod <= "10000000";
							when 9 => cathod <= "10010000";
							when others => cathod <= "00000000";
						end case;	
			when 1 => anod <= "1101";
						case (number rem 100 - number rem 10) is -- дес€тки
														--"PGFEDCBA"
							when 0  => cathod <= "11000000";
							when 10 => cathod <= "11111001";						
							when 20 => cathod <= "10100100";							
							when 30 => cathod <= "10110000";
							when 40 => cathod <= "10011001";
							when 50 => cathod <= "10010010";
							when 60 => cathod <= "10000010";
							when 70 => cathod <= "11111000";
							when 80 => cathod <= "10000000";
							when 90 => cathod <= "10010000";
							when others => cathod <= "00000000";
						end case;			
			when 2 => anod <= "1011";
						case (number rem 1000 - number rem 100) is -- сотни
														--"PGFEDCBA"
							when 0  => cathod <= "11000000";
							when 100 => cathod <= "11111001";
							when 200 => cathod <= "10100100";
							when 300 => cathod <= "10110000";
							when 400 => cathod <= "10011001";
							when 500 => cathod <= "10010010";
							when 600 => cathod <= "10000010";
							when 700 => cathod <= "11111000";
							when 800 => cathod <= "10000000";
							when 900 => cathod <= "10010000";
							when others => cathod <= "00000000";
						end case;
			when 3 => anod <= "0111";
						case number rem 10000 - number rem 1000  is -- т€с€чи
														--"PGFEDCBA"
							when 0  => cathod <= "11000000";
							when 1000 => cathod <= "11111001";
							when 2000 => cathod <= "10100100";
							when 3000 => cathod <= "10110000";
							when 4000 => cathod <= "10011001";
							when 5000 => cathod <= "10010010";
							when 6000 => cathod <= "10000010";
							when 7000 => cathod <= "11111000";
							when 8000 => cathod <= "10000000";
							when 9000 => cathod <= "10010000";
							when others => cathod <= "00000000";
						end case;
			end case;	
	end if;
end process;

end Behavioral;
