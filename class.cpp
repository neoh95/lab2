#include "class.h"
    void Cls::set_initial_ranking(int a,int b,int c)
    {
        K = a;
        RA = b;
        RB = c;
    }
    int Cls::count_RPA(double score)
    {
        double RPA,EA,SA;
        SA = score;
        EA = 1/(1+pow(10,((double)RB-RA)/400));
        RPA = RA + K*(SA-EA);
        return RPA+0.5;
    }
    int Cls::count_RPB(double score)
    {
        double RPB,EB,SB;
        SB = score;
        EB = 1/(1+pow(10,((double)RA-RB)/400));
        RPB = RB + K*(SB-EB);
        return RPB+0.5;
    }
