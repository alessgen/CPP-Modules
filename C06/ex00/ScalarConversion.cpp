/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:15:16 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/06 13:15:16 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"     /* sin */

Conversion::Conversion(std::string arg){
	if (arg.empty())
	{
		throw Conversion::InvalidInput();
		return;
	}
	else if (arg.size() != 1)
	{
		if (!arg.compare("nan") || !arg.compare("nanf") || !arg.compare("+inf") || !arg.compare("-inf") || !arg.compare("+inff") || !arg.compare("-inff") || !arg.compare("inf") || !arg.compare("inff"))
		{
			this->str = "Impossible";
			if (!arg.compare("nan") || !arg.compare("nanf"))
				this->nul = "nan";
			else if (!arg.compare("+inf") || !arg.compare("inf") || !arg.compare("+inff") || !arg.compare("inff"))
				this->nul = "inf";
			else if (!arg.compare("-inf") || !arg.compare("-inff"))
				this->nul = "-inf";
			std::cout << "char: " << this->str << std::endl;
			std::cout << "int: " << this->str << std::endl;
			std::cout << "float: " << this->nul << 'f' << std::endl;
			std::cout << "double: " << this->nul << std::endl;
			return;
		}
		int i = 0, check_digit = 0, check_sign = 0;
		floating_point = 0;
		if ((arg[i] == '-' && !isdigit(arg[i + 1])) || (arg[i] == '+' && !isdigit(arg[i + 1])))
		{
			throw Conversion::InvalidInput();
			return;
		}
		else if (arg[i] == '-' && isdigit(arg[i + 1]))
			check_sign = 1;
		while(arg[i])
		{
			if (i >= 1 && !isdigit(arg[i]) && arg[i] != 'f')
			{
				if (arg[i] == '.')
				{
					i++;
					if (isdigit(arg[i]))
					{
						i++;
						int k = 0;
						while (arg[i] == '0')
						{
							k++;i++;
							if (k > 4)
								floating_point = 0;
						}
						while(arg[i] >= 49 && arg[i] <= 57)
						{
							floating_point = 1;
							i++;
						}
					}
					continue;
				}
				throw Conversion::InvalidInput();
				return;
			}
			if (isdigit(arg[i]))
				check_digit++;
			else if (arg[i] == 'f')
				break;
			i++;
		}
		double tmp = atof(arg.c_str());
		this->str = static_cast<char>(tmp);
		this->i = static_cast<int>(tmp);
		this->d = static_cast<double>(tmp);
		this->f = static_cast<float>(tmp);
		//DEBUG PRINT
		if (this->str[0] < 32 || this->str[0] > 126)
		{
			this->str = "Non displayable";
			std::cout << "char: " << this->str << std::endl;
		}
		else
			std::cout << "char: " << "'" << this->str << "'" << std::endl;
		std::cout << "int: " << this->i << std::endl;
		if (floating_point == 0)
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << this->f << 'f' << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << this->d << std::endl;
		}
		else if (floating_point == 1)
		{
			std::cout << "float: " << std::fixed << this->f << 'f' << std::endl;
			std::cout << "double: " << std::fixed << this->d << std::endl;
		}
		//END
	}
	else
	{
		char tmp = arg[0];
		if (isdigit(arg[0]))
		{
			double tmp = atof(arg.c_str());
			this->str = static_cast<char>(tmp);
			this->i = static_cast<int>(tmp);
			this->d = static_cast<double>(tmp);
			this->f = static_cast<float>(tmp);
		}
		else
		{
			this->str = static_cast<char>(tmp);
			this->i = static_cast<int>(tmp);
			this->d = static_cast<double>(tmp);
			this->f = static_cast<float>(tmp);
		}
		if (this->str[0] < 32 || this->str[0] > 126)
		{
			this->str = "Non displayable";
			std::cout <<  "char: " << this->str << std::endl;
		}
		else
			std::cout <<  "char: " << "'" << this->str << "'" << std::endl;
		std::cout << "int: " << this->i << std::endl;
		if (floating_point == 0)
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << this->f << 'f' << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << this->d << std::endl;
		}
		else if (floating_point == 1)
		{
			std::cout << "float: " << std::fixed << this->f << 'f' << std::endl;
			std::cout << "double: " << std::fixed << this->d << std::endl;
		}
		//END
	}

}

Conversion::~Conversion(){}

