#pragma once

#include<string>
#include "Task2.h"

template<typename T>
class StringValuePair:public Pair<std::string,T>
{
public:
	StringValuePair(const std::string &stg, const T &sc)
		:Pair<std::string, T>(stg, sc)
	{
	};
};

