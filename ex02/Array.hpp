/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:32:56 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/01 11:59:58 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int sizeArr;

	public:
	
		unsigned int size();

		Array &operator=(Array const &obj);
		T &operator[](unsigned int i);

		Array(unsigned int n);
		Array(Array const &obj);
		Array();
		~Array();


		class OutOfBoundsException : public std::exception
		{
			public:
				std::string const what() const throw()
				{
					return ("Error, index is out of bounds");
				}
		};

};

template <typename T>
Array::Array()
{
	this->arr = new arr[];
	this->sizeArr = 0;
}

template <typename T>
Array::Array(Array const &obj)
{
	(*this) = obj;
}

template <typename T>
Array::Array(unsigned int n)
{
	this->sizeArr = n;
	this->arr = new arr[n];

	for (unsigned int i = 0; i < n; i++)
		this->arr[i] = NULL;
}

template <typename T>
Array::~Array()
{
	delete this->arr;
}

template <typename T>
unsigned int Array::size()
{
	return (this->sizeArr);
}

template <typename T>
T Array::operator[](unsigned int i)
{
	if(i > this->sizeArr)
		throw Array::OutOfBoundsException();
	return (this->arr[i]);
}

template <typename T>
Array Array::operator=(Array const &obj)
{
	this->sizeArr = obj.n;

	for (int i = 0; i < this->sizeArr; i++)
		this->arr[i] = obj.arr[i];

	return (*this);
}









