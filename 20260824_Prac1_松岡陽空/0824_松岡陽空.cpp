#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //ポインター変数から変数aのアドレスを取得
    int* p = &a;

    cout << "aの初期値: " << a << endl;
    //ポインタ
    *p = 10;//受け取ったアドレスの場所にあった数字を上書き

    cout << "aの変更後の値: " << a << endl;

    return 0;
}