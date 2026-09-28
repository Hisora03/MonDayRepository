#pragma once
#include"player.h"
#include"CPU.h"
#include"CardManager.h"
class Trun
{
public:
	//プレイヤーターン
	bool PlayPlayerTurn(Player* player, CardManager* cardManager);
	//CPUターン
	bool PlayCPUTurn(Player* player,CPU* cpu, CardManager* cardManager);//Cpuはプレイヤーを見て判断させるためプレイヤーも入れる必要がある。

};