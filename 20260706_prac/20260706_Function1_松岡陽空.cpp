#include<iostream>
#include"20260706_Header1_松岡陽空.h"

using namespace std;
void Contents()
{
	//変数
	int plyHP = 100;
	int plySelect;

	//画面に表示される言葉
	cout << "HPを回復する場合は１，回復しない場合は２を入力してください" << endl;
	cin >> plySelect;              //入力
	Heal(plyHP,plySelect);         //呼び出し

	cout << "あなたのHPは" << plyHP << "です" << endl;
}
void InputCheck(int min, int max)
{
	int num;
	while (true)
	{
		cin >> num;
		if (min > num|| max < num)
		{
			cout << "入力に誤りがあります。再度入力してください" << endl;
		}
		else
		{
			break;
		}
	}

	
}
void Heal(int & HP,int plySelect)
{
	//HPの回復
	if (plySelect == 1)
	{
		HP += 20;
		cout << "HPが20回復しました" << endl;
	}
	else if (plySelect == 2)
	{
		cout << "あなたは回復しませんでした" << endl;
	}


}