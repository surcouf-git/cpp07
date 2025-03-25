/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvannest <mvannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:39:48 by mvannest          #+#    #+#             */
/*   Updated: 2025/03/25 14:59:16 by mvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int		size = 11;
	{
		int	*ptr = new int[size];

		for (int i = 0; i < size; i++) {
			ptr[i] = i * size;
		}
		::iter(ptr, size, print);
		::iter(ptr, size, increment);
		std::cout	<< '\n';
		::iter(ptr, size, print);
		std::cout	<< "\n\n";
		delete[] (ptr);
	}
	{
		int		alphabet  = 97;
		char	*tab = new char[size];

		for (int i = 0; i < size; i++, alphabet++) {
			tab[i] = static_cast<char>(alphabet);
		}
		::iter(tab, size, print);
		std::cout	<< '\n';
		::iter(tab, size, increment);
		::iter(tab, size, print);
		std::cout	<< "\n\n";
		delete[] (tab);
	}
	{
		float	fvalue = 0.0f;
		float	*ptr = new float[size];

		for (int i = 0; i < size; i++, fvalue += 0.31) {
			ptr[i] = fvalue;
		}
		
		::iter(ptr, size, print);
		::iter(ptr, size, increment);
		std::cout	<< '\n';
		::iter(ptr, size, print);
		std::cout	<< '\n';
		delete[] (ptr);
	}
}