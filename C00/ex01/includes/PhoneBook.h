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

class PhoneBook
{
  private:
	Contact c_array[8];
	int index;

  public:
	PhoneBook();
	~PhoneBook();
	void print();
};

#endif