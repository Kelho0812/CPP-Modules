/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:39:27 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/05 15:39:27 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.h"

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::print()
{
	int i;
	print_titles();
	print_all(c_array);
	cout << "\nChoose an Index: " << endl;
	cin >> i;
	cout << "\n";
	print_single(c_array, i);
	cout << endl;
}

void	print_titles(void)
{
	cout << "     Index|";
	cout << "First Name|";
	cout << " Last Name|";
	cout << "  NickName|";
	cout << endl;
}

void	print_all(Contact *c_array)
{
	int i = 0;
	while (i < 8)
	{
		cout << i;
		cout << c_array[i].FirstName;
		cout << c_array[i].LastName;
		cout << c_array[i].NickName;
		cout << endl;
		i++;
	}
}

void	print_single(Contact *c_array, int i)
{
		cout << "First Name: " << c_array[i].FirstName << "\n";
		cout << "Last Name: " <<  c_array[i].LastName << "\n";
		cout << "Nickname: " << c_array[i].NickName << "\n";
		cout << "Darkest Secret: " << c_array[i].DarkestSecret << "\n";
		cout << "Phone Number: " << c_array[i].PhoneNumber << endl;
}

// string format_output(string)
// {

// }