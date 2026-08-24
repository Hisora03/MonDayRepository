#include<iostream>
using namespace std;

int main(void)
{
	//変数
	int number[5] = { 10,20,30,40,50 };
	int* pNum;//ポインタ
	//ポインタからnumberのアドレスを取得
	pNum = number;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "pNum:" << *(pNum + i) << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> *(pNum + i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "pNum:" << *(pNum + i) << endl;
	}
	return 0;
}