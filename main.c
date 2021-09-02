/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:02:33 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/29 20:19:31 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

// int main(void)
// {
//     const char *s1 = "String";
//     char *s2 = strdup(s1);
//     assert(strcmp(s1, s2) == 0);
//     free(s2);
// }

// int main () {
//    int i, n;
//    int *a;

//    printf("Número de elementos a serem inseridos:");
//    scanf("%d",&n);

//    a = (int*)calloc(n, sizeof(int));
//    printf("Insira %d os números:\n",n);
//    for( i=0 ; i < n ; i++ ) {
//       scanf("%d",&a[i]);
//    }

//    printf("Os números inseridos são:");
//    for( i=0 ; i < n ; i++ ) {
//       printf("%d ",a[i]);
//    }
//    free( a );

//    return(0);
// }

// int main () {
//    int i = 0;
//    char c;
//    char str[] = "TUTORIALS POINT";

//    while( str[i] ) {
//       putchar(ft_tolower(str[i]));
//       i++;
//    }

//    return(0);
// }

// int main () {
//    int i = 0;
//    char c;
//    char str[] = "Tutorials Point";

//    while(str[i]) {
//       putchar (ft_toupper(str[i]));
//       i++;
//    }

//    return(0);
// }

// int main () {
//    const char str[] = "maykon jose yetsuo mori";
//    const char ch = 'y';
//    char *ret;

//    printf("%s\n", str);
//    printf("%c\n", ch);
//    ret = ft_strrchr(str, ch);

//    printf("|%s|\n", ret);

//    return(0);
// }

// int main () {
//    const char haystack[20] = "MaykonMori";
//    const char needle[10] = "kon";
//    char *ret;

//    ret = ft_strnstr(haystack, needle, 6);

//    printf("The substring is: %s\n", ret);

//    return(0);
// }

// int main () {
//    const char str[] = "maykon jose yetsuo mori";
//    const char ch = 'u';
//    char *ret;

//    printf("%s\n", str);
//    printf("%c\n", ch);
//    ret = ft_strchr(str, ch);

//    printf("|%s|\n", ret);

//    return(0);
// }

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    strcpy(str1, "abcdef");
//    strcpy(str2, "ABCDEF");

//    ret = ft_strncmp(str1, str2, 1);

//    if(ret < 0) {
//       printf("str1 is less than str2");
//    } else if(ret > 0) {
//       printf("str2 is less than str1");
//    } else {
//       printf("str1 is equal to str2");
//    }

//    return(0);
// }

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    ft_memcpy(str1, "Abcdef", 6);
//    ft_memcpy(str2, "aBCDEF", 6);

//    ret = ft_memcmp(str1, str2, 1);

//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }

//    return(0);
// }

// int main () {
//    const char test[] = "maykon mori jose";
//    int ch = 'j';
//    unsigned char *ret;

//    ret = ft_memchr(test, ch, ft_strlen(test));
//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }


// int main () {
//    char src[50] = "teste de texto src para dest";
//    char dest[50] = "Heloooo!!";
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, ft_strlen(src));
//    printf("After memcpy dest = %s\n", dest);

//    return(0);
// }

// int main () {
//    char dest[] = "newstring223";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 12);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    char dest2[] = "oldstring223";
//    const char src2[]  = "newstring";

//    printf("Before memcpy dest = %s, src = %s\n", dest2, src2);
//    ft_memcpy(dest2, src2, 12);
//    printf("After memcpy dest = %s, src = %s\n", dest2, src2);

// }

