#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class binary
{
    private:
    ll x;
    ll y;
    ll z;
    public:
    binary(ll a,ll b,ll c) //Parameterized constructor
    {
        x=a;
        y=b;
        z=c;
    }
    binary() //Default constructor
    {

    }
    ~binary() //Destructor
    {

    }
    binary operator+(binary &obj)
    {
        binary add;
        add.x=x+obj.x;
        add.y=y+obj.y;
        add.z=z+obj.z;
        return add;
    }
    binary operator-(binary &obj)
    {
        binary sub; 
        sub.x=x-obj.x;
        sub.y=y-obj.y;
        sub.z=z-obj.z;
        return sub;
    }
    binary operator*(binary &obj)
    {
        binary prod;
        prod.x=x*obj.x;
        prod.y=y*obj.y;
        prod.z=z*obj.z;
        return prod;
    }
    binary operator/(binary &obj)
    {
        binary div;
        div.x=x/obj.x;
        div.y=y/obj.y;
        div.z=z/obj.z;
        return div;
    }
    binary operator>(binary &obj)
    {
        binary rel;
        rel.x=(x>obj.x)?x:obj.x;
        rel.y=(y>obj.y)?y:obj.y;
        rel.z=(z>obj.z)?z:obj.z;
        return rel;
    }
    binary operator|(binary &obj)
    {
        binary oR;
        oR.x=x|obj.x;
        oR.y=y|obj.y;
        oR.z=z|obj.z;
        return oR;
    }
    binary operator&(binary &obj)
    {
        binary a;
        a.x=x&obj.x;
        a.y=y&obj.y;
        a.z=z&obj.z;
        return a;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
        cout<<"--------------------"<<endl;
    }
    friend binary operator%(binary&,binary&);
    friend binary operator^(binary&,binary&);
    friend binary operator<<(binary&,binary&);
};
binary operator%(binary &obj1,binary &obj2)
{
    binary obj;
    obj.x=obj1.x%obj2.x;
    obj.y=obj1.y%obj2.y;
    obj.z=obj1.z%obj2.z;
    return obj;
}
binary operator^(binary &obj1,binary &obj2)
{
    binary obj;
    obj.x=obj1.x^obj2.x;
    obj.y=obj1.y^obj2.y;
    obj.z=obj1.z^obj2.z;
    return obj;
}
binary operator<<(binary &obj1,binary &obj2)
{
    cout<<"Data of first object:"<<endl;
    cout<<"x = "<<obj1.x<<endl;
    cout<<"y = "<<obj1.y<<endl;
    cout<<"z = "<<obj1.z<<endl;
    cout<<"Data of second object:"<<endl;
    cout<<"x = "<<obj2.x<<endl;
    cout<<"y = "<<obj2.y<<endl;
    cout<<"z = "<<obj2.z<<endl;
    cout<<"--------------------"<<endl;
}
int main()
{
    ll l,u;
    ll m,v;
    ll n,w;
    srand(time(0));
    l=rand();u=rand();
    m=rand();v=rand();
    n=rand();w=rand(); 
    binary i(l,m,n),j(u,v,w),s,d,p,q,r,x,o,a,g;
    i<<j;
    s=i+j;
    cout<<"Sum:"<<endl;
    s.display();
    d=i-j;
    cout<<"Difference:"<<endl;
    d.display();
    p=i*j;
    cout<<"Product:"<<endl;
    p.display();
    q=i/j;
    cout<<"Quotient:"<<endl;
    q.display();
    r=i%j;
    cout<<"Remainder:"<<endl;
    r.display();
    x=i^j;
    cout<<"XOR:"<<endl;
    x.display();
    o=i|j;
    cout<<"OR:"<<endl;
    o.display();
    a=i&j;
    cout<<"AND:"<<endl;
    a.display();
    g=i>j;
    cout<<"MAX:"<<endl;
    g.display();
}