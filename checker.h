/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:59:19 by sessarhi          #+#    #+#             */
/*   Updated: 2024/02/23 21:21:35 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define MAX 922337203685477580
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>
# define BUFFER_SIZE 10

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);
int		check_dup(char **av);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *s);
t_list	*ft_lstnew(int content, int index);
int		check_dig(char **av);
char	*ft_strjoin(char const *s1, char const *s2);
char	**splitargs(int ac, char **av);
int		parcing(int ac, char **av, t_list **stack_a);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		check_sp_nl(int ac, char **av);
int		ft_sing_range(const char *str);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_b, t_list **stack_a);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
int		ft_lstsize(t_list *lst);
int		ft_strchr(const char *s, int c);
char	*get_next_line(int fd);
int		ft_strcmp(const char *s1, const char *s2);
void	my_free(char **s);
void	free_stack(t_list **stack);

#endif
