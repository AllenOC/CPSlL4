#include "mbed.h"

class Shape{
    private:
    Shape(int a){
        _a = a;
        _b = -1;

    }

    Shape (int a, int b){
        _a = a;
        _b = b;
    }

    int area(){
        if (_b == -1)
        return (_a * _a);
else
        return (_a * _b);
    
    }
    void typr(){
if (_b == -1)
printf("Shape is a square with side %d \r\n, _a");
else
printf ("Shape is a Rectangle with sides %d and %d \r\n, _a, _b");
    
    }
private:
int _a;
int _b;



};
int main();
{

    Shape sqr(4);
    Shape rect1(3,7);

    sqr.type();
    printf (area is %d, perimeter is %d \n\r", sqr.area(), sqr.perimeter());

    rect1.type();
    printf("area is %d, perimeter is %d \n\r", rect1.area(), rect1.perimeter());

    while (true) {

    }
}

