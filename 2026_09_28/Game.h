#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Config.h"

using namespace std;

int InputCheck()
{
	int num;

	while (true)
	{
		cin >> num;

		if (0 > num || 1 < num)
		{
			cout << "入力に誤りがあります。再度入力してください\n";
		}
		else
		{
			break;
		}
	}
	return num;
}
void Card()
{
	srand((unsigned int)time(NULL));
	int card = rand() % (CARD_MAX - CARD_MIN + 1) + CARD_MIN;
	cout << "カードを引きました。" << endl;
	cout << "引いたカードは" << card << "です。" << endl;
}
int Game()
{
	cout << "ブラックジャックゲームを行います" << endl;
	cout << "21を超えないようにカードを引き、21に近い方が勝者です。" << endl;
	cout << "ゲームを開始します。" << endl;

	cout << "それでは今からカードを二枚配ります。" << endl;

}