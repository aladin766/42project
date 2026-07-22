/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ala-din <ala-din@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 11:34:52 by ala-din           #+#    #+#             */
/*   Updated: 2026/07/22 12:11:17 by ala-din          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return(0);
	}
	int len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	int i = 0;
	while (i < len)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return(len);
}

int main()
{
	int *tab;
	int size;
	size = ft_ultimate_range(&tab, 5, 8);
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	free(tab);
	return(0);
}