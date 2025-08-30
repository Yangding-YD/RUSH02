/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yading <yading@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:59:11 by yading            #+#    #+#             */
/*   Updated: 2025/08/30 19:32:41 by yading           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*init_dict(void)
{
	t_dict	*new_dict;

	new_dict = safe_malloc(sizeof(t_dict));
	if (!new_dict)
		return (NULL);
	new_dict->entries = safe_malloc(sizeof(t_entry) * MAX_DICT_ENTRIES);
	if (!new_dict->entries)
	{
		safe_free(new_dict);
		return (NULL);
	}
	new_dict->count = 0;
	new_dict->capacity = MAX_DICT_ENTRIES;
	return (new_dict);
}

int	load_dic(t_dict *dict, char *filename)
{
	int	fd;
	char			buffer[MAX_LINE];
	int	bytes_read;

	if (!dict || !filename)
		return (-1);
	fd = open(filename, O_RDONLY);/*to open the file*/
	if (fd == -1)
		return (-1);
	/*loading the file*/
	bytes_read = read(fd, buffer, MAX_LINE - 1);
	if (bytes_read <= 0)
	{
		close(fd);
		return (-1);
	}
	buffer[bytes_read] = '\0';
	/*parsing the file*/
	/*This is a placeholder for actual parsing logic.
	 You would typically split the buffer into lines,
	 then parse each line into key-value pairs and store them in dict.*/
	close(fd);
	return (0);
}

char	*get_dic_value(t_dict *dict, int *key)
{
	int	i;

	if (!dict || !key)
		return (NULL);
	/*research through the DIC*/
	i = 0;
	while (i < dict->count)
	{
		if (dict->entries[i].key == key)
			return (dict->entries[i].value);
		i++;
	}
	return (NULL);
}

void	free_dict(t_dict *dict)
{
	int	i;

	if (!dict)
		return ;
	if (dict->entries)
	{
		i = 0;
		while (i < dict->count)
		{
			if (dict->entries[i].value)
				safe_free(dict->entries[i].value);
			i++;
		}
		safe_free(dict->entries);
	}
	safe_free(dict);
}
