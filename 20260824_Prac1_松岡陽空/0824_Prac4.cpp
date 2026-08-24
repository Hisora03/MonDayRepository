#include<iostream>
using namespace std;
//・配列の要素を取得するときに numbers[i] を使用してはいけません。
//・配列の先頭アドレスをポインタに保存してください。
//・ポインタを使って配列の各要素を取得してください。
//・for文を使用してください。
//・最大値を保存するための変数を用意してください。
int main(void)
{
	//変数
	int numbers[5] = { 35,82,17,96,54 };
	int* pNum;//ポインタ
	pNum = numbers;//アドレスを取得
	int Max = 0;//最大

	Max = numbers[0];//配列の最初の数を仮最大とする

	for (int i = 0; i < 5; i++)
	{
		if (pNum[i] > Max)//仮最大より大きい数字の場合
		{
			Max = pNum[i];//最大値として代入
		}
	}
	cout << Max << "がMAX値です" << endl;
	return 0;
}