/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 22:49:28 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/11 16:34:53 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("本家 | ft\n");
// 	printf("%p | %p\n", strnstr("abbbcdefg", "bbc", 20), ft_strnstr("abbbcdefg", "bbc", 20));
// 	printf("%p | %p\n", strnstr(NULL, "is", 0), ft_strnstr(NULL, "is", 0));
// }