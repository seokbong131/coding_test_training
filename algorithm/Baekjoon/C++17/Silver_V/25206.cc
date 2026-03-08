#include<iostream>
#include<string>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    double total_credit = 0.0, sum = 0.0;
    
    for (int i = 0 ; i < 20; ++i) {
        string title, credit, grade;
        cin >> title >> credit >> grade;
        
        if (grade == "P") continue;
        
        double point = 0.0;
        
        if (grade == "A+") point = 4.5;
        else if (grade == "A0") point = 4.0;
        else if (grade == "B+") point = 3.5;
        else if (grade == "B0") point = 3.0;
        else if (grade == "C+") point = 2.5;
        else if (grade == "C0") point = 2.0;
        else if (grade == "D+") point = 1.5;
        else if (grade == "D0") point = 1.0;
        
        total_credit += stod(credit);
        sum += stod(credit) * point;
    }
    
    double cumulative_grade = sum / total_credit;
    cout << cumulative_grade << '\n';
    
    return 0;
}