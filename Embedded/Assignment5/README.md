# Assignment5

Before doing this assignment, you should already know the following things:

- What is UART
- How to connect the wires (Rx Tx GND)
- How to transmit and receive uart message using HAL library

## Embedded programming exercise

### Task
In this assignment you need to exchange message between computer and stm32 board.  
Computer will transmit two numbers (positive integer only and will not exceed 127) and the board should return the sum of them, the format of the message is shown below:   
The message will start with '!', and end with '#', if there are more than one numbers, they will be separeted by ':'
- From computer: !10:20#    (computer send 10 and 20 to the board)
- From board: !30#      (the board returns the sum of 10 and 20 which is 30)

### Tools
You may need the following tools to finish the task:  
- USB to TTL: connecting the board with computer, via UART (you can get one from us)
- A software that can transmit and receive UART data: you may search online to find one (you can try to use cutecom, which has Windows, Linux and MacOS version)

### API 
You may need the following APIs from HAL library to finish this task:  
- HAL_UART_Transmit
- HAL_UART_Receive
- HAL_Delay  

### Hint
- Remember the number you receive is an array of char, you need to decode it to int
- If a message is not started with the starting char(!) ot not ended with the ending char(#) you can ignore it

### Useful links:  
- [UART Transmit data using Poll Interrupt and DMA in STM32](https://controllerstech.com/uart-transmit-in-stm32/)
- [Description of STM32F1 HAL and low-layer drivers](https://www.st.com/resource/en/user_manual/dm00154093-description-of-stm32f1-hal-and-lowlayer-drivers-stmicroelectronics.pdf)

### Demo
Show the borad can receive nessage and return the correct answer