

#include <iostream>
using namespace std;

    void sumRange(int a, int b, int result)
    {
        result = 0;  
        
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        for (int i = a; i <= b; ++i) {
            result += i;
        }
    }

    int main() {
        int num1, num2, result;

       cout << "Enter first num :  ";
        cin >> num1;
        cout << "Enter second num : ";
        cin >> num2;

      
        sumRange(num1, num2, result);

    
        cout << "Sum of numbers " << num1 << " і " << num2 << " = " << result << endl;



        int base;     
        int num2;    
        int result = 1; 

     
        cout << "Enter the base : ";
        cin >> base;
        cout << "Enter step of num: ";
        cin >> num2;

        for (int i = 0; i < num2; ++i) {
            result *= base;
        }

       
        cout << base <<   num2 << " = " << result << endl;
        




}

