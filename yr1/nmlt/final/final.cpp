#include <iostream>
#include <string>
#include <cstring> // For students who use char*

#define MAX 100

using namespace std;

struct Goods
{
    int ID;
    int quantity;
};


// Problem 1-----------------------------------------------------------
void RemoveAt(Goods listGoods[], int &nGoods, int ind) 
{
    for (int i = ind; i < nGoods - 1; i++)
        listGoods[i] = listGoods[i + 1];
    nGoods--;
}

void RemoveGoods(Goods listGoods[], int &nGoods)
{
    // TODO: YOUR CODE HERE
    // Lưu ý: Sinh viên cần thực hiện loại bỏ trực tiếp phần tử trên mảng đầu vào, KHÔNG tạo ra mảng phụ.
    for (int i = nGoods-1; i >= 0; i--) 
    {
        if (1001 <= listGoods[i].ID && listGoods[i].ID <= 1005) 
        {
            RemoveAt(listGoods, nGoods, i);
        }
    }
}


// Problem 2-----------------------------------------------------------
int FindMin(int a[], int n) 
{
    int res = a[0];
    for (int i = 1; i < n; i++)
        res = min(res, a[i]);
    return res;
}

int FindInd(int a[], int n, int v) 
{
    for (int i = 0; i < n; i++)
        if (a[i] == v) return i;
    return -1;
}

int FindIDAbsentStudent(int listIDStu[], int nSubStu)
{
    // TODO: YOUR CODE HERE
    int mn = FindMin(listIDStu, nSubStu), mx = mn + nSubStu;
    //
    /*
    bool found[nSubStu+1];
    memset(found, 0, sizeof(found));
    for (int i = 0; i < nSubStu; i++)
        found[listIDStu[i] - mn] = true;
    //
    for (int i = 0; i < nSubStu+1; i++)
        if (!found[i]) return i + mn;
    */
    for (int i = mn; i <= mx; i++)
        if (FindInd(listIDStu, nSubStu, i) == -1) return i;
    return 0;
}


// Problem 3-----------------------------------------------------------

bool IsBlank(char c) 
{
    return c <= ' ';
}

void SkipBlank(char *str, int &i, int len) 
{
    // move the cursor out of blank zone
    while (i < len && IsBlank(str[i]))
        i++;
}

void GetWords(string sline, char row[MAX][MAX], int &cnt) 
{
    /*
        @ usage: seperate a line into words

        `row[i]`: the i-th word in line
        `cnt`:    the number of words in this line
    */

    char line[MAX];
    strcpy(line, sline.c_str());

    int len = strlen(line);

    int cr_len = 0;         // the length of the currently reading word
    int i = 0;              // the cursor to the buffer
    SkipBlank(line, i, len);
    if (i < len) cnt++;     // there's at least 1 word in the row

    while (i < len) 
    {
        // if meet a blank char
        if (IsBlank(line[i])) 
        {
            // --> declare the end of this word
            row[cnt-1][cr_len] = '\0';
            // and move to new word
            SkipBlank(line, i, len);
            if (i < len) 
            {
                cnt++;
                cr_len = 0;
            }
        } 
        else 
        {
            row[cnt-1][cr_len++] = line[i++];
        }
    }
    // the last word might not have been declared as ended
    if (cnt > 0) 
        row[cnt-1][cr_len] = '\0';
}

int CountNumOfASpecificGift(string note, string specificGift)
{
    char row[MAX][MAX];
    int rowCnt = 0;
    GetWords(note, row, rowCnt);

    int ans = 0;
    for (int i = 0; i < rowCnt; i++)
        if (strcmp(specificGift.c_str(), row[i]) == 0) ans++;

    return ans; // Default value (you can remove this line when you have yourself a solution)
} 

int CountTypeOfGift(string note)
{
    char row[MAX][MAX];
    int n = 0;
    GetWords(note, row, n);

    string a[n];
    for (int i = 0; i < n; i++)
        a[i] = string(row[i]);
    
    // shameless bubble sort
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-1; j++)
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);

    //
    int diff = n > 0;
    for (int i = 0; i < n-1; i++)
        if (a[i] != a[i+1])
            diff++;

    return diff; // Default value (you can remove this line when you have yourself a solution)
}


// NOTE: DO NOT CHANGE THE CONTENT OF THE MAIN FUNCTION
int main()
{
    // Problem 1
    cout << "Problem 1: \n";
    Goods listGoods[MAX] = {{2001, 5}, {1002, 10}, {3001, 1}, {1003, 4}, {1010, 7}};
    int nGoods = 5;

    RemoveGoods(listGoods, nGoods);
    
    cout << "Litst of goods' ID: ";
    for (int i = 0; i < nGoods; i++)
        cout << listGoods[i].ID << " ";

    // Problem 2
    cout << "\n\nProblem 2: \n";
    int listStuID[MAX] = {1003, 1001, 1004, 1006, 1002, 1007};
    int nSubStu = 6;

    int IDAbsentStu = FindIDAbsentStudent(listStuID, nSubStu);
    
    cout << "The ID of student who didnt submit: " << IDAbsentStu << endl;

    // Problem 3
    cout << "\nProblem 3: \n";
    string note = "  gau hoa  xe  hoa gau hoa hentai-dvd  ";
    string specificGift = "hoa";

    cout << "The number of '" << specificGift << "': " << CountNumOfASpecificGift(note, specificGift) << endl;
    cout << "The number of types of gifts: " << CountTypeOfGift(note);

    return 0;
}