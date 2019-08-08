#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double xo,x, xt, asli;
  int i, k;
  cout<<"How Iteration work ?"<<endl;
  cout<<endl;
  cout<<"Masukkan nilai xo : ";
  cin>>xo;
  cout<<"Masukkan nilai k : ";
  cin>>k;
  cout<<endl;
  asli = sqrt(k);
  cout<<"Angka utama adalah k dengan nilai : "<<k<<endl;
  cout<<"Dengan nilai akar : "<<setw(12)<<left<<setprecision(10)<<asli<<endl;
  cout<<endl;
  i=0;
  x=xo;
  cout<<"----------------------------------------"<<endl;
  cout<<left<<setw(12)<<"Iteration"<<setw(15)<<"xt"<<setw(15)<<"x(t+1)"<<endl;
  cout<<"----------------------------------------"<<endl;
  do
  {
    xt = (x+(k/x))/2;
    cout<<left<<setw(12)<<i<<setw(15)<<setprecision(10)<<x;
    cout<<setw(15)<<setprecision(10)<<xt<<left;
    cout<<endl;
    x = xt;
    i=i+1;
  }
  while(x != asli);

  return 0;
}
