/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:00:42 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/21 19:49:30 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*function that returns the number of elements in the linked list that's passed to it.*/

int ft_list_size(t_list *begin_list)
{
    if (begin_list == 0)
        return (0);
    else
        return (1 + ft_list_size(begin_list->next));
}