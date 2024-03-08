/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:14:12 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/08 11:14:12 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

int	main(void)
{
	Zombie *tonio = newZombie("Tonio");
	randomChump("Bino");
	tonio->announce();
	delete tonio;
	return (0);
}