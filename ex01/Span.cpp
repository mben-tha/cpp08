#include "Span.hpp"

#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int N) : m_N(N) {}

Span::Span(Span const& copy) : m_N(copy.m_N)
{
	m_tab = copy.m_tab;
}

Span::~Span() {}

Span&	Span::operator=(Span const& copy)
{
	if (this != &copy)
	{
		m_N = copy.m_N;
		m_tab = copy.m_tab;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (m_tab.size() == m_N)
		throw (std::overflow_error("Error : Span is full"));
	m_tab.push_back(n);
}

int	Span::shortestSpan() const
{
	if (m_tab.size() < 2)
		throw (std::logic_error("Error : Not enough numbers to find a span"));
	
	std::vector<int>	copy(m_tab);

	std::sort(copy.begin(), copy.end());
	int min = copy[1] - copy[0];

	for (unsigned int i = 0; i < copy.size() - 1; i++)
	{
		if (copy[i+1] - copy[i] < min)
			min = copy[i+1] - copy[i];
	}
	return  (min);
}

int Span::longestSpan() const
{
	if (m_tab.size() < 2)
		throw (std::logic_error("Error : Not enough numbers to find a span"));
	std::vector<int>::const_iterator	min = std::min_element(m_tab.begin(), m_tab.end());
	std::vector<int>::const_iterator	max = std::max_element(m_tab.begin(), m_tab.end());

	return (*max - *min);
}
