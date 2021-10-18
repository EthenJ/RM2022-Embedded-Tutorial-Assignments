// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

// function phototype
bool arrayReverse(char *array, int start, int end);

// the starting of program
int main()
{
    // the input array
    char array[100] = "robomaster2022";
    // the input number
    int startingPoint = 0, endingPoint = 5;

    // call the function
    if (arrayReverse(array, startingPoint, endingPoint))
    {
        // output the result
        cout << array << endl;
    }
    else
    {
        // output the error
        cout << "Error, please check the input" << endl;
    }

    // end of the program
    return 0;
}

/* Write your code under this line, you can define any helper function */
bool arrayReverse(char *array, int start, int end)
{
    if (start > end)
    { // return false if the start is larger than end
        return false;
    }
    else // otherwise reverse the array
    {
        for (int i = start; i <= (start + end - 1) / 2; i++)
        {
            array[i] = array[start + end - i] ^ array[i];
            array[start + end - i] = array[start + end - i] ^ array[i];
            array[i] = array[start + end - i] ^ array[i];
        }
        return true;
    }

    return false;
}
