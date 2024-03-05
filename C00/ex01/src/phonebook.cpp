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

#include "../includes/Phonebook.h"

void	execute_command(std::string command);

int	main(int argc, char const *argv[])
{
	string	command;

	if (argc != 1)
		cout << "Too many arguments";
	(void)argv;
	while (1)
	{
		cout << "Input Command: " << endl;
		cin >> command;
		execute_command(command);
	}
	return (0);
}

void	execute_command(std::string command)
{
	if (command == "ADD")
		cout << "ADD command";
	else if (command == "SEARCH")
		cout << "SEARCH command";
	else if (command == "EXIT")
		cout << "EXIT command";
	else
		cout << "Unknown command";
}