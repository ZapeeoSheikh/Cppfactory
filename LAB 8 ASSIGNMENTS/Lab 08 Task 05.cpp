//**********************( Lab 08 )****************************
//********************Task 05 ( Star Search )**********************
#include <iostream>
#include <iomanip> //to format output
using namespace std;

//function prototype
void JudgeData(double &performanceScore);  //pointer
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main(){
    //declare variable to store user input
    //for 5 judge scores
    double score1, score2, score3, score4, score5;

    //call function getJudgeData() 5 times
    JudgeData(score1);
    JudgeData(score2);
    JudgeData(score3);
    JudgeData(score4);
    JudgeData(score5);

    //call function calcScore() to display average
    calcScore(score1, score2, score3, score4, score5);

    //return 0 to mark successful termination of program
    return 0;
}

void JudgeData(double &performanceScore){    //point symbol name is ampercent 
    //prompt user to enter score and read
    //from keyboard
    cout << "Please enter performance score: (0-10)\n";
    cin >> performanceScore;

    //validate input using while loop
    while(performanceScore < 0 || performanceScore > 10){
        //print error message
        cout << "Please enter score within range!\n";
        cin >> performanceScore;
    }
}

void calcScore(double score1, double score2, double score3, double score4, double score5){
    //format output precision
    cout << fixed << setprecision(2);
    //print output message directly and call findLowest() and findHighest() directly
    //divide by 3.0 to prevent integer division
    cout << "Average of the 3 scores is ";
    cout << ((score1+score2+score3+score4+score5)-findLowest(score1, score2, score3, score4, score5)-
             findHighest(score1, score2, score3, score4, score5))/3.0 << ".\n";
}

double findLowest(double score1, double score2, double score3, double score4, double score5){
    //use if/else statements to find lowest
    //score and return it
    if(score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
        return score1;
    else if(score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
        return score2;
    else if(score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
        return score3;
    else if(score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
        return score4;
    else if(score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4)
        return score5;
}

double findHighest(double score1, double score2, double score3, double score4, double score5){
    //use if/else statements to find highest
    //score and return it
    if(score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
        return score1;
    else if(score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
        return score2;
    else if(score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
        return score3;
    else if(score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
        return score4;
    else if(score5 > score1 && score5 > score2 && score5 > score3 && score5 > score4)
        return score5;
}
