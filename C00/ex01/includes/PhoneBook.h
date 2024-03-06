/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:06:46 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/05 15:39:14 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"
# include "General.h"

void	print_titles(void);
void	print_all(Contact *c_array);
void	print_single(Contact *c_array, int i);
bool	isNumeric(const std::string &str);
bool	valid_detail(const std::string &str);
std::string getValidInput(const std::string &prompt, const std::string &error,
	bool (*isValid)(const std::string &));
bool	isValidPhoneNumber(const string &str);
class PhoneBook
{
  private:
	Contact c_array[8];
	int index;

  public:
	void add_contact();
	PhoneBook();
	~PhoneBook();
	void print();
};

#endif