/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:14:41 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/08 11:14:41 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype> // for std::isdigit
#include <cstdlib>
#include <iomanip> // std::setfill, std::setw
#include <iostream>
#include <sstream>
#include <string>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::toupper;

class Zombie
{
  private:
	string _name;

  public:
	void announce(void);
	Zombie();
	Zombie(string name) : _name(name){};
	Zombie *newZombie(std::string name);
	~Zombie()
	{
		cout << "Zombie " << _name << " was destroyed" << endl;
	};
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
