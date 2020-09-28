/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-28 20:39:42
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ht_inch;
    int ht_feet;
    int wt_pound;
    double wt_kg;
    double ht_m;
    double BMI;
    cout << "please you stature of feet part: ";
    cin >> ht_feet;
    cout << "please you stature of inch part: ";
    cin >> ht_inch;
    cout << "please you weight of pound: ";
    cin >> wt_pound;
    wt_kg = wt_pound/2.2;
    ht_m = (ht_feet * 12 + ht_inch) * 0.0254;
    BMI = wt_kg/ht_m;
    cout << "stature is " << ht_m << " m, and weight is " << wt_kg << " kg" << endl;
    cout << "BMI value is " << BMI << endl;
    return 0;
}
