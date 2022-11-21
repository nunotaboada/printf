/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:57:36 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/19 17:57:36 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strchr(const char *s, int c)
{

    while (*s)
    {
        if (*s == c)
            return (1);
        s++;
    }
    if (c == '\0')
        return (0);
    return (0);
}

char *ft_isperc(char *str)
{
    int i;
    int j;
    char *str1;

    i = 0;
    j = 0;
    if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
    {
        str1[j] = str[i + 1];
        i++;
        j++;
    }
    else
        i++;// se nao está na pos zero então incrementa um para o ciclo seguinte não dar erro   
    while (str[i])
    {
        if (str[i] == '%' && str[i - 1] != 92 && ft_strchr("cspdiuxX%", str[i + 1])) // 92 ver tabela ascii
        { 
             str1[j] = str[i + 1];
             j++;
        }
        i++;
    }
    return (str1);
}

int ft_isargs(va_list args, char *str, const char f)
{
    char *str1;
    int len;
    int len1;
    int i;

    i = 0;
    len = 0;
    str1 = ft_isper(str);
    len1 = ft_strlen(str1);
    while (str1[i])
    {
        if (str[i] == 'c' && va_arg(args, int))
            len++;
        if (str[i] == 's' && va_arg(args, char *))
           len++;
        if (str[i] == 'p' && va_arg(args, void *))
            len++;
        if (str[i] == 'd' || f == 'i' && va_arg(args, int))
            len++;
        if (str[i] == 'u' && va_arg(args, unsigned int))
            len++;
        if (str[i] == 'x' || f == 'X' && va_arg(args, unsigned int))
           len++;
        if (str[i] == '%' && )
            len++;
    }
    return (len == len1);
}