#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int s,l,b;
        float r,bs,ht;
        cout<<"Enter Side of a square:";
        cin>>s;
        cout<<"Enter Length of rectangle:";
        cin>>l;
        cout<<"Enter Breadth of rectangle:";
        cin>>b;
        cout<<"Enter Radius of circle:";
        cin>>r;
        cout<<"Enter Base of triangle:";
        cin>>bs;
        cout<<"Enter Height of triangle:";
        cin>>ht;

        cout<<"Area of square is"<<area(s);
        cout<<"Area of rectangle is "<<area(l,b);
        cout<<"Area of circle is "<<area(r);
        cout<<"Area of triangle is "<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}