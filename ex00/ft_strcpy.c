/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:48:09 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/07 12:06:18 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* If the destination string of a strcpy() is not large enough, then anything 
might happen. Over‐flowing fixed-length string buffers is a favorite cracker 
technique for taking complete control of the machine.  Any time a program reads 
or copies data into a buffer, the program first needs to  check  that there's 
enough space.  This may be unnecessary if you can show that overflow is
impossible, but be careful: programs can get changed over time, in ways that 
may make the  impossible possible. */
