#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式
int main() {
    int dat[20];
    int d[10];
 
    for(int i=0; i<20; i++)
        dat[i] = 0;
 
    for(int i=0; i<10; i++)
        d[i] = i+1;
 
    for(int i=0; i<10; i++)
        dat[i+10] = d[i];
 
    copy(dat,d,10,5);
   
    dump(dat,20);
    dump(d,10);
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
