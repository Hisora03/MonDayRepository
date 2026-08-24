#include<iostream>
using namespace std;
//・配列の値を任意の数字を入力して入力した数字分を倍にする処理は関数にしてください。
//・main関数では、配列を作成して関数を呼び出してください。
//・関数には配列と要素数を渡してください。
//・for文を使用してください。
//・関数の中で配列の値を変更してください。
int Processing(int *pNum,int element)//処理
{
	int num;
	cout << "何倍にしますか？" << endl;
	cin >> num;
	for (int i = 0; i < element; i++)
	{
		pNum[i] = pNum[i] * num;
		
		cout << pNum[i] << endl;
	}
	return *pNum;
}
int main(void)
{
	//定数
	const int MAX = 5;
	int numbers[5] = { 10,20,30,40,50 };
	int* pNum;
	pNum = numbers;
	
	Processing(pNum,MAX);
	return 0;
}