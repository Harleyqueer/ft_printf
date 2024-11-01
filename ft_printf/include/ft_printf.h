/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <thmichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:07:37 by thmichel          #+#    #+#             */
/*   Updated: 2024/11/01 11:10:34 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_puthex(unsigned int nb, const char format);
void	ft_putptr(unsigned long long nb);
int		ft_ptrlen(unsigned long long nb);
int		ft_printptr(unsigned long long ptr);
int		ft_printhex(unsigned int nb, const char format);
int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_printstr(char *str);
int		len_nb(unsigned int n);
int		ft_printunb(unsigned int a);
int		ft_printnb(int a);
int		ft_hexlen(unsigned int nb);
char	*ft_uitoa(unsigned int n);

#endif
