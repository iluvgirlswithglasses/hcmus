
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	{{date}}
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <
*/

#include <iostream>
#include <cstring>
using namespace std;

/** 
 * @ io 
 * 
 * some simple functions that are used in line reading
 * the following functions do not use any dynamic array
 * */
#define WORD_CNT 1024		// max words in a row
#define WORD_LEN 1024		// max length of a word

bool is_blank(char c) {
	return c <= ' ';
}

int io_strlen(char *str, const int BUF_SIZE) {
	// unsafe, only use when `cstring` is not allowed
	for (int i = 0; i < BUF_SIZE; i++) {
		if (str[i] == '\0') return i;
	}
	return 0;
}

void io_memset(char row[WORD_CNT][WORD_LEN], char c) {
	// ridiculously slow, only use when `cstring` is not allowed
	for (int i = 0; i < WORD_CNT; i++) {
		for (int j = 0; j < WORD_LEN; j++) {
			row[i][j] = c;
		}
	}
}

void io_skipblank(char *str, int &i, int len) {
	// move the cursor out of blank zone
	while (i < len && is_blank(str[i]))
		i++;
}

void io_getline(char row[WORD_CNT][WORD_LEN], int &cnt, istream &cin) {
	/*
		@ usage: seperate a line into words

		`row[i]`: the i-th word in line
		`cnt`:    the number of words in this line
	*/
	static const int BUF_SIZE = 1<<20;	// max length of buffer (WORD_CNT * WORD_LEN)
	static char buf[BUF_SIZE];			// buffer of the line

	cin.getline(buf, BUF_SIZE);
	int len = strlen(buf);	// len of this row

	int cr_len = 0;			// the length of the currently reading word
	int i = 0;				// the cursor to the buffer
	io_skipblank(buf, i, len);
	if (i < len) cnt++;		// there's at least 1 word in the row

	while (i < len) {
		// if meet a blank char
		if (is_blank(buf[i])) {
			// --> declare the end of this word
			row[cnt-1][cr_len] = '\0';
			// and move to new word
			io_skipblank(buf, i, len);
			if (i < len) {
				cnt++;
				cr_len = 0;
			}
		} else {
			row[cnt-1][cr_len++] = buf[i++];
		}
	}
	// the last word might not have been declared as ended
	if (cnt > 0) 
		row[cnt-1][cr_len] = '\0';
}

/** 
 * @ utils 
 * */

/** 
 * @ drivers 
 * */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 2 arguments.\n" \
		"First is `X`, which indicates abc.\n" \
		"And the second is `Y`, which indicates xyz.\n" \
		"Please type in the required arguments.\n";

	/** @ var */
	const int INF = ~0^(1<<31);
	// const double EPS = 1e-6;
	// const double PI = cos(0) * 2;

	/** @ inp */
	char row[WORD_CNT][WORD_LEN];
	int rowCnt = 0;
	memset(row, 0, sizeof(row));
	
	/** @ cal */

	/** @ out */
	
	return 0;
}
