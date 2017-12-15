1. operating with variables

#include <iostream>
using namespace std; 
int main () 
{ 
// declaring variables:
int a, b; 
int result; 
// process:
  a = 5; 
  b = 2; 
  a = a + 1; 
  result = a . b; 
// print out the result:
  cout << result; 
// terminate the program:
return 0; 
} 


2. initialization of variables

#include <iostream>
using namespace std; 
int main () 
{ 
int a=5;               
// initial value = 5
int b(2);              
// initial value = 2
int result;            
// initial value  undetermined
  a = a + 3; 
  result = a . b; 
  cout << result; 
return 0; 
} 

3. my first string

#include <iostream>
#include <string>
using namespace std; 
int main () 
{ 
  string mystring = "This is a string"; 
  cout << mystring; 
return 0; 
} 

4. // defined constants: calculate circumference

#include <iostream>
using namespace std; 
#define PI 3.14159
#define NEWLINE '\n'
int main () 
{ 
double r=5.0;               
// radius
double circle; 
  circle = 2 * PI * r; 
  cout << circle; 
  cout << NEWLINE; 
return 0; 
} 

5. // cin with strings

#include <iostream>
#include <string>
using namespace std; 
int main () 
{ 
  string mystr; 
  cout << "What's your name? "; 
  getline (cin, mystr); 
  cout << "Hello "<< mystr << ".\n"; 
  cout << "What is your favorite team? "; 
  getline (cin, mystr); 
  cout << "I like "<< mystr << " too!\n"; 
return 0; 
} 

6. // classes example


#include <iostream>
using namespace std; 
class CRectangle 
{ 
int x, y; 
public: 
void set_values (int,int); 
int area () 
{
return (x*y);
} 
}; 
void CRectangle::set_values (int a, int b) 
{ 
  x = a; 
  y = b; 
} 
int main () 
{ 
  CRectangle rect; 
  rect.set_values (3,4); 
  cout << "area: "<< rect.area(); 
return 0; 
} 

7. class constructor

#include <iostream>
using namespace std; 
class CRectangle { 
int width, height; 
public: 
    CRectangle (int,int); 
int area () 
 {
return (width*height);
} 
}; 
CRectangle::CRectangle (int a, int b) 
 { 
  width = a; 
  height = b; 
} 
int main () 
 { 
  CRectangle rect (3,4); 
  CRectangle rectb (5,6); 
  cout << "rect area: " << rect.area() << endl; 
  cout << "rectb area: "<< rectb.area() << endl; 
return 0; 
} 

8.// example on constructors and destructors


#include <iostream>
using namespace std; 
class CRectangle { 
int *width, *height; 
public: 
    CRectangle (int,int); 
    ~CRectangle (); 
int area () 
{
return(*width * *height);
} 
}; 
CRectangle::CRectangle (int a, int b) 
{ 
  width = new int; 
  height = new int; 
  *width = a; 
  *height = b; 
} 
CRectangle::~CRectangle () 
{ 
delete width; 
delete height; 
} 
int main () { 
  CRectangle rect (3,4), rectb (5,6); 
  cout << "rect area: "<< rect.area() << endl; 
  cout << "rectb area: "<< rectb.area() << endl; 
return 0; 
} 

9./ overloading class constructors

#include <iostream>
using namespace std; 
class CRectangle { 
int width, height; 
public: 
    CRectangle (); 
    CRectangle (int,int); 
int area (void)
 {
return (width*height);
} 
}; 
CRectangle::CRectangle () 
{ 
  width = 5; 
  height = 5; 
} 
CRectangle::CRectangle (int a, int b)
 { 
  width = a; 
  height = b; 
} 
int main () 
{ 
  CRectangle rect (3,4); 
  CRectangle rectb; 
  cout << "rect area: "<< rect.area() << endl; 
  cout << "rectb area: "<< rectb.area() << endl; 
return 0; 
} 
