// 題目內容:輸入第一行數字N代表接下來有N行資料，接著每行有不定個數的整數(最多20個，每行最大200個字元)，請把每行的總和印出來。
// 輸入:輸出:
// 4
// 1 1 2 3 5 8 13
// 1 1 5
// 11 557 996 333
// 2 4 6
// 輸出
// 33
// 7
// 1897
// 12

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    while (n -- )
    {
        getline(cin, str);
        stringstream ssin(str);
        
        int sum = 0, n;
        while (ssin >> n)
            sum += n;
        
        cout << sum << endl;
    }

    return 0;
}