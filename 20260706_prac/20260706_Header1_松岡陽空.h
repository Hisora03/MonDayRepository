#pragma once
//定数
const int HP_MAX = 100;
const int RECOVERYAMOUNT = 20;
const int MIN = 1;
const int MAX = 2;

//関数プロトタイプ宣言
void Heal(int& HP, int plySelect);
/// <summary>
///入力チェック
/// </summary>
void InputCheck(int min, int max);
void Contents();