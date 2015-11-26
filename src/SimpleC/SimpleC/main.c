// Common Reference
#include <stdio.h>>

// Exercise 1-1 / 1-2
// Hello World

//main()
//{
//	printf("hello, world\n");
//}

// Exercise 1-3
// Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

//main()
//{
//	float fahr, celsius;
//	float lower, upper, step;
//
//	lower = 0; /* lower limit of temperature scale */
//	upper = 300; /* upper limit of temperature scale */
//	step = 20; /* step size */
//
//	fahr = lower;
//	printf("Fahr\tCels\n");
//	while (fahr <= upper) {
//		celsius = (5.0/9.0) * (fahr - 32.0);
//		printf("%3.0f %6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//}

// Exercise 1-4
// Celsius-Fahrenheit table for celsius = 0, 20, ..., 300

//main()
//{
//	float fahr, celsius;
//	float lower, upper, step;
//
//	lower = 0; /* lower limit of temperature scale */
//	upper = 300; /* upper limit of temperature scale */
//	step = 20; /* step size */
//
//	celsius = lower;
//	printf("Cels  Fahr\n");
//	while (celsius <= upper) {
//		fahr = ((9.0 / 5.0) * celsius) + 32;
//		printf("%3.0f %6.1f\n", celsius, fahr);
//		celsius = celsius + step;
//	}
//}

// Fahrenheit-Celsius Table For Statement

//main()
//{
//	int fahr;
//
//	printf("Fahr  Cels\n");
//	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
//}

// Exercise 1-5
// Fahrenheit-Celsius Table For Statement Reversed

//main()
//{
//	int fahr;
//	printf("Fahr  Cels\n");
//	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
//}

// Symbolic Constants (Fahrenheit-Celsius Table)

//#define LOWER	0 /* lower limit of table */
//#define UPPER	300 /* upper limit of table */
//#define STEP	20 /* step size */
//
//main()
//{
//	int fahr;
//	printf("Fahr  Cels\n");
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
//}

// Char Put and Get

// c = getchar(); /* read character from keyboard and assign to value */
// putchar(c); /* print character of value c */

// File Copying Version #1

//main()
//{
//	int c;
//	printf("Enter key to see it repeated\n");
//	c = getchar();
//	// EOF = End of File
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	}
//}

// File Copying Version #2

//main()
//{
//	int c;
//
//	printf("Enter key to see it repeated\n");
//	while ((c = getchar()) != EOF)
//		putchar(c);
//}

// Exercise 1-6
// Verify that expression getchar() != EOF is 0 or 1

//main()
//{
//	int c;
//	printf("Verify getchar() != EOF\n");
//	while (c = getchar() != EOF)
//		printf("%d\n", c);
//		/*putchar(c);*/
//}

// Exercise 1-7
// Print value of EOF

//main()
//{
//	printf("Verify EOF value\n");
//	printf("%d\n", EOF);
//}

// Count characters in input; version #1

//main()
//{
//	long nc;
//
//	nc = 0;
// /* using '\n' instead of EOF, if EOF hit Ctrl + Z */
//	while (getchar() != '\n')
//		++nc;
//	
//	printf("%ld\n", nc);
//}

// Count characters in input; version #2

//main()
//{
//	double nc;
//	for (nc = 0; getchar() != EOF; ++nc)
//		/* body blank - null statement */ ;
//	printf("%.0f\n", nc);
//}

// Line Counting Example

//main()
//{
//	int c, nl;
//
//	nl = 0;
//
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//			++nl;
//
//	printf("%d\n", nl);
//}

// Exercise 1-8 - Counting Blanks, Tabs, and Newlines

//main()
//{
//	int c, nl, bl, tb;
//	
//	nl = 0;
//	bl = 0;
//	tb = 0;
//
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//			++nl;
//		else if (c == '\t')
//			++tb;
//		else if (c == ' ')
//			++bl;
//
//	printf("New Lines: %d \t Tabs: %d \t Blanks: %d\n", nl, tb, bl);
//}

