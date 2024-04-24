#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Unary
{
    private:
    ll x;
    ll y;
    ll z;
    public:
    Unary(ll a,ll b,ll c)
    {
        x=a;
        y=b;
        z=c;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    void operator*()
    {
        x=x*x;
        y=y*y;
        z=z*z;
    }
    friend void operator+(Unary& obj);
    friend void operator&(Unary& obj);
    friend void operator!(Unary& obj);
    friend void operator~(Unary& obj);
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};
void operator+(Unary& obj)
{
    obj.x=obj.x%256;
    obj.y=obj.y%256;
    obj.z=obj.z%256;
}
void operator&(Unary& obj)
{
    obj.x=obj.x/3;
    obj.y=obj.y/4;
    obj.z=obj.z/5;
}
void operator!(Unary& obj)
{
    obj.x=(ll)pow(obj.x,3);
    obj.y=(ll)pow(obj.y,3);
    obj.z=(ll)pow(obj.z,3);
}
void operator~(Unary& obj)
{
    obj.x=~obj.x;
    obj.y=~obj.y;
    obj.z=~obj.z;
}
int main()
{
    srand(time(0));
    ll a=rand();
    ll b=rand();
    ll c=rand();
    Unary obj(a,b,c);
    obj.display();
    -obj;
    obj.display();
    +obj;
    obj.display();
    -obj;
    obj.display();
    *obj;
    obj.display();
    &obj;
    obj.display();
    !obj;
    obj.display();
    ~obj;
    obj.display();
}

/*
Operators that doesn't work as unary operator overloading:
--> Divide(/)
--> Less than(<)
--> Greater than(>) 
--> Cin(>>) 
--> Cout(<<)
--> Mod(%) 
--> XOR(^) 
--> OR(|)
--> Equals(=)
*/