#include<iostream>
using namespace std;

int main(){
    int i=1;
    int x[i];
    
    while (x[i-1]!=0)
    { 
        cout << "Enter an integer: ";
        cin >> x[i];
        i++;
    }
    int y =0 ,z =0,q =0;
    while (y < i-1)
    {
        if (x[y] %2==0)
        {
           z++ ;
        }else{
            q++;
        }
       
        y++ ;
    }
   
    cout << "#Even numbers = "<<z-1;
    cout << "\n#Odd numbers = "<<q;
    return 0;
}