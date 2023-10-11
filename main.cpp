#include <iostream>
#include <stdlib.h>
#include <string> 


using namespace std;

int main()
{
    char CurrentInput;
    string OpenCommand = "ncat -nvlp ";
    string ConnectCommand = "ncat -nv ";
    cout << "--------Chat Messagener---------" << endl;
    cout << "Enter c too connect to open connection or o to open a connection: ";
    cin >> CurrentInput;

    if(CurrentInput == 'c')
    {
        cout << "Enter Ip Adress and port format as this example 192.168.0.1 1100  :  ";
        cin >> CurrentInput; 
        const char *ConnectCommandPointer = ConnectCommand.c_str();
        system(ConnectCommandPointer);
    }
    else if(CurrentInput == 'o')
    {
        cout << "Enter port you want to open on: ";
        cin >> CurrentInput; 
        OpenCommand += CurrentInput;
        const char *OpenCommandPointer = OpenCommand.c_str();
        system(OpenCommandPointer);
    }

    

}