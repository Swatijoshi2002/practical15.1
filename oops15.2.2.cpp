#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("myfile.txt",ios::out);;
    if(!myfile)
    {
        cout<<"file not created"<<endl;
    }
    else {
        cout<<"file is created"<<endl;
        myfile<<"file is diplaying"<<endl;
    }
    myfile.close();
    return 0;
}
