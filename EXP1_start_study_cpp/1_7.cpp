/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-24 23:23:13
 */
#include <iostream>

void str_time(int &hours, int &minutes){
    std::cout << hours << ":" << minutes << std::endl;
};


int main(int argc, char const *argv[])
{
    int hours;
    int minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    str_time(hours, minutes);
    return 0;
}
