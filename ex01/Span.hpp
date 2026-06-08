#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

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

private:
	unsigned int		m_N;
	std::vector<int>	m_tab;
};

#endif