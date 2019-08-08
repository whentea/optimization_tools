//How to ilustrate the iteration by wenty
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void garis();
int intro(int &c, double &d);
void iteration(double m, int n, double p);

int main()
{
  double x, asli, xo, d;
  int k, c;
  intro(c, d);
  xo=c;
  k=d;
  asli = sqrt(k);
  cout<<"Angka utama adalah k dengan nilai : "<<k<<endl;
  cout<<"Dengan nilai akar : "<<setw(12)<<left<<setprecision(10)<<asli<<endl;
  cout<<endl<<endl;
  //i=0;
  x=xo;
  garis();
  cout<<endl;
  cout<<left<<setw(12)<<"Iteration"<<setw(15)<<"xt"<<setw(15)<<"x(t+1)"<<endl;
  garis();
  cout<<endl;
  iteration(x, k, asli);
  return 0;
}

void garis()
{
    for(int n=1;n<45;n++)
        cout<<"-";
}

int intro(int &c, double &d)
{
  //int c;
  //double d;
  cout<<"How Iteration work ?"<<endl;
  cout<<endl;
  cout<<"Masukkan nilai xo : ";
  cin>>c;
  cout<<"Masukkan nilai k : ";
  cin>>d;
}

void iteration(double m, int n, double p)
{
   //m=x n=k p=asli
   int i=0;
   double xt;
   do
  {
    xt = (m+(n/m))/2;
    cout<<left<<setw(12)<<i<<setw(15)<<setprecision(10)<<m;
    cout<<setw(15)<<setprecision(10)<<xt<<left;
    cout<<endl;
    m = xt;
    i=i+1;
  }
  while(m != p);
}

