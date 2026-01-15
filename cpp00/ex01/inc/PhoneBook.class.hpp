/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:34:56 by mbah              #+#    #+#             */
/*   Updated: 2026/01/09 15:51:27 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.class.hpp"

/**
 * @class PhoneBook
 * @brief Manages up to 8 contacts with cyclic replacement.
 *
 * The PhoneBook handles user interactions such as adding
 * and searching contacts.
*/
class PhoneBook {
	private:
		Contact _entries[8];
		int     _nextSlot;
		int     _storedCount;

		std::string _readLine(const std::string& prompt) const;
		void        _printColumn(const std::string& text) const;
		void        _showTable() const;
		void        _showContactDetails(int index) const;

	public:
		PhoneBook();
		~PhoneBook();

		void addEntry();
		void searchEntry() const;
};

#endif
