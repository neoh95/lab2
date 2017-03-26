#include<math.h>
using namespace std;
class Cls
{
public:
	void set_initial_ranking(int a,int b,int c);
	int count_RPA(double score);
	int count_RPB(double score);
private:
	int K,RA,RB;
};
