/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 17:32:48 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_num(char character)
{
	if (character >= '0' && character <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	num;

	counter = 0;
	num = 1;
	while (str[counter] && num == 1)
	{
		if (num == 1)
			num = is_num(str[counter]);
		counter++;
	}
	return (num);
}

// int main(void)
// {
//     char	str1[10];
// 	char	*str2;
// 	char	*str3;
// 	int		empty;
// 	int		num;
// 	int		non_num;

// 	str2 = "78941";
// 	str3 = "8 ";
// 	printf("String  Output\n");
// 	empty = ft_str_is_numeric(str1);
// 	printf("Empty %d\n", empty);
// 	num = ft_str_is_numeric(str2);
// 	printf("Numeric %d\n", num);
// 	non_num = ft_str_is_numeric(str3);
// 	printf("Non num %d\n", non_num);
// 	return (0);
// }
