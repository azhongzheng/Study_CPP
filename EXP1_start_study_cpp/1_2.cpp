/*
 * @Description: 
 * @Author: zhengchengzhong
 * @Date: 2020-09-24 22:10:27
 */
#include <iostream>

int main(int argc, char const *argv[])
{
    int length_long, length_yard;
    std::cout << "请输入以 long 为单位的距离：" << std::endl;
    std::cin >> length_long;
    length_yard = length_long * 220;
    std::cout << "转换为码之后：" << std::endl;
    std::cout << length_yard << std::endl;
    return 0;
}
