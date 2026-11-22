/* Program File Name: Ch6_Ex3
Programmer: Frank Sonsini
Date : November 2026
Requirements : Write a program that displays the distance in meters fallen for each second from 1 to 10.
               Create a function to perform the calculations.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double g = 9.8;

//Function FallingDistance - calculates the distance in meters an object falls fro each second from 1 to 10
double FallingDistance(double seconds)
{
    return 0.5 * g * seconds * seconds;
}

int main()
{
    int seconds;
   
    cout << setprecision(3);

    cout << "      Seconds        Meters Fallen" << endl;
    cout << "___________________________________" << endl;

    for (seconds = 1;seconds <11;++seconds)
    {
        cout << "\t" << seconds << "\t  \t" << FallingDistance(seconds) << endl;
    }

    return(0);
}