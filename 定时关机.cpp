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
    cout<<"��ʱ�ػ�ʱ�䣨�룩��";
    cin>>x;
    cout<<"\n�Ƿ�ȷ�Ϲػ�(y/n):";
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
        cout<<"\n��������!";
        break;
    }
    return 0;
    
}