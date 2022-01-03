#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile("myfile.txt");
    myfile<<"have a nice day";
    myfile.close();
    
    string s;
    ifstream readfile("myfile.txt");
    while(getline(readfile,s));
    cout<<s;
    readfile.close();
    return 0;
}
