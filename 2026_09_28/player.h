#pragma once
class Player
{
public:
	int total;
private:
	//コンストラクタ
	Player();
	//カードを追加
	void AddCard(int card);
	//合計点を取得する
	int GetTotal();
	//現在の状況を表示
	void ShowStatus();
};

