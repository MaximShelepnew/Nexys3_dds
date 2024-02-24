----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:11:28 11/07/2023 
-- Design Name: 
-- Module Name:    UART_rx - Behavioral 
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

entity UART_rx is
	generic (
		FCORE : integer := 100000000;--100ћ√ц
		UART_BAUDRATE : integer := 57600--скорость
		);
	PORT 	(
		clk_in : in std_logic;
 		rx : in std_logic;
		count_res : out integer range 0 to 1023
		);
end UART_rx;

architecture Behavioral of UART_rx is

signal rxstate : integer range 0 to (19*FCORE/2/UART_BAUDRATE) := 0;--счЄтчик
signal received : std_logic_vector (7 downto 0);--получили
signal count : integer range 0 to 1023:= 0;

begin

process (clk_in)
begin
	if (clk_in'event and clk_in = '1') then
		case rxstate is
			when 0 to FCORE/2/UART_BAUDRATE => 
				if rx = '0' then rxstate <= rxstate + 1; end if;
			when 3*FCORE/2/UART_BAUDRATE =>
				received(0) <= rx;
				rxstate <= rxstate + 1;
			when 5*FCORE/2/UART_BAUDRATE =>
				received(1) <= rx;
				rxstate <= rxstate + 1;
			when 7*FCORE/2/UART_BAUDRATE =>
				received(2) <= rx;
				rxstate <= rxstate + 1;
			when 9*FCORE/2/UART_BAUDRATE =>
				received(3) <= rx;
				rxstate <= rxstate + 1;
			when 11*FCORE/2/UART_BAUDRATE =>
				received(4) <= rx;
				rxstate <= rxstate + 1;
			when 13*FCORE/2/UART_BAUDRATE =>
				received(5) <= rx;
				rxstate <= rxstate + 1;
			when 15*FCORE/2/UART_BAUDRATE =>
				received(6) <= rx;
				rxstate <= rxstate + 1;
			when 17*FCORE/2/UART_BAUDRATE =>
				rxstate <= rxstate + 1;
				received(7) <= rx;
			when 19*FCORE/2/UART_BAUDRATE =>
				rxstate <= 0;
				if (received = "00001101") then
					count_res <= count;
					count <= 0;				
				else 
					count <= count*10 + to_integer(unsigned(received)) - 48;				
				end if; 
			when others => rxstate <= rxstate + 1;
		end case;
	end if;
end process;

end Behavioral;

