#include<iostream>
#include"20260706_Header1_¼‰ª—z‹ó.h"

using namespace std;
void Contents()
{
	//•Ï”
	int plyHP = 100;
	int plySelect;

	//‰æ–Ê‚É•\¦‚³‚ê‚éŒ¾—t
	cout << "HP‚ğ‰ñ•œ‚·‚éê‡‚Í‚PC‰ñ•œ‚µ‚È‚¢ê‡‚Í‚Q‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	cin >> plySelect;
	Heal(plyHP,plySelect);

	cout << "‚ ‚È‚½‚ÌHP‚Í" << plyHP << "‚Å‚·" << endl;
}
void Heal(int & HP,int plySelect)
{
	
	if (plySelect == 1)
	{
		HP += 20;
		cout << "HP‚ª20‰ñ•œ‚µ‚Ü‚µ‚½" << endl;
	}
	else if (plySelect == 2)
	{
		cout << "‚ ‚È‚½‚Í‰ñ•œ‚µ‚Ü‚¹‚ñ‚Å‚µ‚½" << endl;
	}


}