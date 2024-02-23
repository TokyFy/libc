/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:23:43 by franaivo          #+#    #+#             */
/*   Updated: 2024/02/20 13:23:43 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size_t;

int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);

t_size_t				ft_strlen(const char *s);
void					*ft_memset(void *byte, int c, t_size_t n);
void					ft_bzero(void *s, unsigned int n);
void					*ft_memcpy(void *dest, const void *src, t_size_t n);
void					*ft_memmove(void *dest, const void *src, t_size_t n);

unsigned int			ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size);

int						ft_toupper(int c);
int						ft_tolower(int c);

char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
int						ft_strncmp(char *s1, char *s2, unsigned int n);
void					*ft_memchr(const void *s, int c, t_size_t n);
int						ft_memcmp(const void *s1, const void *s2, t_size_t n);
char					*ft_strnstr(const char *str, const char *needle,
							t_size_t len);

int						ft_atoi(const char *str);

void					*ft_calloc(t_size_t nmemb, t_size_t size);
char					*ft_strdup(char *src);

char					*ft_substr(char const *s, unsigned int start,
							t_size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s1, char const *set);
char					**ft_split(char const *s, char c);

char					*ft_itoa(int n);
#endif // !LIBFT_H
