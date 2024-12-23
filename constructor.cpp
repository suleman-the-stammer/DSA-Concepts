#include<iostream>
using namespace std;

class data{
public:
int a, b;
data(){
      a = 5;
      b = 10;
}
void mult(){
    cout<<a*b<<endl;
}
};

int main(){
 data d1;
 cout<<data->a;
 d1.mult();

    return 0;
}