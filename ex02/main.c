/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:11:30 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 17:13:58 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[10];
	char	*str2;
	char	*str3;
	int		empty;
	int		alpha;
	int		non_alpha;

	str2 = "fgjiep";
	str3 = "jd!p";
	printf("String  Output\n");
	empty = ft_str_is_alpha(str1);
	printf("Empty %d\n", empty);
	alpha = ft_str_is_alpha(str2);
	printf("Alpha %d\n", alpha);
	non_alpha = ft_str_is_alpha(str3);
	printf("Non alpha %d\n", non_alpha);
	return (0);
}
