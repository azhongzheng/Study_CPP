/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-24 22:44:41
 */
#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    double light_year;
    int ast_unit = 63240;
    std::cout << "Enter the number of light years: ";
    std::cin >> light_year;
    std::cout << light_year << " lights years = "<< light_year * ast_unit << " astronomical unit" << std::endl;
    return 0;
}
