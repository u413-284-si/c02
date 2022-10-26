/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 18:38:46 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	low;

	counter = 0;
	low = 1;
	while (str[counter] && low == 1)
	{
		if (low == 1)
			low = is_lowercase(str[counter]);
		counter++;
	}
	return (low);
}

// int main(void)
// {
//     char	str1[10];
// 	char	*str2;
// 	char	*str3;
// 	int		empty;
// 	int		num;
// 	int		non_num;

// 	str2 = "dfsgg";
// 	str3 = "&!";
// 	printf("String  Output\n");
// 	empty = ft_str_is_lowercase(str1);
// 	printf("Empty %d\n", empty);
// 	num = ft_str_is_lowercase(str2);
// 	printf("Numeric %d\n", num);
// 	non_num = ft_str_is_lowercase(str3);
// 	printf("Non num %d\n", non_num);
// 	return (0);
// }
