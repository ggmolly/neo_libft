/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:12:08 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/01 14:19:51 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# define PI		3.14159265358979323846
# define E		2.71828182845904523536
# define PHI	1.61803398874989484820

// -- abs --
int			ft_abs(int n);
long		ft_abs_l(long n);
long long	ft_abs_ll(long long n);
char		ft_abs_c(char n);

// -- pow --
int			ft_pow(int n, int pow);
long		ft_pow_l(long n, int pow);
long long	ft_pow_ll(long long n, int pow);

// -- sqrt --
int			ft_sqrt(int n);
long		ft_sqrt_l(long n);
long long	ft_sqrt_ll(long long n);

// -- round --
int			ft_round(float n);
int			ft_round_up(float n);
int			ft_round_down(float n);

// -- factorial --
int			ft_factorial(int n);
long		ft_factorial_l(long n);
long long	ft_factorial_ll(long long n);

// -- fibonacci --
int			ft_fibonacci(int n);
long		ft_fibonacci_l(long n);
long long	ft_fibonacci_ll(long long n);

// -- is_prime --
int			ft_is_prime(int n);
long		ft_is_prime_l(long n);
long long	ft_is_prime_ll(long long n);

#endif