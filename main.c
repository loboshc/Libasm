/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 09:18:21 by dlobos-m          #+#    #+#             */
/*   Updated: 2020/08/06 13:35:57 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
	char *s = "Esto es una prueba de strcmp \0 \0";
	char *d = "Esto es una prueba de strcmp \0 \0";
	char *c = "Hosa";
	char *b = "";
	char cad[50];
	int fd;
	char buf;
	int count;

	printf("-------------------------------------\n");
	printf("Pruebas strcmp\n");
	printf("-------------------------------------\n");
	
	printf("O: %d\n",strcmp(d, s));
	printf("M: %d\n",ft_strcmp(d, s));
	printf("O: %d\n",strcmp(d, c));
	printf("M: %d\n",ft_strcmp(d, c));
	printf("O: %d\n",strcmp(d, b));
	printf("M: %d\n",ft_strcmp(d, b));
	
	printf("-------------------------------------\n");
	printf("Pruebas write\n");
	printf("-------------------------------------\n");

	s = "O: Esto es una prueba de la funcion write\n";
	d = "M: Esto es una prueba de la funcion write\n";
	write(1, s, strlen(s));
	ft_write(1, d, strlen(d));
	s = "O: Esto es una prueba mas larga y completa de la funcion write asdasdasasdadfdfsdfsdffsdfsdfsdfsdfsds\n";
	d = "M: Esto es una prueba mas larga y completa de la funcion write asdasdasasdadfdfsdfsdffsdfsdfsdfsdfsds\n";
	write(1, s, strlen(s));
	ft_write(1, d, strlen(d));
	s = "O:\n";
	d = "M:\n";
	write(1, s, strlen(s));
	ft_write(1, d, strlen(d));
	s = "Esto es una prueba de ft_write en archivo\n";
	if ((fd = open("test_write.txt", O_WRONLY | O_APPEND)) < 0)
		printf("No se ha podido abrir el archivo test_write.");
	if (ft_write(fd,s, strlen(s)) != strlen(s))
		printf("Hubo un error a a hora de escribir el archivo");
	else
		printf("Se pudo escribir con exito en el archivo test_write.txt\n");
	
	printf("-------------------------------------\n");
	printf("Pruebas read\n");
	printf("-------------------------------------\n");

	printf("\n\nPrueba archivo\n");
	printf("-------------------------------------\n");

	if ((fd = open("test.txt", O_RDONLY)) < 0)
	{
		printf("No se puede abrir el archivo test.txt");
		return (0);
	}
	else
	{
		printf("\nread:    ");
		while ((count = read(fd, &buf, 1)) !=  0)
			printf("%c", buf);
		close(fd);
		count = 0;
		fd = open("test.txt", O_RDONLY);
		printf("\nft_read: ");
		while ((count = ft_read(fd, &buf, 1)) != 0)
			printf("%c", buf);
		close(fd);
	}
	printf("\n\nPrueba stdin\n");
	printf("-------------------------------------\n");
	ft_read(0, cad, 50);
	printf("Has introducido: %s\n", cad);

	printf("-------------------------------------\n");
	printf("Pruebas strlen\n");
	printf("-------------------------------------\n");
	
	s = "Probando strlen \0 \0";
	printf("O: %lu\n", strlen(s));
	printf("M: %lu\n", ft_strlen(s));
	printf("O: %lu\n", strlen(c));
	printf("M: %lu\n", ft_strlen(c));
	s = "";
	printf("O: %lu\n", strlen(s));
	printf("M: %lu\n", ft_strlen(s));

	printf("\n-------------------------------------\n");
	printf("Pruebas strcpy\n");
	printf("-------------------------------------\n");

	s = "Esto tendria que ser copiado a la nueva cadena";
	char j[50];
	char k[50];
	
	strcpy(j, s);
	printf("O: %s\n", j);
	ft_strcpy(k, s);
	printf("M: %s\n", k);
	s = "";
	strcpy(j, s);
	printf("O: %s\n", j);
	ft_strcpy(k, s);
	printf("M: %s\n", k);

	printf("\n-------------------------------------\n");
	printf("Pruebas strdup\n");
	printf("-------------------------------------\n");

	char *src = "tendria que copiar esto";
	char *s1;
	char *s2;
	
	s1 = strdup(src);
	//s2 = ft_strdup(src);
	printf("O: %s\n", s1);
	printf("M: %s\n", ft_strdup(src));


	return (0);
}

