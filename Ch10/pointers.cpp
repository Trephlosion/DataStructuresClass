#include <iostream>
#include <iomanip>
#include <string>



using namespace std;



int main()
{

int x;
x=4;
int y;
y=10;
cout << y <<endl;
int *g;
g=&x;
cout << *g <<endl;
*g = 8;
cout << *g <<endl;
cout << x << endl;
int i=15, j, *p, *q;

p = &i; //set p to the address of i.

*p = 20; // de-reference p and assign value 20 to i.

j = 2 * *p; //set j  to 2 * the value address of p.

q = &i; // set q to the address of i.

return 0;
}//main