// https://home.gamer.com.tw/creationDetail.php?sn=4114818

#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    stringstream s1; // 字符串流对象
    int num = 1234;
    string output;

    cout << "num = " << num << endl;

    s1 << num; // 可以讲 int 放入字符串流对象中
    s1 >> output; // 从字符串流对象 => +流向 => 输出字符串中

    cout << "output = " << output << endl;

    return 0;
}