/*
    Exam: Mid Term Exam
    Problem: 3
    Title: Monkey
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

void removeSpaces(char str[]) {
    int writeIndex = 0, readIndex = 0;
    while (str[readIndex] != '\0') {
        if (str[readIndex] != ' ') {
            str[writeIndex++] = str[readIndex];
        }
        readIndex++;
    }
    str[writeIndex] = '\0';
}

int main()
{
    char line[100001]; 
    while (cin.getline(line, sizeof(line))) {
        removeSpaces(line);
        sort(line, line + strlen(line));
        cout << line << endl;
    }

    return 0;
}