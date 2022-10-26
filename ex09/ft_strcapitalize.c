/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 10:11:42 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Difference between lower and upper case letters in ASCII is 32 (decimal).
Upper case letters are lower in decimal value. */
char	lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

char	upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (counter == 0)
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= ' ' && str[counter - 1] <= '/')
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= ':' && str[counter - 1] <= '@')
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= '[' && str[counter - 1] <= '`')
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= '{' && str[counter - 1] <= '~')
			str[counter] = upcase(str[counter]);
		else
			str[counter] = lowcase(str[counter]);
		counter++;
	}
	return (str);
}

/* For a string to be modifiable it needs to be declared with char str[] instead
of char *str. */
// int	main(void)
// {
// 	char	str[] = "salut, comment tu vas? 42mots&quArante-deux;cinquante+et";

// 	printf("%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }