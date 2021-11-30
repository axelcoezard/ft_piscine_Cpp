/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:29:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/30 14:36:50 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) { }

void	Contact::set_firstname(std::string firstname)
{ this->_firstname = firstname; }

void	Contact::set_lastname(std::string lastname)
{ this->_lastname = lastname; }

void	Contact::set_nickname(std::string nickname)
{ this->_nickname = nickname; }

void	Contact::set_phone_number(std::string phone_number)
{ this->_phone_number = phone_number; }

void	Contact::set_darkest_secret(std::string darkest_secret)
{ this->_darkest_secret = darkest_secret; }

Contact::~Contact(void) { }
