// Code for Project 1
//  Summer Fun
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sport;        // the sport being played
    int won, lost tied; // game outcomes, here I added yet another error in which the comma seperating these varaibles are not there anymore, so the function will fail to seperate them, hence the code will fail to run

    cout << "What team sport have you been playing this Summer? ";
    getline( cin, sport );
    cout << "How many games has your team won? ";
    cin >> won;
    cout << "How many games has your team lost? ";
    cin >> lost;
    cout << "How many games has your team tied? ";
    cin >> tied;

    double winPercentage = 100.0 * won / (won + lost + tied);
    cout.setf(ios::fixed);  // see pp. 30-31 in Savitch book
    cout.precision(1);
    cout << endl;
    cout << winPercentage << "% of the " << sport << " games you played were won!" << endl; // here is an example of a fatal syntax error in which I added a space between the two signs which cannot work, so the code will fail to run


    if (won < 0 || lost < 0 || tied < 0)
    {
        cout << "Looks like some of these data values don't make sense." << endl;
    }

    return(0);
}

*/
