#include<iostream>

using namespace std;

int addition(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}
int modulo(int a, int b){
    return a%b;
}
void loop(int a, int b, int value){
    do{
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice: ";
        cin >> value;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        switch(value){
            case 1: 
                cout << endl << "Addition of " << a << "and " << b << " is: " << addition( a,  b) << endl;
            break;

             case 2: 
                cout << endl << "subtraction of " << a << "and " << b << " is: " << subtraction( a,  b) << endl;
            break;

             case 3: 
                cout << endl << "multiplication of " << a << "and " << b << " is: " << multiplication( a,  b) << endl;
            break;

             case 4: 
                cout << endl << "division of " << a << "and " << b << " is: " <<  division( a,  b) << endl;
            break;

             case 5: 
                cout << endl << "modulo of " << a << "and " << b << " is: " << modulo( a,  b) << endl;
            break;

            default:
                cout << "Enter valid number" << endl;
        }

         
          
    }while(value !=0);
}




int main(){

    int a,b;
    int value;
        loop(a,b,value);

}