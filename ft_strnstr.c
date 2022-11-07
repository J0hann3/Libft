/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:53:27 by jvigny            #+#    #+#             */
/*   Updated: 2022/10/15 13:53:27 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return (s1);
	while (i < n && s1[i])
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j])
			{
				if (s2[j] == 0)
					return (s1[i]);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
