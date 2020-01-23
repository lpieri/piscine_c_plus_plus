/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:24:57 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/23 12:23:26 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
private:
	T *		_array;
	uint	_size;

public:
	Array<T>(void) : _array(new T[0]()), _size(0) {}

	Array<T>(uint nb) : _array(new T[nb]()), _size(nb) {}

	Array(Array<T> const & src) : _array(nullptr) {
		*this = src;
	}

	~Array(void) {
		delete [] this->_array;
	}

	class		IndexTooHighException : public std::exception {
		public:
			virtual const char *	what() const throw() {
				return ("The index to access the value is too high !");
			}
	};

	uint		getSize(void) const {
		return (this->_size);
	}

	T			getValueArray(uint i) const {
		if (i > this->_size) {
			throw Array<T>::IndexTooHighException();
		}
		return (this->_array[i]);
	}

	void		setValueArray(uint i, T value) {
		if (i > this->_size) {
			throw Array<T>::IndexTooHighException();
		}
		this->_array[i] = value;
	}

	Array<T> const &	operator=(Array<T> const & rhs) {
		if (this->_array != nullptr)
			delete [] this->_array;
		this->_size = rhs.getSize();
		this->_array = new T[this->_size];
		for (uint i = 0; i < this->_size; i++)
		{
			this->_array[i] = rhs.getValueArray(i);
		}
		return (*this);
	}

};

#endif