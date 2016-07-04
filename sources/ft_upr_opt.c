/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upr_opt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 14:54:51 by thibault          #+#    #+#             */
/*   Updated: 2016/07/04 17:11:31 by thibaultfolly    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_upr_opt(t_file_ls *file, t_opt_ls *opt)
{
	char	*full_path;

	while (file)
	{
		if (*(file->rights) == 'd' && !ft_is_dot_file(file->name))
		{
			full_path = ft_strjoin(file->path, "/");
			full_path = ft_strjoin(full_path, file->name);
			ft_printf("full path : %s\n", full_path);
			ft_printf("file name : %s\n", file->name);
			// exit(0);
			file->sub = ft_file_list(full_path, opt);
		}
		file = file->next;
	}
}
