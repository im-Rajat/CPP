#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing the data;
    ofstream ofs("my.txt", ios::trunc);
    ofs<<"RJ"<<endl;
    ofs<<22<<endl;
    ofs<<"Cricket"<<endl;

    ofs.close();

    // Reading the data;
    ifstream ifs("my.txt");
    //ifstream ifs;       // same as above
	//ifs.open("my.txt");
	if (ifs.is_open())      // same as if(ifs)
    {
        cout<<"File is Opened"<<endl;
	}
	string name;
	int roll;
	string sports;
	ifs>>name>>roll>>sports;
	ifs.close();

	cout<<"Name: "<<name<<endl;
	cout<<"Roll No.: "<<roll<<endl;
	cout<<"Sports: "<<sports<<endl;

    return 0;
}
