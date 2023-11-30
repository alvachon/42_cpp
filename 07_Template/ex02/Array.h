/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/30 19:34:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template<typename A>
class Array {
    public:
    // Construction sans paramètres : crée un array vide.
        Array(void) : _size(0), _array(new A[0]) { std::cout << "Constructor No Params" << std::endl; return; }
    // Construction avec un paramètre de type unsigned int n
        Array(unsigned int n) : _size(n), _array(new A[n]) { std::cout << "Constructor w/ Default Init" << std::endl; return; }
    // Construction par recopie
        Array(const Array & src) : _array(NULL) { *this = src; std::cout << "Copy constructor" << std::endl; return; }
    // Surcharge de l’opérateur d’affectation.
        Array& operator=(const Array & rhs) {
            if (this != &rhs) {
                this->_size = rhs._size;
                delete [] this->_array;
                this->_array = new A[rhs._size];
    
                for (unsigned int i = 0; i < rhs._size; i++){
                    this->_array[i] = rhs._array[i];
                }
            std::cout << "Surcharge called" << std::endl;   
            }
            return *this;
        }
        virtual ~Array(void) { delete [] this->_array; std::cout << "Deletion ..." << std::endl; return; };

        A& operator[](unsigned int i) const {
            if (i >= this->_size)
                throw std::exception();
            return this->_array[i];
        }

    private:
        unsigned int    _size;
        A               *_array;
};

#endif/* ************************************************** ARRAY_H */
