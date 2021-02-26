#include <iostream>
#include <string>
#include "beat_functions.h"

using namespace std;

int main(){

        int m,d,y, Age, Target_a, Target_b;
        string Fname;
        string Lname; 

        cout << "Enter your first and last name: ";
        cin >> Fname >> Lname;

        cout << "Enter your birthday (mm dd yyyy): ";
        cin >> m >> d >> y;
	cout << endl;

        HeartBeat rate(m,d,y,Fname,Lname);

        rate.setName(Fname, Lname);
        rate.setAge(m,d,y);

	cout << "         CLIENT INFORMATION          " << endl;
	cout << "----------------------------------------" << endl;

	rate.getAge();

        cout << "Name: " << rate.getFname() << " " << rate.getLname() << endl;

        cout << "Maximum Heart Rate: " << rate.getHeartRateMax() << endl;

	rate.getTargetHeartRate(&Target_a, &Target_b);
        cout << "Target Heart Rate: " << Target_a << "-" << Target_b << endl;
	cout << endl;

	cout << "-----------------------------------------" << endl;
	cout << "The above information is an estimated calculation based "
	     << "on equations from the American Heart Association (AHA). Always "
	     << "consult a physician or other qualified health professional."
	     << endl << endl;

return 0;
}
