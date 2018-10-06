#include <iostream>
#include "Stack.h"
#include <fstream>
using namespace std;

int main()
{
    Stack s;
    char ch;
    int num, value;

    string nameoffile;
    fstream file;
    cout << "Enter the name of the file: "; // output statement which prompts the user to input file name
    cin >> nameoffile;
    file.open(nameoffile.c_str());  // open file with the same given by user

    while (!file.eof()) // keeps looping until end of file is reached
    {
        file.get(ch);    // first get statement to read first element
        while(ch!='\n'&&!file.eof()) // carries out operations until end of line is reach and file is not empty
        {

            if ( ch!=' ')    // if statement used to ignore spaces in the files
            {
                if ( ch == '+'||ch=='*'||ch=='-'||ch=='/')  // every time +,-,/,and * is read this if statement carries out these operations
                   
                    int y = s.pop();
                    int x = s.pop();
 
                    int answer = apply(ch,x,y);

                    s.push(answer);

            }
            else
            {

                if(s.empty())
                {
                    cout << "\n Expression: ";

                }
                num = ch - '0';
                cout << num << " ";
                s.push(num);

            }

        }
        file.get(ch);

        if( file.eof()||ch=='\n')
        {

            value = s.pop();
            cout<< "\nvalue: " << value << endl;

        }
        else
            file.get(ch);
    }

file.close();
return 0;
}
