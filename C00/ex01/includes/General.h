/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   General.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:18:41 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/05 11:18:41 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>	// std::setfill, std::setw
#include <cctype>	// for std::isdigit
#include <sstream>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::toupper;
