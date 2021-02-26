#include <iostream>
#include <string>

using namespace std;

class HeartBeat{

public:

	HeartBeat(int m, int d, int y, string fname, string lname);
        void setAge(int m, int d, int y);
        int getAge(void);
        void setName(string fname, string lname);
        string getFname(void);
        string getLname(void);
        int getHeartRateMax();
        void getTargetHeartRate(int* a, int* b);
        ~HeartBeat();

private:

        int Age, bm, bd, by, Max, Target1, Target2;
        string Fname;
        string Lname;
};

