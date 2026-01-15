/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:34:51 by mbah              #+#    #+#             */
/*   Updated: 2026/01/09 15:52:19 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

/**
 * @class Contact
 * @brief Represents a single entry in the phonebook.
 *
 * A Contact stores personal information entered by the user.
 * All fields must be non-empty to be considered valid.
*/
class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _alias;
		std::string _phoneNumber;
		std::string _confidentialInfo;
		
		bool _isAlpha(const std::string& value) const;
		bool _isNumeric(const std::string& value) const;

	public:
		Contact();
		~Contact();

		bool isDefined(void) const;
		
		void setFirstName(const std::string& value);
		void setLastName(const std::string& value);
		void setAlias(const std::string& value);
		void setPhoneNumber(const std::string& value);
		void setConfidentialInfo(const std::string& value);

		const std::string& getFirstName(void) const;
		const std::string& getLastName(void) const;
		const std::string& getAlias(void) const;
		const std::string& getPhoneNumber(void) const;
		const std::string& getConfidentialInfo(void) const;
};

#endif