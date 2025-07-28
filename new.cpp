#include <iostream>
using namespace std;

int main (){
    int points;
    int total = 0;
    int totalPoints = 0;
    int n = 5;
    int marks[n];
    int point[n];
    float average;
    float cgpa;
    int totalCredits = 50;
    
   for (int i = 0 ; i < n ; i++){
      cout << "\nEnter marks for subject "<<i+1 << " : ";
      cin >> marks[i];
   }
   
   for (int i = 0 ; i < n ; i++){
       if(marks[i] <= 40){
           points = 0;
       } else if (marks[i] >= 40 && marks[i] <= 50){
           points = 6;
       } else if (marks[i] >= 50 && marks[i] <= 60){
           points = 7;
       } else if (marks[i] >= 60 && marks[i] <= 70){
           points = 8;
       }  else if (marks[i] >= 70 && marks[i] <= 80){
           points = 9;
       }  else if (marks[i] >= 80 && marks[i] <= 100){
           points = 10;
       }
       
       point[i] = points;
       cout << "credits recived in subject "<< i+1 << ": " << point[i] << endl;
   }
   
    for (int i = 0 ; i < n ; i++){
      total += marks[i];
   }
   
    for (int i = 0 ; i < n ; i++){
      totalPoints += point[i];
   }
   
   cgpa = totalPoints/totalCredits;
   
   cout << "\nThe total marks are : " << total;
   cout << "\nThe total marks are : " << totalPoints;
   cout << "\nThe average is : " << total/5;
   cout << "\nThe cgpa is : " << cgpa;
   
   
   
   
    // total = eng+ math + science + sst + computer;
    // average = total/5;

    // cout << "The total marks are : " << total << endl;
    // cout << "The average marks are : " << average << endl;


return 0;
}
