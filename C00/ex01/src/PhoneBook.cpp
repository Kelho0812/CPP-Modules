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
	string	w_error_message = "Names can only contain alphabetic characters. Try again.";
	string	n_error_message = "Numbers can only contain numeric characters between 0 and 999999999. Try again.";

	if (index >= 8)
		index = 0;
	c_array[index].FirstName = getValidInput("First Name:", w_error_message, valid_detail);
	c_array[index].LastName = getValidInput("Last Name:", w_error_message, valid_detail);
	cout << "\nNickName: \n";
	cin >> c_array[index].NickName;
	cout << "\nDarkest Secret: \n";
	cin.ignore(); // ignore the newline character left in the buffer by cin
    std::getline(cin, c_array[index].DarkestSecret);
	std::string phoneNumber = getValidInput("Phone Number:", n_error_message,
			isValidPhoneNumber);
	c_array[index].PhoneNumber = atoi(phoneNumber.c_str());
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

bool	isNumeric(const string &str)
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

bool	valid_detail(const string &str)
{
	string::const_iterator it = str.begin();
	while (it != str.end())
	{
		if (!std::isalpha(*it))
			return (false);
		++it;
	}
	return (true);
}

string	getValidInput(const string &prompt, const string &error,
		bool (*isValid)(const string &))
{
	string input;
	cout << "\n" << prompt << "\n";
	cin >> input;
	while (!isValid(input))
	{
		cout << RED + error + RESET<< "\n\n";
		cout << YEL + prompt + RESET << "\n";
		cin >> input;
	}
	return (input);
}

bool isValidPhoneNumber(const string &str)
{
    if (!isNumeric(str))
        return false;
    std::stringstream ss(str);
    long long number;
    ss >> number;
    return number >= 0 && number <= 999999999;
}