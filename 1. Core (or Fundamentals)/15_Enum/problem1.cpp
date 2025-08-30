#include<iostream>
using namespace std;

enum week_day {
        sun, mon, tue, wed, thu, fri, sat
};
    
int main()
{
   enum week_day today = sun;

   if(today == sun) 
       cout <<"Today is holiday" <<endl;
    else
       cout <<"Work Time" <<endl;

 return 0;
}