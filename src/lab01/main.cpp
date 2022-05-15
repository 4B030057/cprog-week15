#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int arr[100];
    int i = 0;
    int s, e;

    cin >> s;
    cin >> e;

    while (cin >> arr[i++])
        ;
    i--;

    dump(arr, i, s, e);

    return 0;
}