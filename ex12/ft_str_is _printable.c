/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:47:09 by damangue          #+#    #+#             */
/*   Updated: 2020/07/17 17:39:32 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
	 if (str[i] >= '!' || str[i] <= '~' )
		 i++;
	 if ((str[i] < '!' || str[i] > '~') && str[i] != 0)
		 return (0);
	}
	 return (1);
}

