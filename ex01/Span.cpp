#include "Span.hpp"

#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int N) : m_N(N) {}

void	Span::addNumber(int n)
{
	if (m_tab.size() == m_N)
		throw (std::overflow_error("Error : Span is full"));
	m_tab.push_back(n);
}

int	Span::shortestSpan()
{
	if (m_tab.size() < 2)
		throw (std::logic_error("Error : Not enough numbers to find a span"));
	
}

int Span::longestSpan() const
{
	if (m_tab.size() < 2)
		throw (std::logic_error("Error : Not enough numbers to find a span"));
	std::vector<int>::const_iterator	min = std::min_element(m_tab.begin(), m_tab.end());
	std::vector<int>::const_iterator	max = std::max_element(m_tab.begin(), m_tab.end());

	return (*max - *min);
}
