/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:44 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:45 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <limits>

int main(int argc, char **argv) {

	std::string line;
	if (argc != 4)
	{
		std::cout << "Needed three parameters!" << std::endl;
		return (0);
	}
	std::ifstream filename(argv[1]);
	if (filename.is_open())
	{
		std::ofstream newfilename("filename.replace");
		while (getline(filename, line))
		{
			if (strlen(argv[2]) == 0)
				return (1);
			int check = 0;
			size_t k = 0;
			std::size_t found = line.find(argv[2], k);
			size_t i = 0;
			while (found != std::numeric_limits<size_t>::max())
			{
				check = 1;
				while (i < found)
				{
					newfilename << line[i++];
					k++;
				}
				k += strlen(argv[2]);
				for (size_t i = 0; argv[3][i]; i++)
					newfilename << argv[3][i];
				found = line.find(argv[2], k);
				if (found == std::numeric_limits<size_t>::max())
				{
					while (line[k])
					{
						newfilename << line[k];
						k++;
					}
					newfilename << std::endl;
				}
				i = k;
			}
			if (check == 0)
			{
				for (size_t i = 0; i < line.length(); i++)
					newfilename << line[i];
				newfilename << std::endl;
			}
		}
		filename.close();
	}
	else
		std::cout << "Unable opening file" << std::endl;
 }
