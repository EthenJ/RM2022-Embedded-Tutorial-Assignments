// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

/* Remember to write the function phototype here */
int fibonacci(int, const int, const int);
/* Edit the code under this line, you can define any helper function */
// the starting of program
int main()
{
    // the first two numbers;
    int fibonacci_1 = 0, fibonacci_2 = 1;
    int n;
    cout << "Please input n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fibonacci(i, fibonacci_1, fibonacci_2) << ", ";
    }
    cout << endl;
    // end of the program
    return 0;
}

int fibonacci(int n, const int fibonacci_1, const int fibonacci_2)
{
    if (n == 1)
    {
        return fibonacci_1;
    }
    else if (n == 2)
    {
        return fibonacci_2;
    }
    else if (n <= 0)
    {
        cerr << "invalid input!!!" << endl;
        return -1;
    }
    else
    {
        return fibonacci(n - 1, fibonacci_1, fibonacci_2) + fibonacci(n - 2, fibonacci_1, fibonacci_2);
    }
}
