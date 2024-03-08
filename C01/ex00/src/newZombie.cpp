/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:14:19 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/08 11:14:19 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *hZombie = new Zombie(name);
	return (hZombie);
}