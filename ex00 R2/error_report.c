/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_report.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yading <yading@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:05:12 by yading            #+#    #+#             */
/*   Updated: 2025/08/30 18:53:57 by yading           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	error_report(char *error_msg)
{
	int	len;

	len = ft_strlen(error_msg);
	write(1, error_msg, len);
}

void	error_exit(char *exit_msg)
{
	int	len;

	len = ft_strlen(exit_msg);
	write(1, exit_msg, len);
	write(1, "\n", 1);
}
