#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_松岡陽空.h"
using namespace std;

enum
{
	Rock,
	Scissors,
	Paper,
};
void Game()
{
	//変数
	int CPU;
	int player = 0;
	int i=0;
	int Win = 0;
	int Lose = 0;
	int Draw = 0;
	int EXP=0;

	cout << "GameStart" << endl;
	while (true)
	{
		CPU = rand() % 3;
		{
			
			player = InputCheck(MIN, MAX);
			cout << "player'sHand";
			HandSingPrint(player);
			cout << "CPU'sHand";
			HandSingPrint(CPU);

			if (player == CPU)
			{
				cout << "Draw" << endl;

			}
			else if (player - CPU == -1 || player - CPU == 2)
			{
				cout << "Player Win!" << endl;
				Level(EXP);
			}
			else if (CPU - player == -1 || CPU - player == 2)
			{
				cout << "CPU Win!" << endl;
			}
	
        }
		
	}
	
}
void HandSingPrint(int handSing)
{
	switch (handSing)
	{
	case Rock:
		cout << "グー\n";
		break;
	case Scissors:
		cout << "チョキ\n";
		break;
	case Paper:
		cout << "パー\n";
		break;
	}
}
//入力チェック
int InputCheck(int min, int max)
{
	//変数
	int num;
	//入力チェック
	while (true)
	{
		//入力
		cout << "０，グー、１，チョキ、２，パーの数字で入力してください。" << endl;
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}

	}

	return num;
}
void Level(int EXP)
{
	//経験値１～１５ランダム
    EXP= rand() % 16;
	if (rand == 0)
	{
		EXP = rand() % 16;
	}
	cout << "あなたは" << EXP << "経験値を手に入れた" << endl;
	EXP++;
	cout << "現在のEXPは" << EXP << "です" << endl;
}
