/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:34:07 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 15:02:39 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <unistd.h>

typedef struct t_string
{
	char	*str;
	int		len;
}				t_string;

t_string	ft_init_string(char *str);

// -- str functions

char		*ft_strrstr(t_string *needle, t_string *haystack);
char		*ft_strstr(t_string *needle, t_string haystack);
char		*ft_strchr(t_string s, int c);
char		*ft_strrchr(t_string s, int c);
int			ft_strcmp(t_string s1, t_string s2);
int			ft_strcmpi(t_string s1, t_string s2);
int			ft_strlen(char *str);
int			ft_strncmp(t_string s1, t_string s2, size_t n);
t_string	*ft_strncat(t_string *dest, t_string *src, size_t n);
t_string	ft_dupe_string(t_string s);
t_string	ft_strdup(t_string s);
t_string	*ft_strnset(t_string *target, char c, size_t n);
t_string	*ft_strset(t_string *target, char c);
void		*ft_strncpy(t_string *s, t_string *d, size_t n);
void		ft_free_string(t_string *s);
void		ft_strcat(t_string *dest, t_string *src);
void		ft_strcpy(t_string *s, t_string *d);
void		ft_strlwr(t_string s);
void		ft_strrev(t_string *s);
void		ft_strupr(t_string s);

// TODO
// ft_strsplit
// ft_strtrim (remove blanks at the beginning and end of a string, line endings)

// -- mem functions
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memrchr(const void *s, int c, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
#endif