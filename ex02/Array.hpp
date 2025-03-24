/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvannest <mvannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:36:25 by mvannest          #+#    #+#             */
/*   Updated: 2025/03/24 20:40:17 by mvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include  <stdexcept>

template<typename T>
class	Array
{
	private:
		unsigned int	_size;
		T				*_array;

	public:
//Construcors, destructor, overload;
		Array(void) {
			this->_array = 0;
			this->_size = 0;
		};
		Array(int size) {
			this->_size = size;
			if (size == 0)
				this->_array = NULL;
			else
				this->_array = new T[size];
		}
		Array(const Array &other) : _size(other._size) {
			this->_array = new T[this->size];
			for (int i = 0; i < this->_size; i++) {
				this->_array[i] = other._array[i];
			}
		}
		~Array(void) {
			if (this->_array != NULL)
				delete[] (this->_array);
		}
		Array	&operator=(const Array &other) {
			if (this != &other) {
				this->_size = other._size;
				if (this->_array != NULL)
					delete[] (this->_array);
				if (other._array != NULL) {
					this->_array = new T[other._size];
					for (int i = 0; i < this->_size; i++)
						this->_array[i] = other._array[i];
				}
			}
			return (*this);
		}
		T	&operator[](unsigned int index) {
			if (index > this->_size)
				throw std::out_of_range("Index for array is out of range");
			return (this->_array[index]);
		}
		const T	&operator[](unsigned int index) const {
			if (index > this->_size)
				throw std::out_of_range("Index for array is out of range");
			return (this->_array[index]);
		}
		int		size(void) const {
			return (this->_size);
		}
};