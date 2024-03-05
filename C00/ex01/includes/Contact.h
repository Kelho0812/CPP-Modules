/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:13:05 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/05 11:13:05 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include "General.h"

class Contact
{
  public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string DarkestSecret;
	int PhoneNumber;
	bool edited;
	Contact()
	{
		FirstName = "Teste";
		LastName = "Teste";
		NickName = "Teste";
		DarkestSecret = "";
		PhoneNumber = 0;
		edited = false;
	};
	Contact(std::string firstname, 
		std::string lastname, 
		std::string nickname,
		std::string darkestsecret, 
		int phonenumber)
	{
		FirstName = firstname;
		LastName = lastname;
		NickName = nickname;
		DarkestSecret = darkestsecret;
		PhoneNumber = phonenumber;
		edited = true;
	};
};

#endif
