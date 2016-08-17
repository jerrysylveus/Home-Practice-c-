//
//  main.cpp
//  Home Practice c++
//
//  Created by Jerry Sylveus on 3/16/16.
//  Copyright © 2016 Jerry Sylveus. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/*10.  Days in a Month
Write a program that asks the user to enter the month (letting the user enter an integer
in the range of 1 through 12) and the year. The program should then display the
number of days in that month. Use the following criteria to identify leap years:
 
1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and
only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
 
2. If the year is not divisible by 100, then it is a leap year if and if only it is 
 divisible by 4. For example, 2008 is a leap year but 2009 is not.
 
Here is a sample run of the program:
Enter a month (1-12): 2 [ Enter]
Enter a year: 2008 [Enter]
29 days*/




int maxCollatz(int n);
int main(int argc, const char * argv[]) {
    
    int year, month;
    cout << "Enter a month (1-12):  ";
    cin >> month;
    
    cout << "Enter a year:  ";
    cin >> year;
    cout << endl;
    
    // variables for the months depicting how many days in a month
    int jan = 31;
    int feb = 28;
    int leapFeb = 29;
    int march = 31;
    int april = 30;
    int may = 31;
    int june = 30;
    int july = 31;
    int august = 31;
    int sept = 30;
    int oct = 31;
    int nov = 30;
    int dec = 31;
    
    
    
    if (month == 1)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << jan << endl;
    else
           cout << jan << " days " << endl;
    }
    
    if (month == 2)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << leapFeb << " days " << endl;
        else
            cout << feb << " days " << endl;
    }

       
    if (month == 3)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << march << " days " << endl;
        else
            cout << march << " days " << endl;
    }
   
    
 
    if (month == 4)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << april << " days " << endl;
        else
            cout << april << " days " << endl;
    }

    
    if (month == 5)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << may << " days " << endl;
        else
            cout << may << " days " << endl;
    }

    
    
    if (month == 6)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << june << " days " << endl;
        else
            cout << june << " days " << endl;
    }

    
    if (month == 7)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << july << " days " << endl;
        else
            cout << july << " days " << endl;
    }

    
    if (month == 8)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << august << " days " << endl;
        else
            cout << august << " days " << endl;
    }

    
    if (month == 9)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << sept << " days " << endl;
        else
            cout << sept << " days " << endl;
    }


    if (month == 10)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << oct << " days " << endl;
        else
            cout << oct << " days " << endl;
    }

    if (month == 11)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << nov << " days " << endl;
        else
            cout << nov << " days " << endl;
    }

    
    if (month == 12)
    {
        
        if (((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0))))
            cout << dec << " days " << endl;
        else
            cout << dec << " days " << endl;
    }

    
}





