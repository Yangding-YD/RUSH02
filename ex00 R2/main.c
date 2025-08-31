/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisoler- <jisoler-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:37:27 by jisoler-          #+#    #+#             */
/*   Updated: 2025/08/30 17:31:40 by jisoler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char find(char n)
{
	//abrir diccionario
	//buscar n en linea 1, si no, nextline (asi hasta encontar n delante de los ":")
	//imprimir lo que esta despues de ":" en la linea qe se ha quedado
}

char find_count(int i)
{
	// abrir diccionario
	// contar posiciones hasta llegar a " " o a ":" 
	// si el numero de posiciones es = i imprime lo que está detrás de ":"
}



char program(int i, char **argc)
{
	int	j;
	int 	k;

	j = 0;
	k = 0;
	while (j =< i)
	{
		if (j = i)
			find(argv[argc][j]);
			break;
		while ((i - 1 - 3 * k) > j)
		{
			if ((i-j) == (i - 1 - 3 * k) argv[argc][j] == 1)
			{
				find(10 + (argv[argc][j+1] + '0'));
				j += 2;
				break;
			}
			else if
			{
				find((argv[argc][j] + '0')* 10);
				find(argv[argc][j+1] + '0');
				j += 2;
				break;

			k++;
			}
		}
		if (argv[argc][j] == 0)
			j++;
		else if 
		{
			find(argv[argc][j] + '0');
			find_count(i-j);
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
		if (argc > 3)
		{
			write (2,  "Error: more than 2 arguments", 28);
			return (-1);
		}
		while (argv[argc][i] != '\0')
		{
			if (argv[argc][i] < '0' || argv[argc][i] > '9')
			{
				write (2, "Error\n", 6);
			}
		i++;
		}
		return (0);
}
