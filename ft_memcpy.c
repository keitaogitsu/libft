/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:04:44 by kogitsu           #+#    #+#             */
/*   Updated: 2023/01/28 14:31:23 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	p_dst = (char *)dst;
	p_src = (const char *)src;
	while (n--)
		*(p_dst++) = *(p_src++);
	return (dst);
}
