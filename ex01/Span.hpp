#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <stdexcept>

class	Span
{
public:
	Span(unsigned int N);
	Span(Span const &copy);
	~Span();
	Span&	operator=(Span const &copy);

	void		addNumber(int n);
	int			shortestSpan() const;
	int			longestSpan() const;

	template<typename It>
	void		addMultipleNb(It itb, It ite);

private:
	unsigned int		m_N;
	std::vector<int>	m_tab;
};

template<typename It>
void	Span::addMultipleNb(It itb, It ite)
{
	if (static_cast<unsigned int>(std::distance(itb, ite)) > m_N - m_tab.size())
		throw (std::overflow_error("Error : Not enough space to add numbers"));
	for (; itb != ite; itb++)
		addNumber(*itb);
}

#endif
