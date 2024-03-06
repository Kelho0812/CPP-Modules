/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:01:15 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/05 11:07:30 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/General.hpp"
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"


void	execute_command(std::string command, PhoneBook *phoneList);

int	main(int argc, char const *argv[])
{
	string		command;
	PhoneBook	phoneList;

	if (argc != 1)
		cout << "Too many arguments";
	(void)argv;
	while (1)
	{
		cout << GRN "Input Command: " RESET << endl;
		cin >> command;
		execute_command(command, &phoneList);
	}
	return (0);
}

void execute_command(std::string command, PhoneBook* phoneList)
{
	if (command == "ADD")
		phoneList->add_contact();
	else if (command == "SEARCH")
		phoneList->print();
	else if (command == "EXIT")
		exit(0);
	else
		cout << RED "Unknown command\n" RESET << endl;
}
