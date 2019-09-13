#include <iostream>
#include <conio.h>
using namespace std;
class cube{
private:
    double size = 10;
public:
    cube(double val)
{
    if (val>0)
    {
        size = val;
    };
}
    double setsize(double val)
    {
        if(val>0)
        {
            size=val;
            return size;
        }
    }
    double volume()
    {
        return size*size*size;
    }

    void detail()
    {
    cout<<"\ndetail of rectangle"<<endl;
   cout<<"width = "<<size<<endl;
   cout<<"height = "<<size<<endl;
   cout<<"length = "<<size<<endl;
   cout<<"volume = "<<volume()<<endl;
    }
};
int main()
{

   cube cube1(4);
   cube1.detail();
   cube cube2(3);
   cube2.detail();
   cube cube3(-2);
   cube3.detail();
}
