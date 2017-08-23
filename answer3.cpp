#include <iostream>
using namespace std;
int main()
{

    int a,b,s,d,m,i,k,j=1;
    double q;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;
    for(j=1;j<6;j++)
    {
         cout << "Press 1 for sum, 2 for difference, 3 for product and 4 for quotient, 5 for quotient" << endl;
    cin >> i;





    if (i==1){
        s=a+b;
        cout << "Sum=" << s << endl;
    }
    else if (i==2){
        d=a-b;
        cout << "Difference=" << d << endl;
    }
    else if(i==3){
        m=a*b;
        cout << "Product=" << m << endl;
    }
    else if(i==4){
        q=a/b;
        cout << "Quotient=" << q << endl;
    }


else if(i==5)
{
    k=a%b;
    cout << "Quotient=" << k;

}
   else
        cout << "Error" << endl;

    }
    return 0;
}

