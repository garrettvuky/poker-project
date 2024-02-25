#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

const int UN_INIT = -1;
const int HEARTS = 0;
const int SPADES = 1;
const int DIAMONDS = 2;
const int CLUBS = 3;

const int ACE =   0;
const int JACK =  10;
const int QUEEN = 11;
const int KING =  12;


class Card
{
	bool assigned;
	bool discard;

	int suit;   // 0=Hearts, 1=Clubs..
	int card_num;  

	int actualRandVal;  // from 0 to 51

public:
	Card()
	{
		assigned = false;
		discard = false;
		suit = UN_INIT;
		card_num = UN_INIT;
		actualRandVal = -1;
	}

	void SetCard(int temp)
	{
		actualRandVal = temp;
		suit = actualRandVal % 4;   //  0 to 3
  		card_num = actualRandVal % 13;  // 0 to 12
		Assign();
	}

	
	string GetCardImage()  const  
	{
		string cardImage = "";

		switch (card_num)
		{
			case ACE:    cardImage = "Ace"; break;
			case JACK:   cardImage = "Jack"; break;
			case QUEEN:  cardImage = "Queen"; break;
			case KING:   cardImage = "King"; break;
			default:  cardImage = to_string(card_num+1);
		}
		cardImage += " of ";

		switch (suit)
		{
		case HEARTS:  cardImage += "Hearts"; break;
		case SPADES:  cardImage += "Spades"; break;
		case DIAMONDS:  cardImage += "Diamonds"; break;
		case CLUBS:  cardImage += "Clubs"; break;
		default: cardImage += "Invalid Suit";
		}
		return cardImage;
	}



	void Discard() { discard = true; }
	void Assign() { assigned = true; }



};

