#pragma once

template<typename T>
class Pair1
{
public:
	Pair1(const T& F, const T& S)
		: fi(F), se(S)
	{
	};
	T GetFirst() const { return fi; }
	T GetSecond() const { return se; }

private:
	T fi, se;

};

