#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(T const& t, int nb)
{
	return (std::find(t.begin(), t.end(), nb));
}

#endif