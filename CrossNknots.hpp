#ifndef CROSSNKNOTS_HPP
#define CROSSNKNOTS_HPP
#endif

#include<iostream>
#include<array>

using namespace std;

array<char,9>arr;

int counter=0,n,res,resCheck;

void initScreen()
{
    for(int i=0,j=49;i<9;i++,j++)
       arr.at(i)=j;

    cout<<"\n\nCross 'N Knots\n"
    <<"-------------------------------\n\n"
    <<"Player 1 will start with 0 followed by player 2 who\n"
    <<"will play with X. Just enter the number listed inside\n"
    <<"where you want to put your letter.\n"
    <<"Press [Enter] to start... ";
    cin.get();
    cout<<"\n\n";
}

void drawCross()
{
    cout<<arr[0]<<"|"<<arr[1]<<"|"<<arr[2]<<endl
    <<"------\n"
    <<arr[3]<<"|"<<arr[4]<<"|"<<arr[5]<<endl
    <<"------\n"
    <<arr[6]<<"|"<<arr[7]<<"|"<<arr[8]<<"\n\n";
}


int check()
{
    if(arr[0]==arr[4] && arr[0]==arr[8])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
    
    else if (arr[2]==arr[4] && arr[2]==arr[6])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
      
    else if(arr[0]==arr[3] && arr[0]==arr[6])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
 
    else if(arr[1]==arr[4] && arr[1]==arr[7])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }

     else if(arr[2]==arr[5] && arr[2]==arr[8])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
   
    else if(arr[9]==arr[1] && arr[9]==arr[2])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
   
    else if(arr[3]==arr[4] && arr[3]==arr[5])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
   
    else if(arr[6]==arr[7] && arr[6]==arr[8])
    {
        cout<<"Player "<<res+1<<" win\n\n";
        return 1;
    }
   
    else 
        return 0;
    
}


















