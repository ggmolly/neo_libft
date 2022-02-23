/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:34:07 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 20:06:02 by jallerha         ###   ########.fr       */
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
int			ft_strlen(char *str);
void		ft_strcat(t_string *dest, t_string *src);
t_string *ft_strset(t_string *target, char c);
t_string *ft_strnset(t_string *target, char c, size_t n);
t_string	ft_strdup(t_string s);
void ft_strupr(t_string s);
void ft_strlwr(t_string s);
char *ft_strchr(t_string s, int c);
char *ft_strrchr(t_string s, int c);
void ft_strrev(t_string *s);
int	ft_strcmp(t_string s1, t_string s2);
int	ft_strncmp(t_string s1, t_string s2, size_t n);
t_string	ft_dupe_string(t_string s);
void ft_strcpy(t_string *s, t_string *d);
void	ft_free_string(t_string *s);
int ft_strcmpi(t_string s1, t_string s2);

// TODO : 
// strncat ( )	Appends a portion of string to another
// strcpy ( )	Copies str2 into str1
// strncpy ( )	Copies given number of characters of one string to another
// strstr ( )	Returns pointer to first occurrence of str2 in str1
// strrstr ( )	Returns pointer to last occurrence of str2 in str1
// strnset ( )	It sets the portion of characters in a string to given character
// strtok ( )	Tokenizing given string using delimiter
// memset()	It is used to initialize a specified number of bytes to null or any other value in the buffer
// memcpy()	It is used to copy a specified number of bytes from one memory to another
// memmove()	It is used to copy a specified number of bytes from one memory to another or to overlap on same memory.
// memcmp()	It is used to compare specified number of characters from two buffers
// memicmp()	It is used to compare specified number of characters from two buffers  regardless of the case of the characters
// memchr()	It is used to locate the first occurrence of the character in the specified string
#endif