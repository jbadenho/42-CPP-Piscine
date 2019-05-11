/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <jcasian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 22:03:02 by jcasian           #+#    #+#             */
/*   Updated: 2019/05/10 22:17:46 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <string>
#include <list>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T> {

public:
	/* Constructors */
	MutantStack<T>(void) {
		return ;
	}

	MutantStack(MutantStack const &src) {
		*this = src;
		return;
	}

	/* Destructor */
	virtual ~MutantStack<T>(void) {
		return ;
	}

	/* Operators */
	MutantStack	&operator=(MutantStack const &) {
		return *this;
	}

	T top(void) {
		return _stack.front();
	}

	T size(void) {
		return _stack.size();
	}

	typedef std::list<int>::iterator iterator;

	iterator begin() {
		return _stack.begin();
	}

	iterator end() {
		return _stack.end();
	}

	void push(T value) {
		_stack.push_front(value);
	}
	
	void pop(void) {
		_stack.pop_front();
	}
	
protected:

private:
	std::list<T> _stack;
};

#endif
