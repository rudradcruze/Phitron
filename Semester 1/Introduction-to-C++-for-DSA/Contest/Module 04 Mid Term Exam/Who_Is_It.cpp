/*
    Exam: Mid Term Exam
    Problem: 4
    Title: Who Is It
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

struct Student {
    int ID;
    char name[101];
    char section;
    int totalMarks;
};

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        Student students[3];
        
        for (int i = 0; i < 3; ++i) {
            std::cin >> students[i].ID >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        int maxIndex = 0;
        for (int i = 1; i < 3; ++i) {
            if (students[i].totalMarks > students[maxIndex].totalMarks) {
                maxIndex = i;
            } else if (students[i].totalMarks == students[maxIndex].totalMarks && students[i].ID < students[maxIndex].ID) {
                maxIndex = i;
            }
        }

        cout << students[maxIndex].ID << " " << students[maxIndex].name << " " << students[maxIndex].section << " " << students[maxIndex].totalMarks << endl;
    }

    return 0;
}