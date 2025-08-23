#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

int main()
 {
    ofstream logfile("log.txt", ios::app);

    time_t now = time(0);
    char* dt = ctime(&now);

    logfile << dt << "- program executed successfully" << endl;
    logfile.close();

    cout << "Log updated successfully." << endl;
    return 0;
}
