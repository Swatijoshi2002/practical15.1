#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile("myfile.txt");
    myfile<<"Swati is a best girl";
    myfile.close();
    
    char data;
    ifstream readfile;
    readfile.open("myfile.txt");
    while(1)
    {
        readfile>>data;
        if(readfile.eof())
        {
            break;
        }
        else cout<<data;
    }
    readfile.close();
    return 0;
}
