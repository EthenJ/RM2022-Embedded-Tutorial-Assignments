# Assignment3

Before doing this assignment, you should already know the following things:

- Define and Call a Function
- Recursion
- Namespace
- Multi-file compilation

## Review Questions

(You should write the answers to the following questions in the same file)

1. Write the following functions

   - Replace one char with another in a string(array of char) and return the number of replacements. Below is the function prototype in header file.
     ```c
     // replace all a in str with b, len is the length of the string 
     int replace(char str[], int len, char a, char b);
     ```
   - Convert Cartesian coordinates(x, y) to polar coordinates($\rho, \theta$), use `sqrt(x)` to find square root of x and `atan(y)` to find the inverse trigonometric, which is arctangent of y. Below is the struct and function prototype in header file.
     ```c
     // struct of cartesian coordinates
     struct Cartesian {
        float x;
        float y;
     };
     // struct of polar coordinates
     struct Polar {
        float x;
        float y;
     };
     // Convert Cartesian coordinates to polar coordinates
     Polar cartesian2Polar(Cartesian pos);
     ```

2. Briefly describe the benefits of putting the function prototype in the header file.

## Programing Exercise

1. Write a function which input a string(char array) and two numbers (let say a and b). The function should reverse all the item between and including the index a and b. And it returns a bool indecates if the input is valid. (You can define helper functions if needed)  
   For example, input is "robomaster2022", a=0 b=5, the returned bool is true and the string will be "amoborster2022". If the input is a=5 b=0 then it is not valid, return false and the string remain the same.
2. Write a program that can output the first n numbers of Fibonacci sequence.
   For example, n=10, the first 5 numbers of Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

We have provided the skeleton code ([exer3_1.cpp](./exer3_1.cpp) and [exer3_2.cpp](./exer3_2.cpp)), you only need to complete the calculation part.
For compiling and running the code, using the following commend lines:

```bash
# compile
g++ -o exer_run3_1 exer3_1.cpp
g++ -o exer_run3_2 exer3_2.cpp
# run
./exer_run3_1
./exer_run3_2
```

If you want to know more about compiling with g++, click [here](https://courses.cs.washington.edu/courses/cse373/99au/unix/g++.html)

## DO NOT FORGET TO COMMIT AND PUSH YOU CODE :)
