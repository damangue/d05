/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:01:33 by damangue          #+#    #+#             */
/*   Updated: 2020/07/15 16:54:09 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
char *ft_strncpy(char *dest ,char *src);


int i;

while(src[i])
{
	dest[i]=src[i];
	i++;
}
return dest;


int main()

{

char d[20]="mangue";
char c[20];
strncpy(d,c,3);
c[3]='\0';
printf("%s",c);
}
