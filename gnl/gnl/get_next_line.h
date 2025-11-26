/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeara <dgeara@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:29:58 by dgeara            #+#    #+#             */
/*   Updated: 2025/11/06 15:59:45 by dgeara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*LIBRARIES*/
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

/*IN CASE BUFFER SIZE IS UNDEFINED*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 14
# endif

/*STRUCT*/
typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

/*MAIN FUNCTION*/
char	*get_next_line(int fd);

/*UTILS*/
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew_strdup(const char *s1);
void	free_list(t_list **list);
int		process_list(char *dst, t_list *list, int copy);

#endif