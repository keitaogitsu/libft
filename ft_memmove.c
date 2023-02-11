/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:38:31 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/04 18:41:21 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	p_dst = (char *)dst;
	p_src = (const char *)src;
	if (dst < src)
	{
		while (n--)
			*(p_dst++) = *(p_src++);
	}
	else
	{
		p_dst += n - 1;
		p_src += n - 1;
		while (n--)
			*(p_dst--) = *(p_src--);
	}
	return (dst);
}
