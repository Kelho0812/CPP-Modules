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

void PhoneBook::add_contact()
{
	if (index >= 8)
	{
		index = 0;
	}
}

void PhoneBook::print()
{
	int	i;

	std::string input;
	print_titles();
	print_all(c_array);
	cout << "\nChoose an Index: " << endl;
	cin >> input;
	cout << "\n";
	if (isNumeric(input))
	{
		i = atoi(input.c_str());
		if (i > 7 || i < 0 || c_array[i].edited == false)
		{
			cout << "Index is invalid.";
			cout << endl;
		}
		else
		{
			print_single(c_array, i);
			cout << endl;
		}
	}
	else
	{
		cout << "Index is invalid.";
		cout << endl;
	}
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
	int	i;

	i = 0;
	while (i < 8)
	{
		//#TODO add IF for un-edited contacts
		std::cout << std::setw(10);
		cout << i;
		std::cout << "|";
		std::cout << std::setw(10);
		cout << c_array[i].FirstName;
		std::cout << "|";
		std::cout << std::setw(10);
		cout << c_array[i].LastName;
		std::cout << "|";
		std::cout << std::setw(10);
		cout << c_array[i].NickName;
		std::cout << "|";
		cout << endl;
		i++;
	}
}

void	print_single(Contact *c_array, int i)
{
	cout << "First Name: " << c_array[i].FirstName << "\n";
	cout << "Last Name: " << c_array[i].LastName << "\n";
	cout << "Nickname: " << c_array[i].NickName << "\n";
	cout << "Darkest Secret: " << c_array[i].DarkestSecret << "\n";
	cout << "Phone Number: " << c_array[i].PhoneNumber << endl;
}

bool	isNumeric(const std::string &str)
{
    std::string::const_iterator it = str.begin();
    while (it != str.end())
    {
        if (!std::isdigit(*it))
            return false;
        ++it;
    }
    return true;
}