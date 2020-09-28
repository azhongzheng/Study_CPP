/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-28 21:23:48
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    const int hours_per_day = 24;
    const int minutes_per_hours = 60;
    const int seconds_per_minutes = 60;

    long num;
    int days, hours, minutes, seconds;

    cout << "Enter the number of seconds: ";
    cin >> num;
    days = num / seconds_per_minutes / minutes_per_hours / hours_per_day;
    hours = num / seconds_per_minutes / minutes_per_hours % hours_per_day;
    minutes = num / seconds_per_minutes % minutes_per_hours;
    seconds = num % seconds_per_minutes;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " <<minutes << " minutes," << seconds << " seconds."<< endl;

    return 0;
}
