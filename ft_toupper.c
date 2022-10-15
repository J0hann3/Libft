/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:54:45 by jvigny            #+#    #+#             */
/*   Updated: 2022/10/15 13:54:45 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toupper(int c)
{
	if (c <= 'a' || c >= 'z')
		return (c - 32);
	else
		return (c);
}
