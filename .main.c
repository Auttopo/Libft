/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:07:05 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/12 14:38:13 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <ctype.h>

char	**v2_ft_split(char const *s, char c);

void	free_all(char **list)
{
	int	i;
	i = 0;
	while (list[i] != NULL)
	{
		free(list[i]);
		i++;
	}
	free(list);
}

void	show(char *str, int m)
{
	int i = 0;
	while (i < m)
	{
		__builtin_printf("%d|", str[i]);
//		write(1, &str[i], 1);
		i++;
	}
	__builtin_printf("\n");
//	write(1, "\n", 1);
}

int	main()
{
	int	p = 50;
	int *o = &p;
	t_list *liste = ft_lstnew(o);
	t_list new;
	new.next = NULL;
	t_list two;
	two.next = NULL;
	t_list tree;
	tree.next = NULL;
	t_list forr;
	forr.next = NULL;

	ft_lstadd_front(&liste, &new);
	ft_lstadd_front(&liste, &two);
	ft_lstadd_front(&liste, &tree);
	ft_lstadd_front(&liste, &forr);

	printf("%d", ft_lstsize(liste));

/*
 * TEST STRTRIM ----------------------------------------
 *
 * char *s = ft_strtrim("", "123");
	char *s2 = ft_strtrim("2", "");
	char *s3 = ft_strtrim("333", "1");
	char *s4 = ft_strtrim("aaaaaaapppp3344ete3e4433pppaa33333", "3aaaaaapap333p");
	__builtin_printf("\n");
	__builtin_printf("\n");
	show(s,1);
	show(s2,2);
	show(s3, 4);
	show(s4, 10);
	free(s);
	free(s2);
	free(s3);
	free(s4);*/


/*
 * TESTS ITOA -------------------------------------------
 *
 * char *i1 = ft_itoa(-1234);
 	char *i2 = ft_itoa(156);
 	char *i3 = ft_itoa(-0);
 
 	if (strcmp(i1, "-1234"))
 	{
 		exit(printf("yes"));
 	}
 	if (strcmp(i2, "156"))
 	{
 		exit(printf("nop"));
 	}~/Documents/Libft/ [master*] ./a.out 
6 sizeelem
0 sizelist (+2)
(null) WTFF
 	if (strcmp("0", i3))
 	{
 		exit(printf("nop"));
 	}
 	exit(printf("yes"));*/
/*
 *
	int n = -155530;
	char *kek = ft_itoa(n);
	printf("%s", kek);
	free(kek);
*/


/*	TESTS SUBSTR -----------------------------------------------

	char *str = "01234";
 	size_t size = 2;
 	char *ret = ft_substr(str, 20, size);
	printf("%s", ret);
 
 	if (!strncmp(ret, "", 1))
 	{
 		free(ret);
 		exit(printf("YES"));
 	}
 	free(ret);
 	exit(printf("NOP"));
*/
/*
	char *src = "coucou";
	char *new = ft_substr(src, 51, 1);
	free(new);
*/


 //	TESTS SPLIT ------------------------------------------------
 
/*	int i = 0;
	int e = 0;
	char *src = "aaaaa88888888888888aaaaaaa";
//	char *src = "\t\ti\t\t\t\ti\t\t\t";

	char sep = '8';
	char **list = ft_split(src, sep);
//	char **test = ft_split("xxxxxxxxhello!", '\0');
	while (list[i] != NULL)
	{
		e = 0;
		while (list[i][e])
		{
			printf("%c", list[i][e]);
			e++;
		}
		printf("\n");
		i++;
	}
	
	char *tempp = list[i + 2];
	free_all(list);
//	free_all(test);
*/


/*	TESTS ATOI ----------------------------------------------

	char *imax = "  +2147483640";
	printf("%d\n", ft_atoi(imax));
	printf("%d\n", atoi(imax));*/

 
/*	TESTS CALLOC----------------------------------------------
 *
	int size = 8539;
 	void * d1 = ft_calloc(size, sizeof(int));
 	void * d2 = calloc(size, sizeof(int));
 	if (memcmp(d1, d2, size * sizeof(int)))
 		exit(printf("NOP"));
 	free(d1);
 	free(d2);
 	exit(printf("YES"));


 
 char *tbl = "";
	
	printf("%d BFR", tbl[0]);

	tbl = ft_calloc(10, sizeof(char));

	printf("\n%d APR", tbl[0]);

	free(tbl);
*/

/*	TESTS CHARS ----------------------------------------------
 *
 *	unsigned char c[0] = 'Ô';
	WTF
	printf("%d my\n", c);*/


/* TESTS STRNCMP ----------------------------------------------
 *
	char *tbl = "i0\200";
	char *tbl2 = "i0\0";
	char *tbl3 = "i0i";
	char *tbl4 = "i0Ö";
	char *tbl5 = "i0P";

	printf("%d neg 0\n", ft_strncmp(tbl, tbl2, 6));
	printf("%d neg 0 true\n\n", strncmp(tbl, tbl2, 6));

	printf("%d 0 neg\n", ft_strncmp(tbl2, tbl, 6));
	printf("%d 0 neg true\n\n", strncmp(tbl2, tbl, 6));

	printf("%d negBIG neg\n", ft_strncmp(tbl, tbl4, 6));
	printf("%d negBIG neg true\n\n", strncmp(tbl, tbl4, 6));

	printf("%d neg negBIG\n", ft_strncmp(tbl4, tbl, 6));
	printf("%d neg negBIG true\n\n", strncmp(tbl4, tbl, 6));

	printf("%d neg POS\n", ft_strncmp(tbl, tbl3, 6));
	printf("%d neg POS true\n\n", strncmp(tbl, tbl3, 6));

	printf("%d POS neg\n", ft_strncmp(tbl3, tbl, 6));
	printf("%d POS neg true\n\n", strncmp(tbl3, tbl, 6));

	printf("%d POS pos\n", ft_strncmp(tbl3, tbl5, 6));
	printf("%d POS pos true\n\n", strncmp(tbl3, tbl5, 6));

	printf("%d pos POS\n", ft_strncmp(tbl5, tbl3, 6));
	printf("%d pos POS true\n\n", strncmp(tbl5, tbl3, 6));


*/


/*	
 *	TESTS MEMCPY MEMMOVE --------------------------------------
 *
 *	char tbl[10] = "0123456789";
	char tbl1[10] = "0123456789";
	char tbl2[10] = "0123456789";
	char tbl3[10] = "0123456789";
	char tbl4[10] = "0123456789";
	char tbl5[10] = "0123456789";
	char tbl6[10] = "0123456789";
	char tbl7[10] = "0123456789";

	memcpy(tbl + 3, tbl, 5);
	show(tbl, 10);
	ft_memcpy(tbl4 + 3, tbl4, 5);
	show(tbl4, 10);

	write(1, "\n", 1);

	memcpy(tbl2, tbl2 + 3, 5);
	show(tbl2, 10);
	ft_memcpy(tbl6, tbl6 + 3, 5);
	show(tbl6, 10);

	write(1, "\n", 1);

	memmove(tbl3, tbl3 + 3, 5);
	show(tbl3, 10);
	ft_memmove(tbl7, tbl7 + 3, 5);
	show(tbl7, 10);

	write(1, "\n", 1);

	memmove(tbl1 + 3, tbl1, 5);
	show(tbl1, 10);
	ft_memmove(tbl5 + 3, tbl5, 5);
	show(tbl5, 10);*/

	return (0);
}
