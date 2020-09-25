/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-24 22:36:51
 */
#include <iostream>

double Fahrenheit(double celsius ){
    return celsius * 1.8 + 32.0;
}

int main(int argc, char const *argv[])
{
    double celsius, fahrenheit;
    std::cout << "Please eter a Celsius value: ";
    std::cin >> celsius;
    fahrenheit = Fahrenheit(celsius);
    std::cout << "20 degree Celsius is " << fahrenheit << " degrees Fahrenheit" << std::endl;
    return 0;
}
