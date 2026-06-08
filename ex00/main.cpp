#include "easyfind.hpp"

#include <iostream>
#include <list>

int main()
{
	std::list<int> tab(12, 7);
	tab.push_back(8);
	std::list<int>::const_iterator it = easyfind(tab, 8);

	if (it == tab.end())
		std::cout << "occurrence not found" << std::endl;
	else
		std::cout << "occurrence found" << std::endl;

	return 0;
}
