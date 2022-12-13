#include<iostream>

using namespace std;

int adiff(int A, int B){
  int c;
    if(A > B){
        c = (A-B)%360;
    }else{
        c = (B-A)%360;
    }
    if(c%360 > 180){
        c = 360-c;
    }
    return c;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
