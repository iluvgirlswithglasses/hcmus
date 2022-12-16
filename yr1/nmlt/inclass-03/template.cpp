#include <iostream>
#include <cstring>

#define MAXROW 10
#define MAXCOL 20
#define MAXLEN 201

using namespace std;


// Problem 1-----------------------------------------------------------
void input2DArray(int arr[][MAXCOL], int &mRow, int &nCol)
{
    // TODO: YOUR CODE HERE
	cin >> mRow >> nCol;
	for (int i = 0; i < mRow; i++)
		for (int j = 0; j < nCol; j++)
			cin >> arr[i][j];
}


int findOccurrenceOfMax(int arr[][MAXCOL], int mRow, int nCol)
{
    // TODO: YOUR CODE HERE
    int mx = arr[0][0];
    for (int i = 0; i < mRow; i++)
    	for (int j = 0; j < nCol; j++)
    		mx = max(mx, arr[i][j]);
    //
    int cnt = 0;
    for (int i = 0; i < mRow; i++)
    	for (int j = 0; j < nCol; j++)
    		cnt += arr[i][j] == mx;
    //
    return cnt;
}


// Problem 2-----------------------------------------------------------
bool isBlank(char c) 
{
	return c <= ' ';
}

void skipBlank(char *str, int &i, int len) 
{
	// move the cursor out of blank zone
	while (i < len && isBlank(str[i]))
		i++;
}

void removeRedundantSpaces(char str[])
{
    /*
		@ original usage: seperate a line into words

		`row[i]`: the i-th word in str
		`cnt`:    the number of words in this str
	*/
	char row[MAXLEN][MAXLEN];
	int cnt = 0;
	memset(row, 0, sizeof(row));

	int len = strlen(str);	// len of this str

	int cr_len = 0;			// the length of the currently reading word
	int i = 0;				// the cursor to the str buffer
	skipBlank(str, i, len);
	if (i < len) cnt++;		// there's at least 1 word in the str

	while (i < len) 
	{
		// if meet a blank char
		if (isBlank(str[i])) 
		{
			// --> declare the end of this word
			row[cnt-1][cr_len] = '\0';
			// and move to new word
			skipBlank(str, i, len);
			if (i < len) 
			{
				cnt++;
				cr_len = 0;
			}
		} 
		else 
		{
			row[cnt-1][cr_len++] = str[i++];
		}
	}
	// the last word might not have been declared as ended
	if (cnt > 0) 
		row[cnt-1][cr_len] = '\0';

	// copy the result
	memset(str, 0, sizeof(str[0]) * MAXLEN);
	int str_iter = 0;
	for (int i = 0; i < cnt; i++) 
	{
		for (int j = 0; j < strlen(row[i]); j++)
			str[str_iter++] = row[i][j];
		// add a space between words
		if (i != cnt - 1)
			str[str_iter++] = ' ';
	}
}


// NOTE: DO NOT CHANGE THE CONTENT OF THE MAIN FUNCTION
int main()
{
    // Problem 1------------------------------
    cout << "Problem 1: \n";

    int arr[MAXROW][MAXCOL];
    int mRow, nCol;

    // Enter a 2D array
    input2DArray(arr, mRow, nCol);

    // Print result
    cout << "Occurrence of max element: " << findOccurrenceOfMax(arr, mRow, nCol) << endl; 


    // Problem 2------------------------------
    cout << "\nProblem 2: \n";

    char str[MAXLEN];
    strcpy(str, "  This is    an input string   ");

    // Remove redundant spaces in input string
    removeRedundantSpaces(str);

    // Print result
    cout << "String after removing redundant spaces: " << str << ".";

    return 0;
}