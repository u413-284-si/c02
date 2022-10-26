/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:50:05 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 11:37:18 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	/* Only 4 chars can be written into str1 because last element is taken 
	by \0 */
	char	str1[5] = "abcd"; 
	char	str2[6];
	int		n;

	n = 6;
	ft_strncpy(str2, "bueno", n);
	printf("String 1: %s\nString 2: %s\n\n", str1, str2);
	ft_strncpy(str2, str1, n);
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	return (0);
}
