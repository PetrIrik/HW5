

#include <iostream>
#include"Task.h"
#include"Task2.h"
#include"Task3.h"



int main()
{
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.GetFirst() << ' ' << p1.GetSecond() << std::endl;

	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.GetFirst() << ' ' << p2.GetSecond() << std::endl;
	
	std::cout << std::endl;
	std::cout << "Task 2 " << std::endl;

	Pair<int, double> p3(6, 7.8);
	std::cout << "Pair: " << p3.GetFirst() << ' ' << p3.GetSecond() << std::endl;

	const Pair<double, int> p4(3.4, 5);
	std::cout << "Pair: " << p4.GetFirst() << ' ' << p4.GetSecond() << std::endl;

	std::cout << std::endl;
	std::cout << "Task 3" << std::endl;
	StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.GetFirst() << ' ' << svp.GetSecond() << '\n';
	
	return 0;
}
