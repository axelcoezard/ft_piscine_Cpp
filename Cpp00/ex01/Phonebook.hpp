/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:41:50 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/30 15:51:42 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	*_contacts[8];
		int	_limit;
		int	_size;
	public:
		Phonebook(void);
		void	operator+=(Contact *contact);
		Contact *operator[](int index);
		~Phonebook(void);
};
