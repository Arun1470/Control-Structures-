#include<iostream>
using namespace std;
int main(){
  int dollor1,cent1,dollor2,cent2;
  cin>>dollor1>>cent1>>dollor2>>cent2;
  int cents=cent1+cent2;
  int carrydollor=cents/100;
  cents=cents%100;
  int totaldollors=dollor1+dollor2+carrydollor;
  cout<<totaldollors<<endl;
  cout<<cents;
  return 0;
}