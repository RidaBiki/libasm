/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpageard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:58:54 by tpageard          #+#    #+#             */
/*   Updated: 2015/03/14 16:53:05 by rbikitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(char *s);
int		ft_puts(char *s);
void	*ft_memset(void *s, int c, size_t n);

int main(void) {

	/*
	** TEST FOR ft_bzero
	*/

	printf("\e[32mFT_BZERO TEST\n\e[0m");

	char test[] = "tommy";

	printf("ft_bzero 3 string test: 'tommy' = %s\n", test);
	ft_bzero(test, 3);
	printf("ft_bzero 3 string 'tommy' = %s\n", test);
	printf("ft_bzero 3 string 'tommy' + 3 = %s\n", test+ 3);

	char test2[] = "tommy";

	printf("bzero 3 string test: 'tommy' = %s\n", test2);
	bzero(test2, 3);
	printf("bzero 3 string 'tommy' = %s\n", test2);
	printf("bzero 3 string 'tommy' + 3 = %s\n", test2+ 3);

	/*
	** TEST FOR ft_isalpha
	*/

	printf("\e[32m\nFT_ISALPHA TEST\n\e[0m");
	printf("isalpha 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('a'), isalpha('a'));
	printf("isalpha 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('A'), isalpha('A'));
	printf("isalpha 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('k'), isalpha('k'));
	printf("isalpha 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('z'), isalpha('z'));
	printf("isalpha '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha(91), isalpha(91));
	printf("isalpha '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('='), isalpha('='));

	printf("isalpha 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('a' + 0x100), isalpha('a' + 0x100));
	printf("isalpha '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('2'), isalpha('2'));
	printf("isalpha 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('Z'), isalpha('Z'));
	printf("isalpha 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('t'), isalpha('t'));
	printf("isalpha '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha(0), isalpha(0));
	printf("isalpha '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha(1), isalpha(1));
	printf("isalpha '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha(9999), isalpha(9999));
	printf("isalpha '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('1'), isalpha('1'));
	printf("isalpha '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('2'), isalpha('2'));
	printf("isalpha 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('A'), isalpha('A'));
	printf("isalpha 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('Z'), isalpha('z'));
	printf("isalpha ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha(' '), isalpha(' '));
	printf("isalpha '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('%'), isalpha('%'));
	printf("isalpha '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('\t'), isalpha('\t'));
	printf("isalpha '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('\n'), isalpha('\n'));
	printf("isalpha '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('\v'), isalpha('\v'));
	printf("isalpha '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha('\b'), isalpha('\b'));
	printf("isalpha '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalpha(7), isalpha(7));



	/*
	** TEST FOR ft_isdigit
	*/
	printf("\e[32m\nFT_ISDIGIT TEST\n\e[0m");

	printf("isdigit '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(0), isdigit(0));
	printf("isdigit '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(1), isdigit(1));
	printf("isdigit '5' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(5), isdigit(5));
	printf("isdigit '9' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(9), isdigit(9));
	printf("isdigit '10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(10), isdigit(10));
	printf("isdigit '-10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(-10), isdigit(-10));
	printf("isdigit '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(91), isdigit(91));
	printf("isdigit '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(9999), isdigit(9999));

	printf("isdigit 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('a'), isdigit('a'));
	printf("isdigit 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('A'), isdigit('A'));
	printf("isdigit 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('k'), isdigit('k'));
	printf("isdigit 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('z'), isdigit('z'));
	printf("isdigit '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('='), isdigit('='));

	printf("isdigit 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('a' + 0x100), isdigit('a' + 0x100));
	printf("isdigit '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('2'), isdigit('2'));
	printf("isdigit 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('Z'), isdigit('Z'));
	printf("isdigit 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('t'), isdigit('t'));
	printf("isdigit '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('1'), isdigit('1'));
	printf("isdigit '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('2'), isdigit('2'));
	printf("isdigit 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('A'), isdigit('A'));
	printf("isdigit 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('Z'), isdigit('z'));
	printf("isdigit ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(' '), isdigit(' '));
	printf("isdigit '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('%'), isdigit('%'));
	printf("isdigit '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('\t'), isdigit('\t'));
	printf("isdigit '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('\n'), isdigit('\n'));
	printf("isdigit '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('\v'), isdigit('\v'));
	printf("isdigit '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit('\b'), isdigit('\b'));
	printf("isdigit '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isdigit(7), isdigit(7));



	/*
	** TEST FOR ft_isascii
	*/
	printf("\e[32m\nFT_ISASCII TEST\n\e[0m");

	printf("isascii '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(0), isascii(0));
	printf("isascii '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(1), isascii(1));
	printf("isascii '5' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(5), isascii(5));
	printf("isascii '9' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(9), isascii(9));
	printf("isascii '10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(10), isascii(10));
	printf("isascii '-10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(-10), isascii(-10));
	printf("isascii '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(91), isascii(91));
	printf("isascii '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(9999), isascii(9999));

	printf("isascii 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('a'), isascii('a'));
	printf("isascii 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('A'), isascii('A'));
	printf("isascii 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('k'), isascii('k'));
	printf("isascii 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('z'), isascii('z'));
	printf("isascii '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('='), isascii('='));

	printf("isascii 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('a' + 0x100), isascii('a' + 0x100));
	printf("isascii '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('2'), isascii('2'));
	printf("isascii 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('Z'), isascii('Z'));
	printf("isascii 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('t'), isascii('t'));
	printf("isascii '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('1'), isascii('1'));
	printf("isascii '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('2'), isascii('2'));
	printf("isascii 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('A'), isascii('A'));
	printf("isascii 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('Z'), isascii('z'));
	printf("isascii ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(' '), isascii(' '));
	printf("isascii '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('%'), isascii('%'));
	printf("isascii '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('\t'), isascii('\t'));
	printf("isascii '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('\n'), isascii('\n'));
	printf("isascii '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('\v'), isascii('\v'));
	printf("isascii '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii('\b'), isascii('\b'));
	printf("isascii '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isascii(7), isascii(7));

	/*
	** TEST FOR ft_isprint
	*/
	printf("\e[32m\nFT_ISPRINT TEST\n\e[0m");
	
	printf("isprint '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(0), isprint(0));
	printf("isprint '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(1), isprint(1));
	printf("isprint '5' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(5), isprint(5));
	printf("isprint '9' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(9), isprint(9));
	printf("isprint '10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(10), isprint(10));
	printf("isprint '-10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(-10), isprint(-10));
	printf("isprint '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(91), isprint(91));
	printf("isprint '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(9999), isprint(9999));

	printf("isprint 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('a'), isprint('a'));
	printf("isprint 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('A'), isprint('A'));
	printf("isprint 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('k'), isprint('k'));
	printf("isprint 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('z'), isprint('z'));
	printf("isprint '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('='), isprint('='));

	printf("isprint 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('a' + 0x100), isprint('a' + 0x100));
	printf("isprint '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('2'), isprint('2'));
	printf("isprint 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('Z'), isprint('Z'));
	printf("isprint 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('t'), isprint('t'));
	printf("isprint '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('1'), isprint('1'));
	printf("isprint '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('2'), isprint('2'));
	printf("isprint 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('A'), isprint('A'));
	printf("isprint 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('Z'), isprint('z'));
	printf("isprint ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(' '), isprint(' '));
	printf("isprint '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('%'), isprint('%'));
	printf("isprint '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('\t'), isprint('\t'));
	printf("isprint '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('\n'), isprint('\n'));
	printf("isprint '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('\v'), isprint('\v'));
	printf("isprint '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint('\b'), isprint('\b'));
	printf("isprint '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isprint(7), isprint(7));

	/*
   	** TEST FOR ft_toupper
	*/
	printf("\e[32m\nFT_toupper TEST\n\e[0m");

	printf("toupper '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(0), toupper(0));
	printf("toupper '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(1), toupper(1));
	printf("toupper '5' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(5), toupper(5));
	printf("toupper '9' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(9), toupper(9));
	printf("toupper '10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(10), toupper(10));
	printf("toupper '-10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(-10), toupper(-10));
	printf("toupper '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(91), toupper(91));
	printf("toupper '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(9999), toupper(9999));

	printf("toupper 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('a'), toupper('a'));
	printf("toupper 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('A'), toupper('A'));
	printf("toupper 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('k'), toupper('k'));
	printf("toupper 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('z'), toupper('z'));
	printf("toupper '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('='), toupper('='));

	printf("toupper 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('a' + 0x100), toupper('a' + 0x100));
	printf("toupper '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('2'), toupper('2'));
	printf("toupper 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('Z'), toupper('Z'));
	printf("toupper 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('t'), toupper('t'));
	printf("toupper '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('1'), toupper('1'));
	printf("toupper '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('2'), toupper('2'));
	printf("toupper 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('A'), toupper('A'));
	printf("toupper 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('Z'), toupper('z'));
	printf("toupper ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(' '), toupper(' '));
	printf("toupper '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('%'), toupper('%'));
	printf("toupper '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('\t'), toupper('\t'));
	printf("toupper '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('\n'), toupper('\n'));
	printf("toupper '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('\v'), toupper('\v'));
	printf("toupper '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper('\b'), toupper('\b'));
	printf("toupper '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_toupper(7), toupper(7));

	/*
   	** TEST FOR ft_tolower
	*/

	printf("\e[32m\nFT_tolower TEST\n\e[0m");

	printf("tolower '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(0), tolower(0));
	printf("tolower '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(1), tolower(1));
	printf("tolower '5' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(5), tolower(5));
	printf("tolower '9' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(9), tolower(9));
	printf("tolower '10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(10), tolower(10));
	printf("tolower '-10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(-10), tolower(-10));
	printf("tolower '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(91), tolower(91));
	printf("tolower '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(9999), tolower(9999));

	printf("tolower 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('a'), tolower('a'));
	printf("tolower 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('A'), tolower('A'));
	printf("tolower 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('k'), tolower('k'));
	printf("tolower 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('z'), tolower('z'));
	printf("tolower '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('='), tolower('='));

	printf("tolower 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('a' + 0x100), tolower('a' + 0x100));
	printf("tolower '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('2'), tolower('2'));
	printf("tolower 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('Z'), tolower('Z'));
	printf("tolower 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('t'), tolower('t'));
	printf("tolower '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('1'), tolower('1'));
	printf("tolower '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('2'), tolower('2'));
	printf("tolower 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('A'), tolower('A'));
	printf("tolower 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('Z'), tolower('z'));
	printf("tolower ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(' '), tolower(' '));
	printf("tolower '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('%'), tolower('%'));
	printf("tolower '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('\t'), tolower('\t'));
	printf("tolower '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('\n'), tolower('\n'));
	printf("tolower '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('\v'), tolower('\v'));
	printf("tolower '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower('\b'), tolower('\b'));
	printf("tolower '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_tolower(7), tolower(7));

	/*
   	** TEST FOR ft_isalnum
	*/

	printf("\e[32m\nFT_isalnum TEST\n\e[0m");

	printf("isalnum '0' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(0), isalnum(0));
	printf("isalnum '1' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(1), isalnum(1));
	printf("isalnum '5' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(5), isalnum(5));
	printf("isalnum '9' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(9), isalnum(9));
	printf("isalnum '10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(10), isalnum(10));
	printf("isalnum '-10' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(-10), isalnum(-10));
	printf("isalnum '91' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(91), isalnum(91));
	printf("isalnum '9999' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(9999), isalnum(9999));

	printf("isalnum 'a' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('a'), isalnum('a'));
	printf("isalnum 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('A'), isalnum('A'));
	printf("isalnum 'k' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('k'), isalnum('k'));
	printf("isalnum 'z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('z'), isalnum('z'));
	printf("isalnum '=' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('='), isalnum('='));

	printf("isalnum 'a + 0x100' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('a' + 0x100), isalnum('a' + 0x100));
	printf("isalnum '2' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('2'), isalnum('2'));
	printf("isalnum 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('Z'), isalnum('Z'));
	printf("isalnum 't' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('t'), isalnum('t'));
	printf("isalnum '\'1\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('1'), isalnum('1'));
	printf("isalnum '\'2\'' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('2'), isalnum('2'));
	printf("isalnum 'A' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('A'), isalnum('A'));
	printf("isalnum 'Z' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('Z'), isalnum('z'));
	printf("isalnum ' ' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(' '), isalnum(' '));
	printf("isalnum '%%' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('%'), isalnum('%'));
	printf("isalnum '\\t' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('\t'), isalnum('\t'));
	printf("isalnum '\\n' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('\n'), isalnum('\n'));
	printf("isalnum '\\v' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('\v'), isalnum('\v'));
	printf("isalnum '\\b' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum('\b'), isalnum('\b'));
	printf("isalnum '7' ? : \e[32m %d \e[0m \e[31m %d \e[0m\n", ft_isalnum(7), isalnum(7));

	/*
   	** TEST FOR ft_strlen
	*/

  	printf("\e[32m\nFT_strlen TEST\e[0m\n");

  	printf("strlen[bonjour]: %d\n", ft_strlen("bonjour"));
  	printf("strlen[tara]: %d\n", ft_strlen("tara"));
  	printf("strlen[tatata]: %d\n", ft_strlen("tatata"));
  	printf("strlen[oui]: %d\n", ft_strlen("oui"));


    /*
	** TEST FOR ft_puts
    */

	printf("\e[32m\nFT_puts TEST\e[0m\n");

	ft_puts("test");
	puts("test");
	ft_puts("test\n");
	puts("test\n");
	ft_puts("te\0st");
	puts("te\0st");
	printf("%d = valeur de retour ftputs\n", ft_puts("rsfdg3245@#$5"));
	printf("%d = valeur de retour puts\n", puts("rsfdg3245@#$5"));

	/*
	** TEST FOR ft_memset
	*/
	printf("\e[32m\nFT_memset TEST\e[0m\n");
	
	char mset[6] = "tommy";
	mset[5] = '\0';
	
	printf("%s\n", mset);
	ft_memset(mset, 'Q', 3);
	printf("%s\n", (char *)ft_memset(mset, 'Q', 3));
	printf("%s\n", mset);

	char mset2[6] = "tommy";
	mset2[5] = '\0';
	
	printf("%s\n", mset2);
	memset(mset2, 'Q', 3);
	printf("%s\n", (char *)memset(mset2, 'Q', 3));
	printf("%s\n", mset2);
	
	return (0);
}
