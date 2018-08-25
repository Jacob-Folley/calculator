#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        float num1;
        float num2;
        float result;
        int choice;

        cout << "Enter your choice (1/2/3/4/5/6/7/8): " << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiply " << endl;
        cout << "4. Divide " << endl;
        cout << "5. Square Root " << endl;
        cout << "6. Cube Root " << endl;  
        cout << "7. Squared " << endl;
 	cout << "8. Cubed " << endl;
        cin >> choice;

        switch (choice){
        case 1:
                //do addition
                cout << "Enter first number: " << endl;
                cin >> num1;

                cout << "Enter second number: " << endl;
                cin >> num2;

                result = num1 + num2;
                cout << "The answer is: " << result << endl;
                break;  
        case 2:
            //do subtraction
                cout << "Enter first number: " << endl;
                cin >> num1;

                cout << "Enter second number: " << endl;
                cin >> num2;

                result = num1 - num2;
                cout << "The answer is: " << result << endl;
                break;
        case 3:
                //do multiplication
                cout << "Enter first number: " << endl;
                cin >> num1;

                cout << "Enter second number: " << endl;
                cin >> num2;
                result = num1 * num2;
                cout << "The answer is: " << result << endl;
                break;
        case 4:
                //do division
                cout << "Enter first number: " << endl;
                cin >> num1;

                cout << "Enter second number: " << endl;
                cin >> num2;

                if (num2 == 0) 
                {
                        result = 0;
                }
                else 
                {
                        result = num1 / num2;
                        cout << "The answer is: " << result << endl;
                }
                break;
        case 5:
                //do squareroot 
                cout << "Enter number: " << endl;
                cin >> num1;

                result = sqrt(num1);
                cout << "The answer is: " << result << endl;
                break;
        case 6:
                //do cuberoot
                cout << "Enter number: " << endl; 
                cin >> num1; 

                result = cbrt(num1);
                cout << "The answer is: " << result << endl;
                break;
        case 7:
                //do power
                cout << "Enter number: " << endl;
                cin >> num1;

                result = pow(num1, 2);
                cout << "The answer is: " << result << endl;
                break;

        case 8: 
                //do cubed
                cout << "Enter number: " << endl;
                cin >> num1;

                result = pow(num1, 3);
                cout << "The answer is: " << result << endl;
                break;
        default: 
                //Option not valid
                cout << "Not Valid" << endl;
        }
        return 0;
}



