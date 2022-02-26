/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:34:07 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 16:29:29 by jallerha         ###   ########.fr       */
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

// TODO
// ft_split
// ft_strtrim (remove blanks at the beginning and end of a string, line endings)
// ft_replace (replace a char in a string)
// center()	Returns a centered string
// count()	Returns the number of times a specified value occurs in a string
// endswith()	Returns true if the string ends with the specified value
// expandtabs()	Sets the tab size of the string
// find()	Searches the string for a specified value and returns the position of where it was found
// format()	Formats specified values in a string
// format_map()	Formats specified values in a string
// index()	Searches the string for a specified value and returns the position of where it was found
// isalnum()	Returns True if all characters in the string are alphanumeric
// isalpha()	Returns True if all characters in the string are in the alphabet
// isascii()	Returns True if all characters in the string are ascii characters
// isdecimal()	Returns True if all characters in the string are decimals
// isdigit()	Returns True if all characters in the string are digits
// isidentifier()	Returns True if the string is an identifier
// islower()	Returns True if all characters in the string are lower case
// isnumeric()	Returns True if all characters in the string are numeric
// isprintable()	Returns True if all characters in the string are printable
// isspace()	Returns True if all characters in the string are whitespaces
// istitle()	Returns True if the string follows the rules of a title
// isupper()	Returns True if all characters in the string are upper case
// join()	Converts the elements of an iterable into a string
// ljust()	Returns a left justified version of the string
// lower()	Converts a string into lower case
// lstrip()	Returns a left trim version of the string
// maketrans()	Returns a translation table to be used in translations
// partition()	Returns a tuple where the string is parted into three parts
// replace()	Returns a string where a specified value is replaced with a specified value
// rfind()	Searches the string for a specified value and returns the last position of where it was found
// rindex()	Searches the string for a specified value and returns the last position of where it was found
// rjust()	Returns a right justified version of the string
// rpartition()	Returns a tuple where the string is parted into three parts
// rsplit()	Splits the string at the specified separator, and returns a list
// rstrip()	Returns a right trim version of the string
// split()	Splits the string at the specified separator, and returns a list
// splitlines()	Splits the string at line breaks and returns a list
// startswith()	Returns true if the string starts with the specified value
// strip()	Returns a trimmed version of the string
// swapcase()	Swaps cases, lower case becomes upper case and vice versa
// title()	Converts the first character of each word to upper case
// translate()	Returns a translated string
// upper()	Converts a string into upper case
// zfill()	Fills the string with a specified number of 0 values at the beginning
// -- mem functions
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memrchr(const void *s, int c, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
#endif