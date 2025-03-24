/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvannest <mvannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:35:34 by mvannest          #+#    #+#             */
/*   Updated: 2025/03/24 18:25:40 by mvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T &val1, T &val2) {
	T	tempValue;

	tempValue = val1;
	val1 = val2;
	val2 = tempValue;
}

template<typename T>
T	min(T &val1, T &val2) {
	return ((val1 < val2) ? val1 : val2);
}

template<typename T>
T	max(T &val1, T &val2) {
	return ((val1 > val2) ? val1 : val2);
}