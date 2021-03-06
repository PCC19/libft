/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:41:12 by pcunha            #+#    #+#             */
/*   Updated: 2020/09/26 18:35:18 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_shift_left(int *arr, int n)
{
	n--;
	while (n > 0)
	{
		arr[n] = arr[n - 1];
		n--;
	}
	arr[0] = 0;
}
