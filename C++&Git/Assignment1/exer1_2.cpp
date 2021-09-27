// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

// the starting of program
int main()
{
    // the input, a float number of hours
    float hourRaw = 0;

    // the output, how many hours, minutes, seconds
    int hour = 0, min = 0, sec = 0;

    // get input from the console
    cout << "Enter the float number of hours: " << endl;
    cin >> hourRaw;

    /* Write your code under this line */
    // hour = ?
    // min = ?
    // sec = ?
    /* Write your code above this line */

    // output the result
    cout << hourRaw << " hours = " << hour << " hours, " << min << " mins, " << sec << " secs." << endl;

    // end of the program
    return 0;
}