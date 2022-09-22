#ifndef HAND_H
#define HAND_H

#include <vector>
#include<string>
#include "Card.h"

class Hand {
public:
	Hand();

	void Add(const Card* pCard);
	void Clear();
	const int GetValue()const;
	void Print();

protected:
	std::vector<const Card*> m_aCards;
};

class GenericPlayer: public Hand
{
public:
	GenericPlayer(std::string &Name);
	virtual ~GenericPlayer()= default;
	virtual bool InHitting()const = 0;
	bool Inboosted()const;
	void Bust()const;

private:
	std::string mName;
};

#endif // __HAND_H