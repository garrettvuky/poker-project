#pragma once
#include <vector>
using namespace std;
#include "Card.h"

const int MAXCARDS = 52;

class Deck
{
	vector<Card> cards; 
	bool used[MAXCARDS];

public:
	Deck()
	{
		// Initialize the array tracking 
		for (int i = 0; i < MAXCARDS; i++)
			used[i] = false;
		Shuffle();
	}

	void Shuffle()
	{
		int temp;
		srand(100);   // srand(NULL);
		for (int i = 0; i < MAXCARDS; i++)
		{
			Card card;
			do
			{
		 		temp = rand() % MAXCARDS;  // 0 -51
			} while (used[temp]);

			used[temp] = true;
			card.SetCard(temp);
			cards.push_back(card);
		}

		//Print("Proj4_debug.txt");
		Print();

	}

	void Print(string fileName)
	{
		ofstream out;
		out.open("Debug.txt");
		out << "\nPrinting the deck:" << endl;
		for (int i = 0; i < cards.size(); i++)
		{
				out << cards[i].GetCardImage() << endl;
		}
		out.close();
	}
	void Print()
	{
		cout << "\nPrinting the deck:" << endl;
		for (int i = 0; i < cards.size(); i++)
			cout << cards[i].GetCardImage() << endl;
	}


};

