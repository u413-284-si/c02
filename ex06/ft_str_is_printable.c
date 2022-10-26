/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/09 12:57:21 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// DELETE is not a printable char
int	is_printable(int character)
{
	if (character >= 32 && character <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	printable;

	counter = 0;
	printable = 1;
	while (str[counter] && printable == 1)
	{
		if (printable == 1)
			printable = is_printable(str[counter]);
		counter++;
	}
	return (printable);
}

// int main(void)
// {
//     char	str1[10];
// 	char	*str2;
// 	char	*str3;
// 	int		empty;
// 	int		printable;
// 	int		non_printable;

// 	str2 = "*'`";
// 	str3 = "\n";
// 	printf("String  Output\n");
// 	empty = ft_str_is_printable(str1);
// 	printf("Empty %d\n", empty);
// 	printable = ft_str_is_printable(str2);
// 	printf("Printable %d\n", printable);
// 	non_printable = ft_str_is_printable(str3);
// 	printf("Non printable %d\n", non_printable);
// 	return (0);
// }
