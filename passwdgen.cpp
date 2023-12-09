#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    string chrs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string nums;
    string special;
    string thepass;
    string UserInputDigits;
    string UserInputSpecial;
    int passlen;

    cout <<"Password Length? (12 or more is recommended) ";
    cin >> passlen ;

    cout << "Do you want digits? [y/n]";
    cin >> UserInputDigits;
    while (true)
    {
        if (UserInputDigits == "yes" || UserInputDigits == "y")
        {
            nums = "1234567890" ;
            break;
        }

        else if (UserInputDigits == "no" || UserInputDigits == "n")
        {
            break;
        }
        

        else{
            cout << "Enter a valid answer yes or no. you can use (y) or (n)";
        }
        
    }


    cout << "Do you want special characters ? [y/n]";
    cin >> UserInputSpecial;
    while (true)
    {
        if (UserInputSpecial == "yes" || UserInputSpecial == "y")
        {
            special = "!@#$%^&*";
            break;
        }

        else if (UserInputSpecial == "no" || UserInputSpecial == "n")
        {
            break;
        }
        

        else{
            cout << "Enter a valid answer yes or no. you can use (y) or (n)";
        }
        
    }
    
    string passch = chrs + nums + special;
    srand(static_cast<unsigned int>(time(nullptr)));
    int passset = passch.length();
    for(int i = 1 ; i <= passlen ; i++ ){
        int randomNum = rand() % passset + 1;
        thepass += passch[randomNum];
    }
    
    cout << thepass << "\n";
    cout << "You can test the password from here https://www.passwordmonster.com";
    return 0;
}
