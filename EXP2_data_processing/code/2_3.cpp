/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-28 21:06:27
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    const int minutes_per_degree = 60;
    const int seconds_per_minute = 60;

    int degrees;
    int minutes;
    int seconds;

    double result;

    cout << "First,enter the degrees: ";
    cin >> degrees;
    cout << "Next,enter the minutes of arc: ";
    cin >> minutes;
    cout << "Fianlly,enter the seconds of arc: ";
    cin >> seconds;

    result = (double)degrees + (double)minutes/minutes_per_degree + (double)seconds/minutes_per_degree/seconds_per_minute;
    cout << "1degrees,2minutes,3seconds = " << result << endl;
    return 0;
    

}
