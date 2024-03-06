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
	std::string input;
	if (index >= 8)
	{
		index = 0;
	}
	cout << "\nFirst Name: \n";
	cin >> input;
	while (!valid_detail(input))
	{
		cout << "Names can only contain alphabetic characters. Try again. \n\n";
		cout << "First Name: \n";
		cin >> input;
	}
	c_array[index].FirstName = input;
	cout << "\nLast Name: \n";
	cin >> input;
	while (!valid_detail(input))
	{
		cout << "Names can only contain alphabetic characters. Try again. \n\n";
		cout << "Last Name: \n";
		cin >> input;
	}
	c_array[index].LastName = input;
	cout << "\nNickName: \n";
	cin >> c_array[index].NickName;
	cout << "\nDarkest Secret: \n";
	cin >> c_array[index].DarkestSecret;
	cout << "\nPhone Number: \n";
	cin >> input;
	while (!isNumeric(input))
	{
		cout << "Numbers can only contain numeric characters. Try again. \n\n";
		cout << "Phone Number: \n";
		cin >> input;
	}
	c_array[index].PhoneNumber = atoi(input.c_str());
	c_array[index].edited = true;
	cout << endl;
	index++;
}

void PhoneBook::print()
{
	int	i;

	std::string input;
	if (c_array[0].edited == false)
	{
		cout << RED "\nList is empty\n" RESET << endl;
		return ;
	}
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
			return (false);
		++it;
	}
	return (true);
}

bool	valid_detail(const std::string &str)
{
	std::string::const_iterator it = str.begin();
	while (it != str.end())
	{
		if (!std::isalpha(*it))
			return (false);
		++it;
	}
	return (true);
}
