#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Time
{
    int hour, minute, second;

public:
    Time(int h=0,int m=0,int s=0):
        hour(h), minute(m), second(s) { }
    void set(int h,int m=0,int s=0)
    {
        hour = h;
        minute = m;
        second = s;
    }
    /*cac ham xac lap thanh phan*/
    void setHour(int h)
    {
        hour = h;
    }
    void setMinute(int m)
    {
        minute = m;
    }
    void setSecond(int s)
    {
        second = s;
    }
    /* cac ham lay gia tri thanh phan */
    int getHour(){return hour;}
    int getMinute(){return minute;}
    int getSecond(){return second;}
    /*in ham hienr thi 24 tieng */
    void display24()
    {
        printf("%d:%02d:%02d", hour, minute, second);
    }
    /* in ham hien thi 12 tieng */
    void display12()
    {
        if (hour >12)
        {
            printf("%d:%02d:%02d PM\n",hour - 12,minute, second);
        }
        else
        {
            printf("%d:%02d:%02d AM\n",hour,minute, second);
        }
    }
private:
    void inHour()
    {
        hour++;
        if(hour == 24) hour = 0;
    }
    void inMinute()
    {
        minute++;
    if(minute == 60)
        {
            minute = 0;
            inHour();
        }
    }
public:
    void tick()
    {
        second++;
        if(second==60)
        {
            second = 0;
            inMinute();
        }
    }
};
int main()
{
    Time time(23, 59, 58);
    time.display24();
    cout<<"  ";
    time.display12();
    for(int i=0;i<=86400;++i)
    {
        time.tick();
        time.display24();cout<<"   ";
        time.display12();
    }
}
