/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:33:58 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/30 22:11:42 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "i have an odd number of arguments.\n"
# define FALSE 0
# define TRUE 1
# define SUCCESS 0
# define EVEN(n) (n % 2 == 0) ? 1 : 0

#endif
