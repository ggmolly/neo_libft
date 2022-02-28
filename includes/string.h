/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:34:07 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 21:57:10 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <unistd.h>
# include "../includes/lists.h"

// -- str functions

char		*ft_strchr(char *s, int c);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *s);
char		*ft_strncat(char *dest, char *src, size_t n);
char		*ft_strncpy(char *dest, char *src, size_t n);
char		*ft_strnset(char *target, char c, size_t n);
char		*ft_strrchr(char *s, int c);
char		*ft_strrstr(char *needle, char *haystack);
char		*ft_strset(char *target, char c);
char		*ft_strstr(char *needle, char *haystack);
char		ft_dupe_string(char s);
int			ft_ccnt(char *s, char c);
int			ft_endswith(char *s, char *suffix);
int			ft_startswith(char *s, char *prefix);
int			ft_strcmp(char *s1, char *s2);
int			ft_strcmpi(char *s1, char *s2);
int			ft_strlen(char *str);
int			ft_strncmp(char *s1, char *s2, size_t n);
void		ft_capitalize(char *str);
void		ft_free_string(char *s);
void		ft_lstrip(char *s);
void		ft_rstrip(char *s);
void		ft_strcat(char *dest, char *src);
void		ft_strip(char *s);
void		ft_strlwr(char *s);
void		ft_strrev(char *s);
void		ft_strupr(char *s);
void		ft_swapcase(char *str);
void		ft_zfill(char *s, int n);
int			ft_index(char *haybale, char *needle);
int			ft_count_words(char *haystack, char *needle);
t_chain_lst	*ft_split(char *str, char *word);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_center(char *s, int padding);
int			ft_strcspn(char *str, char *charset);

// TODO
// ft_splitlines()	Splits the string at line breaks and returns a list
// ft_join()	Converts the elements of an iterable into a string
// ft_replace()	Returns a string where a specified value is replaced with a specified value
// ft_format()	Formats specified values in a string

// -- mem functions
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memrchr(const void *s, int c, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
#endif