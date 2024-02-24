----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:48:19 11/07/2023 
-- Design Name: 
-- Module Name:    UART - Behavioral 
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

entity UART is
	PORT 	(
		clk_in : in std_logic;
 		tx_count : in std_logic_vector(7 downto 0);
		tx : out std_logic := '1'
		);
end UART;

architecture Behavioral of UART is

signal bit_counter : integer range 0 to 1736 := 0;
signal i : integer range 0 to 10 := 0;
signal flag : integer range 0 to 100000 := 0;--от дребезга
signal txenable : integer range 0 to 3 :=0;--отправка значения единоразово
signal data : std_logic_vector(9 downto 0) := "1000011010";

begin

process (clk_in)
begin
	if (clk_in'event and clk_in = '1') then
		data <= "1" & tx_count & "0";
	else data <= "1000011010";
	end if;
end process;

process (clk_in)
begin
	if (clk_in'event and clk_in = '0') then
		if (data /= "10000011010" and data /= "1000000000") then
				txenable <= 1;
		else txenable <= 0;
		end if;
		if (i = 10) then
			txenable <= 0;--отправили
	--		i <= 0;
		end if;	
	--end if;	
	end if;	
end process;		

process (clk_in)
begin
	if (clk_in'event and clk_in = '1') then
		if (txenable = 1) then
			if (bit_counter = 1736) then--ждём для отправки бита
				bit_counter <= 0;
				i <= i+1;
			else	
				bit_counter <= bit_counter + 1;
			end if;
			if (i = 10) then --все отправили
				i <= 0;
			end if;
		else i<=0; bit_counter <= 0;
	end if;
	end if;	
end process;

process (clk_in, bit_counter)
begin
	if (clk_in'event and clk_in = '0') then
		if (bit_counter = 1736) then	
			if (txenable = 1) then 
				tx <= data(i);
			end if;
		end if;
	end if;
end process;	

end Behavioral;

