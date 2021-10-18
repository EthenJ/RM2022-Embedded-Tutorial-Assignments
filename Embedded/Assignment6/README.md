# Assignment6

Before doing this assignment, you should already know the following things:

- What is CAN
- How to transmit and receive CAN message using HAL library

## Embedded programming exercise

### Task
In this assignment you need to decode the CAN message from motor GM6020 and try to turn it on.   
1. Read the [GM6020 User Guide](https://rm-static.djicdn.com/tem/17348/RoboMaster%20GM6020%20Brushless%20DC%20Motor%20User%20Guide.pdf) it will tell you the defination of CAN message and how to control it.
2. Receive and decode the CAN message from GM6020, show it on Ozone
3. Transmit the control message, let the motor spin. DO NOT SET THE CURRENT TOO HIGH, usually 2000~3000.  
(We will provide you the motors and do the wiring for you)

### API 
You may need the following APIs from HAL library to finish this task:  
- HAL_CAN_Start 
- HAL_CAN_Stop 
- HAL_CAN_AddTxMessage 
- HAL_CAN_GetRxMessage 
- HAL_Delay  

### Hint
- How to decode: (reference only, buffer is what you received from CAN bus)    
    ```cpp
    rawEncoder = buffer[0] << 8 | buffer[1];
    rpm = buffer[2] << 8 | buffer[3];
    torque = buffer[4] << 8 | buffer[5];
    temperature = buffer[6];
    ```

### Useful links:  
- [Bitwise Operators in C/C++](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/) (this will help you understan the decode function)
- [Description of STM32F1 HAL and low-layer drivers](https://www.st.com/resource/en/user_manual/dm00154093-description-of-stm32f1-hal-and-lowlayer-drivers-stmicroelectronics.pdf)

### Demo
We will help you to finish the task cause it is not easy for beginers, you need to finish your code first and we will help you debugging.