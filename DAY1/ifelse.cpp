#include <iostream>
#include <string>  
using namespace std;

class solution {
public:
    string StudentGrade(int marks) {   
        if (marks >= 90)
            return "Grade A";
        if (marks >= 75)
            return "Grade B";
        if (marks >= 60)
            return "Grade C";
        if (marks >= 35)
            return "Grade D";
        else
            return "Fail";
    }
};

int main() {
    int marks;
    cin >> marks;

    solution S;
    cout << S.StudentGrade(marks);

    return 0;
}