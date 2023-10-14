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
        cout<<"Enter side of a square : ";
        cin>>s;
        cout<<"Enter length rectangle : ";
        cin>>l;
        cout<<"Enter the breath of rectangle : ";
        cin>>b;
        cout<<"Enter radius of circle : ";
        cin>>r;
        cout<<"Enter base of triangle : ";
        cin>>bs;
        cout<<"Enter the heigth of the triangle : ";
        cin>>ht;

        cout<<"Area of square is : "<<area(s);
        cout<<"\nArea of rectangle is : "<<area(l,b);
        cout<<"\nArea of circle is : "<<area(r);
        cout<<"\nArea of triangle is : "<<area(bs,ht);
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