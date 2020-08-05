/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 09:18:21 by dlobos-m          #+#    #+#             */
/*   Updated: 2020/08/05 12:41:15 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

char *ft_strdup(const char *s);

int main()
{
	char *s = "Hola                      ";
	char *d;

	//printf("O: %d\n",strcmp(d, s));
	//printf("M: %d\n",ft_strcmp(d, s));
	//write(1, "Hola\n", 5);
	//ft_write(1, "Hola\n", 5);

	/*
	int fd;
	char buf;
	int count;

	if ((fd = open("test.txt", O_RDONLY)) < 0)
	{
		printf("NO se puede abrir el archivo");
		return (0);
	}
	else
	{
		printf("read: ");
		while ((count = read(fd, &buf, 1))> EOF)
		{
			printf("%c", buf);
			if (!count)
				break;
		}
		close(fd);
		count = 0;
		fd = open("test.txt", O_RDONLY);
		printf("\nft_read: ");
		while ((count = ft_read(fd, &buf, 1))> EOF)
		{
			printf("%c", buf);
			if (!count)
				break;
		}
		close(fd);
	}
	*/
	printf("%s", ft_strdup(s));
}

