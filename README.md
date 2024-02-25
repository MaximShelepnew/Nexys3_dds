# Nexys3_dds
### The project is based on the Nexus 3 Spartan 6 debugging board in the VHDL.

The project is as follows:
from a laptop, we set the frequency of the sine wave and transfer these data to the board using the UART protocol (speed 9600 with a carriage). Next, after receiving this data on the board, we create a sine wave of the desired frequency in DDS and output it via the SPI protocol to an external DAC. It is also possible (there are 2 channels on the DAC) to monitor the phase change of the created sine wave.
To start the project, select the file UART/UART_pr/UART_pr.xise. The top-level file is located on the path UART/UART_pr/top_modul.vhd.
