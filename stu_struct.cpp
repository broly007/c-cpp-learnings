#include <iostream.h>
#include <conio.h>
#include <stdio.h>

struct student
  {
	int roll;
	char name[25];
	int marks[10];
	char grade;

  }studentResult;

int main() {
        
        int numOfSubjects;
        int total;
        int avg;
        int sum;

        cout << "enter student name :" << endl;
        gets(studentResult.name);

        cout << "enter student roll no :" << endl;
		cin >> studentResult.roll;  
        cout << "enter no of subjects : " << endl;
        cin >> numOfSubjects;  
          
        cout << "enter marks in "<< numOfSubjects <<" subjects to find the averege and grade" << endl;
        for (int i = 0; i < numOfSubjects; i++) {
        	cout << "Enter Marks:->";
        	cin >> studentResult.marks[i];
        	sum+ = studentResult.marks[i]; 
        }    
        total = sum;
        avg = total / numOfSubjects;
 		
 		if (avg > 50) {
 	             studentResult.grade = 'F';   
 		} else if (avg > 60){
 		    	 studentResult.grade = 'D';
 		} else if (avg > 70){   
 		     	 studentResult.grade = 'C';
 		} else if (avg > 80){
 		      	 studentResult.grade = 'B';
        } else if (avg > 90){
               	 studentResult.grade = 'A';
 		} else {
             	 cout << "FAIL!!!" << endl;
        }

         cout << "Student name = " << studentResult.name << endl;
         cout << "Student roll no. :" << studentResult.roll << endl;
         cout << "Total = " << sum << endl;
         cout << "averege = " << avg << endl;
         cout << "Grade = " << studentResult.grade << endl;
 

	getch();
	return 0;
 } 