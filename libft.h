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

#endif // !LIBFT_H
