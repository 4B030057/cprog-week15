#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式


// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

void dump(int dat[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << setw(5) << dat[i];
    }
    cout << endl;
}

const int MAX_LEN = 50;

int main()
{
    int cnt[7];
    int dice[MAX_LEN];
    int rn;
    cnt[0] = 0;

    while (cin >> rn)
    {
        dice[cnt[0]] = rn;
        cnt[0]++;
    }

    analysis(dice, cnt);
    dump(cnt, 7);

    return 0;
}