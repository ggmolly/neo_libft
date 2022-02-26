/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:34:07 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 17:41:18 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <unistd.h>


// -- str functions

char		*ft_strrstr(char *needle, char *haystack);
char		*ft_strstr(char *needle, char *haystack);
char		*ft_strchr(char *s, int c);
char		*ft_strrchr(char *s, int c);
int			ft_strcmp(char *s1, char *s2);
int			ft_strcmpi(char *s1, char *s2);
int			ft_strlen(char *str);
int			ft_strncmp(char *s1, char *s2, size_t n);
char		*ft_strncat(char *dest, char *src, size_t n);
char		ft_dupe_string(char s);
char		*ft_strdup(char *s);
char		*ft_strnset(char *target, char c, size_t n);
char		*ft_strset(char *target, char c);
char		*ft_strncpy(char *dest, char *src, size_t n);
void		ft_free_string(char *s);
void		ft_strcat(char *dest, char *src);
char		*ft_strcpy(char *dest, char *src);
void		ft_strlwr(char *s);
void		ft_strrev(char *s);
void		ft_strupr(char *s);
int			ft_ccnt(char *s, char c);
void		ft_capitalize(char *str);
void		ft_swapcase(char *str);
void		ft_zfill(char *s, int n);
void		ft_strip(char *s);
void		ft_lstrip(char *s);
void		ft_rstrip(char *s);

// TODO
// ft_split
// ft_replace (replace a char in a string)
// ft_center()	Returns a centered string
// ft_count()	Returns the number of times a specified value occurs in a string
// ft_endswith()	Returns true if the string ends with the specified value
// ft_expandtabs()	Sets the tab size of the string
// ft_find()	Searches the string for a specified value and returns the position of where it was found
// ft_format()	Formats specified values in a string
// ft_format_map()	Formats specified values in a string
// ft_index()	Searches the string for a specified value and returns the position of where it was found
// ft_join()	Converts the elements of an iterable into a string
// ft_ljust()	Returns a left justified version of the string
// ft_maketrans()	Returns a translation table to be used in translations
// ft_partition()	Returns a tuple where the string is parted into three parts
// ft_replace()	Returns a string where a specified value is replaced with a specified value
// ft_rfind()	Searches the string for a specified value and returns the last position of where it was found
// ft_rindex()	Searches the string for a specified value and returns the last position of where it was found
// ft_rjust()	Returns a right justified version of the string
// ft_rpartition()	Returns a tuple where the string is parted into three parts
// ft_rsplit()	Splits the string at the specified separator, and returns a list
// ft_split()	Splits the string at the specified separator, and returns a list
// ft_splitlines()	Splits the string at line breaks and returns a list
// ft_startswith()	Returns true if the string starts with the specified value
// ft_translate()	Returns a translated string
// -- mem functions
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memrchr(const void *s, int c, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
#endif