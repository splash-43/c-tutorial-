#include <iostream>
using namespace std;
int main() {
    
    int a;
    int b;
    int c;
    
    cout<<"enter three   numbers  "<<endl;
    cin>>a>> b>> c;
    cout<<"the three no.s are "<< a << b<< c <<" "<< endl ;
    //now we wanna find the which no is the greatest 
   if (a>b || a>c){
 cout<< " a is the greatest "<< a << endl;
  }
  else if (b>a || b>c){
  cout << "b is the greatest"<< b << endl;

  }
  else{
    cout << " c is the greatest "<< c << endl;
   }
  
   
    return 0;
}
