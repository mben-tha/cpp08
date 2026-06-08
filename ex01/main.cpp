#include "Span.hpp"
#include <iostream>

int main()
{
	try
	{
		Span sp(10000);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(789);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;

		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		std::cout << "\n=== Iterator range test ===" << std::endl;

		std::vector<int> vec;
		vec.push_back(100);
		vec.push_back(101);
		vec.push_back(102);

		Span sp2(10);

		sp2.addMultipleNb(vec.begin(), vec.end());

		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;

		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
