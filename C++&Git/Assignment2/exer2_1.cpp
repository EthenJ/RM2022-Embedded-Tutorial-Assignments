// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

// the starting of program
int main()
{
    // the array to be sorted
    const int lengthOfArray = 5;
    int arr[lengthOfArray] = {5, 10, 6, 2, 3};

    // first loop, i means the first i elements are sorted
    for (int i = 0; i < lengthOfArray; i++)
    {
        // record the index of the min number, assign the biggest value of int
        int minIndex = i;
        // second loop, to find the min number in the unsorted area
        for (int j = i; j < lengthOfArray; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // swap two numbers
        if (minIndex != i)
        {
            arr[minIndex] = arr[minIndex] ^ arr[i];
            arr[i] = arr[minIndex] ^ arr[i];
            arr[minIndex] = arr[minIndex] ^ arr[i];
        }
    }

    // output the sorted array
    for (int i = 0; i < lengthOfArray; i++)
    {
        cout << arr[i];
        if (i == lengthOfArray - 1)
            cout << endl;
        else
            cout << " < ";
    }

    // end of the program
    return 0;
}
