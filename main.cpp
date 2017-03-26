#include<iostream>
#include<math.h>
#include<fstream>
#include"class.h"
using namespace std;
int main()
{
    int K,RA,RB;
    double Actual_score;
    ifstream inFile("file.in",ios::in);
    inFile >> K >> RA >> RB;
    Cls count_ranking;
    count_ranking.set_initial_ranking(K,RA,RB);
    ofstream outFile("file.out",ios::out);
    outFile << RA << ' ' << RB << endl;
    while(inFile >> Actual_score)
    {
        if(Actual_score == 0)
        {
            RA = count_ranking.count_RPA(0);
            RB = count_ranking.count_RPB(1);
        }
        else if(Actual_score == 1)
        {
            RA = count_ranking.count_RPA(1);
            RB = count_ranking.count_RPB(0);
        }
        else if(Actual_score == 0.5)
        {
            RA = count_ranking.count_RPA(0.5);
            RB = count_ranking.count_RPB(0.5);
        }
        else return 0;
	outFile << RA << ' ' << RB << endl;
        count_ranking.set_initial_ranking(K,RA,RB);
    }	
    outFile.close();
}
