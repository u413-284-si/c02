/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:48:09 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/09 09:53:20 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* strncpy
At most n bytes of src are copied. Warning: If there is no null byte among
the first n bytes of src, the string placed in dest will not be null-terminated.
If  the  length of src is less than n, strncpy() writes additional null bytes
to dest to ensure that a total of n bytes are written. 

strlcpy
Unlike strncpy, strlcpy takes the full size of the dest string and 
always writes a single NUL byte to the destination (if size is not zero). The
resulting string is guaranteed to be NUL-terminated even if truncated. 
Also it does not waste time writing multiple NUL bytes to
fill the rest of the buffer, unlike strncpy. Note that a byte for the NUL
should be included in size. Also note that strlcpy() and strlcat() only
operate on true “C” strings. This means that for strlcpy() src must be NUL-
terminated.
The strlcpy() and strlcat() functions return the total length of the string 
they tried to create. For strlcpy() that means the length of src.
*/

int	length(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length(src));
}
/* If the destination string of a strcpy() is not large enough, then anything 
might happen. Over‐flowing fixed-length string buffers is a favorite cracker 
technique for taking complete control of the machine.  Any time a program reads 
or copies data into a buffer, the program first needs to  check  that there's 
enough space.  This may be unnecessary if you can show that overflow is
impossible, but be careful: programs can get changed over time, in ways that 
may make the  impossible possible. */

int	main(void)
{
	/* Only 4 chars can be written into str1 because last element is taken 
	by \0 */
	char	str1[5] = "abcd"; 
	char	str2[1];
	int		n;
	int		l;

	n = 0;
	l = ft_strlcpy(str2, "buenodfsg", n);
	printf("String 1: %s\nString 2: %s\nSource length: %d\n\n", str1, str2, l);
	l = ft_strlcpy(str2, str1, n);
	printf("String 1: %s\nString 2: %s\nSource length: %d\n\n", str1, str2, l);
	return (0);
}
