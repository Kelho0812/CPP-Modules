/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:31:32 by jorteixe          #+#    #+#             */
/*   Updated: 2024/03/04 19:00:11 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::toupper;

char	*to_upper_string(char *str);

int	main(int argc, char const *argv[])
{
	string	capslock_str;
	string	loud_noise;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			capslock_str = argv[i];
			for (size_t j = 0; j < capslock_str.size(); ++j)
				capslock_str[j] = toupper(capslock_str[j]);
			cout << capslock_str;
		}
		cout << endl;
	}
	else
	{
		loud_noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		cout << loud_noise << endl;
	}
	return (0);
}
