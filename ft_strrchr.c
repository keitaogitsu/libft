/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:35:38 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/11 16:13:44 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = len;
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
			return ((char *)&s[i - 1]);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[len]);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "abcdefga";
// 	int		c1 = 'd';
// 	int		c2 = 'h';
// 	int		c3 = '\0';
// 	int		c4 = 'a';

// 	printf("dの場合: (ft) %p / (本家) %p\n", ft_strrchr(str, c1), strrchr(str, c1));
// 	printf("hの場合: (ft) %p / (本家) %p\n", ft_strrchr(str, c2), strrchr(str, c2));
// 	printf("nul文字の場合: (ft) %p / (本家) %p\n", ft_strrchr(str, c3), strrchr(str, c3));
// 	printf("aの場合: (ft) %p / (本家) %p\n", ft_strrchr(str, c4), strrchr(str, c4));
// 	printf("a+256の場合: (ft) %p / (本家) %p\n", ft_strrchr(str, c4+256), strrchr(str, c4+256));
// 	printf("a-256の場合: (ft) %p / (本家) %p\n", ft_strrchr(str, c4-256), strrchr(str, c4-256));
// }
