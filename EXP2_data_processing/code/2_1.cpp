/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-27 22:32:26
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    const int inch_per_feet = 12;
    int ht_inch;
    int ht_feet;
    int rm_inch;
    cout << "please enter your ht in inches: ___\b\b\b";
    cin >> ht_inch;

    ht_feet = ht_inch / 12;
    rm_inch = ht_inch % 12;
    cout << "you height is "<< ht_feet << " feet, and "<<rm_inch << " inches" << endl;
    return 0;
}
