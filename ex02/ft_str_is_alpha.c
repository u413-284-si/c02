/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:13:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 17:11:29 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	alpha;

	counter = 0;
	alpha = 1;
	while (str[counter] && alpha == 1)
	{
		if (alpha == 1)
			alpha = is_alpha(str[counter]);
		counter++;
	}
	return (alpha);
}

// int main(void)
// {
//     char a = 'a';
//     printf("%d\n", is_alpha_(a));
// }