// Exercise 1-9 - Copy input, replace multiple blanks with single blank

//main()
//{
//	int c, last;
//
//	last = 0;
//
//	while ((c = getchar()) != EOF)
//	{
//		if (c != ' ' || last != ' ')
//			printf("%c", last);
//		last = c;
//	}
//}

// Exercise 1-10 - Copy input to output, replace each tab by \t, each backspace by \b, and each backslash by \\

//main()
//{
//	int lastChar = 0, c;
//	while ((c = getchar()) != EOF)
//	{
//		if (c != '\b' && c != '\t' && c != '\\')
//		{
//			printf("%c", lastChar);
//		}
//		else if (c == '\b') {
//			putchar('\\');
//			putchar('b');
//		}
//		else if (c == '\t')
//		{
//			putchar('\\');
//			putchar('t');
//		}
//		else if (c == '\\')
//		{
//			putchar('\\');
//			putchar('\\');
//		}
//		lastChar = c;
//	}
//}

// Word Counting

//#define IN 1 /* inside a word */
//#define OUT 0 /* outside a word */
//
//// count lines, words, and characters in input
//main()
//{
//	int c, nl, nw, nc, state;
//
//	state = OUT;
//	nl = nw = nc = 0;
//	while ((c = getchar()) != EOF) {
//		++nc;
//		if (c == '\n')
//			++nl;
//		if (c == ' ' || c == '\n' || c == '\t')
//			state = OUT;
//		else if (state == OUT) {
//			state = IN;
//			++nw;
//		}
//	}
//	printf("nl: %d | nw: %d | nc: %d\n", nl, nw, nc);
//}

// Exercise 1-11 - Testing Word Count Program? Inputs likely to uncover bugs?

/*

	1. input file with zero words, thus nl, nw, and nc = 0
	2. input file with only 1 word and no nl
	3. input file with all whitespace and no new lines
	4. input file with 66,000 new lines
	5. input file contains 66,000 single letter words
	6. input file contains word with different kinds of white space between words
	7. input file contains 66,000 words without any new lines

	Boundary Conditions:
	1. No input
	2. No words (only new lines)
	3. No words (only blanks, tabs, or new lines)
	4. One word per line (no blanks or tabs)
	5. Word starting at beginning of line
	6. Word starting after blanks

*/


// Exercise 1-12 - Write program that prints its input one word per line

//#define IN 1 /* inside a word */
//#define OUT 0 /* outside a word */
//
//main()
//{
//	int lastChar, c, nc, nw, state;
//
//	state = OUT;
//
//	lastChar = nc = nw = 0;
//
//	while ((c = getchar()) != EOF) {
//		++nc;
//		if (c != ' ' || c != '\t' || c != '\n' || lastChar != ' ' || lastChar != '\t' || lastChar != '\n') {
//			printf("%c", lastChar);
//		}
//		if (c == ' ' || c == '\n' || c == '\t')
//		{
//			state = OUT;
//		}
//		else if (state == OUT) {
//			state = IN;
//			++nw;
//			putchar('\n');
//		}
//		lastChar = c;
//	}
//	printf("\nnc: %d | nw: %d", nc, nw);
//}

// Arrays

// count digits, white space, others

//main()
//{
//	int c, i, nwhite, nother;
//	int ndigit[10];
//	
//	nwhite = nother = 0;
//
//	for (i = 0; i < 10; ++i)
//		ndigit[i] = 0;
//
//	while ((c = getchar()) != EOF)
//		if (c >= '0' && c <= '9')
//			++ndigit[c-'0'];
//		else if (c == ' ' || c == '\n' || c == '\t')
//			++nwhite;
//		else
//			++nother;
//
//	printf("digits =");
//	for (i = 0; i < 10; ++i)
//		printf(" %d", ndigit[i]);
//	printf(", white space = %d, other = %d\n", nwhite, nother);
//}

// Exercise 1-13 - Print histogram of lengths of words


// Show bars of word length horizontally
main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
			putchar('\n');
		else
			putchar('*');
	}
}