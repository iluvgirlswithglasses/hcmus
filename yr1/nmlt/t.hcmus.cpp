
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
 * */
#define WORD_CNT 1024		// max words in a row
#define WORD_LEN 1024		// max length of a word

int io_strlen(char *str, const int BUF_SIZE) {
	// unsafe, only use when `cstring` is not allow
	for (int i = 0; i < BUF_SIZE; i++) {
		if (str[i] == '\0') return i;
	}
	return 0;
}

bool is_blank(char c) {
	return c <= ' ';
}

void io_getline(char row[WORD_CNT][WORD_LEN], int &cnt, istream &cin) {
	/*
		@ usage: seperate a line into words

		`row[i]`: the i-th word in line
		`cnt`:    the number of words in this line
	*/
	static const int BUF_SIZE = 1<<20;	// max length of buffer (2**20)
	static char buf[BUF_SIZE];			// buffer of the line

	cin.getline(buf, BUF_SIZE);
	int len = strlen(buf);	// len of this row

	bool is_reading_char = is_blank(buf[0]);
	int  cr_len = 0;	// the length of the current reading word

	for (int i = 0; i <= len; i++) {
		char c = buf[i];

		// if from char to blank
		if (is_blank(c) && is_reading_char) {
			// --> close the currently reading word
			row[cnt-1][cr_len] = '\0';
			cr_len = 0;
			is_reading_char = false;
		}

		// if from blank to char
		if (!is_blank(c) && !is_reading_char) {
			// --> detected one more word
			cnt++;
			is_reading_char = true;
		}

		if (is_reading_char) {
			row[cnt-1][cr_len++] = c;
		}
	}
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
