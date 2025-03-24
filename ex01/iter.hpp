/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvannest <mvannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:39:46 by mvannest          #+#    #+#             */
/*   Updated: 2025/03/24 19:10:34 by mvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	print(T &element) {
	std::cout << element << " ";
}

template<typename T>
void	increment(T &element) {
	element++;
}

template<typename T>
void	iter(T *array, int size, void (*func)(T &)) {
	for (int i = 0; i < size; i++) {
		func(array[i]);
	}
}