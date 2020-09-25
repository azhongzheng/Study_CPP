/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-24 22:26:40
 */
#include <iostream>

void mice(){
    std::cout << "three blind mice" << std::endl;
} 
void run(){
    std::cout << "See how they run" << std::endl;
}

int main(int argc, char const *argv[])
{
    mice();
    mice();
    run();
    run();
    return 0;
}
