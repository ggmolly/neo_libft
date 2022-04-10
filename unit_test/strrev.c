//../strings/ft_strrev.c

#include "includes/string.h"
#include <string.h>
#include <stdio.h>

void check(char *got, char *expected)
{
	if (strcmp(got, expected) == 0)
		printf("P");
	else
		printf("F");
}


int main(void)
{
	char test1[] = "A";
	char test2[] = "";
	char test3[] = "------";
	char test4[] = "\0";
	char test5[] = "\n\n\n\n\n\n\n";
	char test7[] = "-1-12-1-2-1-1--";
	char test8[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char test9[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char test10[] = "0123456789";
	char test12[] = "                                      ";
	char test13[] = "\033";
	char test14[] = " 123 --- ---- --- ";
	char test15[] = "->->->->->";
	char test16[] = "test";
	char test17[] = "14362564574681568374867947968379274296867985796829786537862";

	ft_strrev(test1);
	ft_strrev(test2);
	ft_strrev(test3);
	ft_strrev(test4);
	ft_strrev(test5);
	ft_strrev(test7);
	ft_strrev(test8);
	ft_strrev(test9);
	ft_strrev(test10);
	ft_strrev(test12);
	ft_strrev(test13);
	ft_strrev(test14);
	ft_strrev(test15);
	ft_strrev(test16);
	ft_strrev(test17);

	check(test1, "A");
	check(test2, "");
	check(test3, "------");
	check(test4, "\0");
	check(test5, "\n\n\n\n\n\n\n");
	check(test7, "--1-1-2-1-21-1-");
	check(test8, "ZYXWVUTSRQPONMLKJIHGFEDCBA");
	check(test9, "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA");
	check(test10, "9876543210");
	check(test12, "                                      ");
	check(test13, "\033");
	check(test14, " --- ---- --- 321 ");
	check(test15, ">->->->->-");
	check(test16, "tset");
	check(test17, "26873568792869758976869247297386974976847386518647546526341");
	
	return (0);
}
