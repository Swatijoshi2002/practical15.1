#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("myfile.txt",ios::in);;
    
    char data;
    while(1)
    {
        myfile>>data;
        if(myfile.eof())
        {
            break;
        }
        else cout<<data;
    }
    myfile.close();
    return 0;
}
