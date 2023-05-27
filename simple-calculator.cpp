// ---- program is a simple calculator for addition, subtraction, multiplication, division of two given numbers

#include <iostream>

using namespace std;

float x,y;
int choice;

int main()
{
    cout <<"Hey, this is your simple claculator speaking"<< endl;
    cout <<"Insert first number. X: ";
    cin >> x;
    cout <<"Insert your second number. Y: "<<endl;
    cin >> y;
    cout << endl << "Your choices are: x->" << x<< ", " << "y->"<<y<<endl;

    cout << endl;
    cout <<"Main Menu" << endl;
    cout <<"-------------------" << endl;
    cout <<"1. addition" << endl;
    cout <<"2. subtraction" << endl;
    cout <<"3. multiplication" << endl;
    cout <<"4. division" << endl;

    cout << "Your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1: // instructions for addition
        {
            cout<<"sum = "<<x+y;
        }
            break;
        case 2: // instructions for subtraction
        {
            cout<<"difference = "<<x-y;
        }
            break;
        case 3: // instructions for multiplication
        {
            cout<<"product = "<<x*y;
        }
            break;
        case 4: // instructions for division
        {
            if (y==0) cout << "You can't divide by zero";
                else cout<<"quotient = "<<x/y;
        }
            break;
        default:
            cout << "Wrong choice. No such option";
    }







    return 0;
}
