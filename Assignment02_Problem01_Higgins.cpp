#include <iostream>
using namespace std;

int main()
{
    int choice;
    do
    {
        cout << "Secret Decoder Menu" << endl;
        cout << "1: Decode a secret sequence" << endl;
        cout << "2: Information about the decoder" << endl;
        cout << "0: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout <<"\n"<<endl;

        switch(choice)
        {
            case 1:
            {
                int n;
                string mess = "";
                bool valid = false;

                while (!valid)
                {
                    cout << "How many numbers are in the secret sequence?" << endl;
                    cin >> n;
                    if (n>0)
                    {
                        valid = true;
                    }
                    else
                    {
                        cout<<"Error: A valid length for the secret sequence is an integer greater than or equal to zero. Try again." << endl;
                    }
                }


                for(int i=0; i<n; i++)
                {
                    int input;
                    cout<<"Number "<<i+1<<": ";
                    cin >> input;
                    
                    switch (input)
                    {
                        case 1:
                            mess += "A";
                        break;
                        case 2:
                            mess += "B";
                            break;
                        case 3:
                            mess += "C";
                            break;
                        case 4:
                            mess += "D";
                            break;
                        case 5:
                            mess += "E";
                            break;
                        case 6:
                            mess += "F";
                            break;
                        case 7:
                            mess += "G";
                            break;
                        case 8:
                            mess += "H";
                            break;
                        case 9:
                            mess += "I";
                            break;
                        case 10:
                            mess += "J";
                            break;
                        case 11:
                            mess += "K";
                            break;
                        case 12:
                            mess += "L";
                            break;
                        case 13:
                            mess += "M";
                            break;
                        case 14:
                            mess += "N";
                            break;
                        case 15:
                            mess += "O";
                            break;
                        case 16:
                            mess += "P";
                            break;
                        case 17:
                            mess += "Q";
                            break;
                        case 18:
                            mess += "R";
                            break;
                        case 19:
                            mess += "S";
                            break;
                        case 20:
                            mess += "T";
                            break;
                        case 21:
                            mess += "U";
                            break;
                        case 22:
                            mess += "V";
                            break;
                        case 23:
                            mess += "W";
                            break;
                        case 24:
                            mess += "X";
                            break;
                        case 25:
                            mess += "Y";
                            break;
                        case 26:
                            mess += "Z";
                            break;
                        default:
                            mess += "?";
                            break;
                            
                    }
                }
                cout <<endl;
                cout<<mess<< endl;
                cout <<endl;
                break;
            }
            case 2:
            {
                cout<<"After inputted the desired length for your secret sequence, you will \nbe prompted to enter a number for each letter in your sequence. If \nthe number inputted is between 1 and 26, it will be decoded as the \nrespected letter A-Z. If not, it will be decoded as a ?. After \ninputting all numbers, the decoded message will appear.\n" <<endl;
                cout <<endl;
                break;
            }
            case 3:
            {
                cout<<"Exiting..."<<endl;
                cout <<endl;
                break;
            }
            default:
            {
                cout<<"Enter a valid number 0-2. Try again."<<endl;
                cout <<endl;
                break;
            }
        }
        

        

    }
    while(choice!=0);
    return 0;
}