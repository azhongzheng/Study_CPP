/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-23 20:57:55
 */
#include <iostream>
using namespace std;

const int maxsize = 20;
struct information {
    char firstname[maxsize];
    char lastname[maxsize];
    char grade;
    int age;
};

int main(int argc, char const *argv[]) {
    information info;
    cout << "what is your first name?" << endl;
    cin.getline(info.firstname, maxsize);
    cout << "what is  your last name?" << endl;
    cin.getline(info.lastname, maxsize);
    cout << "what letter grade do you deserve?" << endl;
    cin >> info.grade;
    cout << "what is your age?" << endl;
    cin >> info.age;

    cout << "name: " << info.firstname << " " << info.lastname << endl;
    cout << "grade: " << char(info.grade + 1) << endl;
    cout << "age: " << info.age << endl;
    return 0;
}
