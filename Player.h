#pragma once
#include "Deck.h"

const string InPlay = "InPlay";
const string Fold = "Fold";
 

class Player
{
	Deck deck;
	string name;
	int position;
	Card hand[5];  // vector<card> hand;
	string status;
	int chips;
public:
	Player(int players = 0)
	{
		chips = 0;
		status = "";
		name = "";
		position = 0;


	}
	void Initialize(int numPlayers = 1)
	{
		for(int i = 0; i < numPlayers; i++)
		{
             
		}

	}
	//Discard();
	//Draw();



};

