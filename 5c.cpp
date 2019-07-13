#include <iostream>
  
using namespace std;

int main()
{
 int a,b,c=1,x;
 int batas,d,e,mod;

   cout<<"Masukkan Nilai x : ";cin>>x;
   cout<<"Masukkan batas : ";cin>>batas;

   for(a=0;a<=x;a++)
   {
    for(b=0;b<a;b++)
      {
          while (c<=x)
          {
              for (d=2;d<=batas;d++)
                    {
                        mod=1;
                        for (e=2;e<d;e++)
                         {
                            if(d%e==0)
                            {
                            mod=0;
                            }
                         }
                        if(mod==1)
                        {
                            cout<<d<<" ";
                        }
                    }
                    c++;
         cout<<endl; 
          }
         cout<<endl; 
      }
         cout<<endl;
    }
}
