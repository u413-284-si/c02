/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:48:09 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 11:48:43 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Array: length != size
length -> amount of written elements
size -> amount of written elements + \0 at the end

strncpy takes the destination's size n as a parameter.
At most n bytes of src are copied. Warning: If there is no null byte among
the first n bytes of src, the string placed in dest will not be null-terminated.
If  the  length of src is less than n, strncpy() writes additional null bytes
to dest to ensure that a total of n bytes are written.

The strcpy() and strncpy() functions return a pointer to the destination
string dest. */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* If the destination string of a strcpy() is not large enough, then anything 
might happen. Over‐flowing fixed-length string buffers is a favorite cracker 
technique for taking complete control of the machine.  Any time a program reads 
or copies data into a buffer, the program first needs to  check  that there's 
enough space.  This may be unnecessary if you can show that overflow is
impossible, but be careful: programs can get changed over time, in ways that 
may make the  impossible possible. */
