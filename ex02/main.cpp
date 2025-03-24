/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvannest <mvannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:59:40 by mvannest          #+#    #+#             */
/*   Updated: 2025/03/24 20:36:32 by mvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int	main()
{
	Array<int>	array(36);
	try
	{
		std::cout	<< array[35] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout	<< e.what() << '\n';
	}
	return (0);
}