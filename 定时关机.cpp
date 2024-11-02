#include<iostream>
#include<cstdlib>
#include<sstream>
using namespace std;

int main()
{
	int x;
    char y;
    stringstream ss;
    start:
    cout<<"定时关机时间（秒）：";
    cin>>x;
    cout<<"\n是否确认关机(y/n):";
    cin>>y;

    switch(y)
    {
    case 'y':
        ss<<"shutdown -s -t "<<x;
        system(ss.str().c_str());
        break;
    case 'n':
        system("cls");
        goto start;
    default:
        cout<<"\n错误输入!";
        break;
    }
    return 0;
    
}