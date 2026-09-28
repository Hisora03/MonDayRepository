#include "Player.h"
#include<iostream>

using namespace std;

Player::Player()
{
	total = 0;
}

void Player::AddCard(int card)
{
	total += card;
}

int Player::GetTotal()
{
	return total;
}

void Player::ShowStatus()
{
	cout << "プレイヤーの合計:" << total << "です。" << endl;
}