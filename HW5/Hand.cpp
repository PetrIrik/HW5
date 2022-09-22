#include <iostream>

#include "Card.h"
#include "Hand.h"


Hand::Hand()
{
}


void Hand::Add(const Card* pCard) {
	m_aCards.push_back(pCard);
}


void Hand::Clear() {
	m_aCards.clear();
}


const int Hand::GetValue() const{
	int nSum = 0;

	for (const Card* pCard : m_aCards) {
		Value eValue = pCard->GetValue();
		nSum += (eValue == Value::ACE && nSum > 10) ? 1 : Card::ValueToScore(eValue);
	}

	return nSum;
}


void Hand::Print() {
	if (!m_aCards.empty()) {
		for (const Card* pCard : m_aCards) {
			std::cout << pCard->toString() << std::endl;
		}
	}
	else {
		std::cout << "Рука пустая\n";
	}
}

GenericPlayer::GenericPlayer(std::string& Name)
	: mName(Name)
{
}

bool GenericPlayer::Inboosted()const 
{
	return (GetValue() > 21);
}

bool GenericPlayer::InHitting()const
{
	return false;
}

void GenericPlayer::Bust()const
{
	std::cout << mName << "enumeration" << std::endl;
}