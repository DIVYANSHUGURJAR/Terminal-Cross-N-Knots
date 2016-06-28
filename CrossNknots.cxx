#include "CrossNknots.hpp"
int main()
{
    initScreen();

    while(true)
    {
         res=counter%2;
         drawCross();
         cout<<"Player "<<res+1<<" : ";
         cin>>n;
         cout<<"\n";

         if(res)
             arr.at(n-1)=88;
         else
             arr.at(n-1)=48;
         
         resCheck=check(); 
         if(resCheck)
             break;
         
         ++counter;
         
    }
return 0;
} 
