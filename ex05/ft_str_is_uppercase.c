/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 18:45:39 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_uppercase(char character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	upc;

	counter = 0;
	upc = 1;
	while (str[counter] && upc == 1)
	{
		if (upc == 1)
			upc = is_uppercase(str[counter]);
		counter++;
	}
	return (upc);
}

// int main(void)
// {
//     char	str1[10];
// 	char	*str2;
// 	char	*str3;
// 	int		empty;
// 	int		upper;
// 	int		non_upper;

// 	str2 = "JIOJ";
// 	str3 = "JI ";
// 	printf("String  Output\n");
// 	empty = ft_str_is_uppercase(str1);
// 	printf("Empty %d\n", empty);
// 	upper = ft_str_is_uppercase(str2);
// 	printf("Upper %d\n",	upper);
// 	non_upper = ft_str_is_uppercase(str3);
// 	printf("Non upper %d\n", non_upper);
// 	return (0);
// }
