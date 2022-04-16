#include <iostream>
  
using namespace std;
  
class ClockType
{
public:
    
    
    ClockType()
    {
        hr = 0;
        min =0;
    }
      
    void setTime(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }
    void printTime() const;

private:
    int hr;
    int min;
    int sec;
};

void ClockType::printTime() const
{
   if ((hr > 24)||(hr < 0)) cout<<"00:";
    else
    {
        if (hr < 10) cout << "0"; 
        cout << hr << ":";
    }
    if ((min > 59)||(min < 0)) cout<<"00:";
    else
    {
        if (min < 10) cout << "0"; 
        cout << min << ":"; 
    }
    if ((sec > 59)||( sec < 0 )) cout<<"00";
    else
    {
        if (sec < 10) cout << "0"; 
        cout << sec <<endl;
    }
}
  
int main()
{
    ClockType myClock;
    
    myClock.printTime();
       
    system("Pause");
    return 0;
}