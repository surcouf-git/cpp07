/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvannest <mvannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:59:40 by mvannest          #+#    #+#             */
/*   Updated: 2025/03/25 14:28:43 by mvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int	main()
{
	char	c = 97;
	Array<int>			arrayInt(36);
	Array<char>			arrayChar(14);
	Array<std::string>	arrayString(3);

	for (int i = 0; i < 100; i++, c++) {
		if (i < arrayChar.getSize())
			arrayChar[i] = c;
		if (i < arrayInt.getSize())
			arrayInt[i] = (i * 11);
	}
	arrayString.fillcase("salut", 1);
	arrayString.fillcase("ca", 2);
	arrayString.fillcase("va ?", 3);
	try
	{
		for (int i = 0; i < 100; i++) {
			if (i <= arrayChar.getSize())
				std::cout	<< arrayChar[i] << '\n';
		}
		for (int i = 0; i < 100; i++) {
			if (i <= arrayInt.getSize())
				std::cout	<< arrayInt[i] << '\n';
		}
		for (int i = 0; i < 100; i++) {
			if (i <= arrayString.getSize())
				std::cout	<< arrayString[i] << '\n';
		}
	}
	catch (std::exception &e)
	{
		std::cout	<< e.what() << '\n';
	}
	return (0);
}

//main du sujet;

/* #define MAX_VAL 750
int main(int, char**)
{
	Array<int>	numbers(MAX_VAL);
	int			*mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int	value = rand();
		mirror[i] = value;
		numbers[i] = value;
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
} */