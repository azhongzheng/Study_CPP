/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-28 21:46:34
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    long long World_population;
    long long US_population;
    cout << "Enter the world population: ";
    cin >> World_population;
    cout << "Enter the population of the US: ";
    cin >> US_population;
    double rate;
    rate = (double)US_population / World_population * 100;
    cout << "The population of the US is " << rate << "% of the world population." << endl;
    return 0;
}
