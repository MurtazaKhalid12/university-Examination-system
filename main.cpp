#include<iostream>
#include "functions.h"
#include<bits/stdc++.h>
#include <fstream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <sstream>


void loopProgram ();
void optionShow();            // option show is first window of program
void optionSelect();    // this function is only for options that are on second window   this is second window of program
using namespace std;

double c; // Global c variable contain correct options number which student have entered during program // it's from student portal
string w;    // user entered roll number i stored in string data type to fetch anytime during Merit generation and all other things
int main ()
{
    cout<<"\n\n\t\t\t\t\tWelcome to ITU entry test system in C++\n";                                // it's just an introductory for entering any person to program
    cout<<"\t\t\tBy Murtaza Khalid, Fatima Waseem, Ariba Mumtaz, Huzaifa Khan & Atif Ashraf\n";
    optionShow();
    return 0;
}


//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////


void optionShow()// main first window
{
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Student mode\n\t\t\t\t\t2)Teacher mode";
    cout<<"\n\t\t\t\t\t3)Admin mode\n\t\t\t\t\t4)Terminate program\n\t\t\t\t\tYour input here: ";
    optionSelect();
}


////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////


void optionSelect()        // second window
{
    int user; //this for us to specify user
    cin>>user;
    cin.clear();             // For clearing screen
    cin.ignore();
    switch (user) {                                 // user input options
        case 1:
            cout<<"\n\n\t\t\t\t\tYou are a student.\n\n";//
            studentFunction(1);                        // calling student function after student entered 1
            loopProgram();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tYou are a teacher\n\n";
            teacherFunction(1);
            loopProgram();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tYou are an admin\n\n";
            adminFunction(1);
            loopProgram();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tThank you for your time.\n\n";
            seperationFunction();
            break;
        default:
            cout<<"\t\t\t\t\tInvalid choice, try again.\n\n";
            optionShow();
    }

}
void loopProgram() // this function is only for going back to main program window
{
    main();
}