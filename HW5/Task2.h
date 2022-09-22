#pragma once
template<typename T1,typename T2>
class Pair
{
public:
	Pair(const T1& F, const T2& S)
		: fi(F), se(S)
	{
	};
	T1 GetFirst() const { return fi; }
	T2 GetSecond() const { return se; }

private:
	T1 fi;
	T2 se;
};

