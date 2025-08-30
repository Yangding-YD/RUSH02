/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yading <yading@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:48:35 by yading            #+#    #+#             */
/*   Updated: 2025/08/30 20:05:35 by yading           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

/*General define*/
# define MAX_SIZE 1000
# define MAX_LINE 1024
# define MAX_VALUE 256
# define DEFAULT_DICT "numbers.dict"

/*incorrect informations*/
# define ERR_MSG "Error\n"
# define ERR_DICT "Dict Error\n"

/*Structure of DIC*/
typedef struct s_dict_entry
{
    int		key;
    char	*value;
}    t_dict_entry;
/*Structure of catalogue*/
typedef struct s_dict
{
    t_dict_entry	*entries;
    int			count;
    int			capacity;
}    t_dict;

/*main.c*/

/*find.c*/

/*find_count.c*/

/*dic_parser.C*/
t_dict	*init_dict(void);
int	load_dic(t_dict *dict, char *filename);
char	*get_dic_value(t_dict *dict, int *key);
void	free_dict(t_dict *dict);

/*memory_manager.c*/
void	*safe_malloc(size_t size);
void	safe_free(void *ptr);

/*error_report.c*/
void	error_report(char *error_msg);
void	error_exit(char *exit_msg);

#endif