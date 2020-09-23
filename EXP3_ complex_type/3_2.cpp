/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-23 21:51:55
 */
#include <iostream>

int main() {
    using namespace std;

    std::string name;
    std::string dessert;

    cout << "Enter your name\n";
    // cin >> name;
    getline(cin, name);
    cout << "Enter your favorite dessert\n";
    // cin >> dessert;
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}