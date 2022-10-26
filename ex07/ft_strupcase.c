/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 23:56:38 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Difference between lower and upper case letters in ASCII is 32 (decimal).
Upper case letters are lower in decimal value. */
char	upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		str[counter] = upcase(str[counter]);
		counter++;
	}
	return (str);
}

/* For a string to be modifiable it needs to be declared with char str[] instead
of char *str. */
/*int	main(void)
{
	char	str[] = "Jreui";

	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
