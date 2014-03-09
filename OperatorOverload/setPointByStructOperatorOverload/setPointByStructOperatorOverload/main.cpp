//
//  main.cpp
//  setPointByStructOperatorOverload
//
//  Created by dev on 2014. 3. 8..
//  Copyright (c) 2014년 dev. All rights reserved.
//

#include <iostream>

struct Point2D{
    float x, y;
    struct Point2D operator+(const Point2D& P2) const{
        Point2D tmp {
            this->x + P2.x,
            this->y + P2.y
        };
        
        return tmp;
    }
    struct Point2D operator-(const Point2D& P2) const{
        Point2D tmp {
            this->x - P2.x,
            this->y - P2.y
        };
        
        return tmp;
    }
};

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "set point a, b, c, d, e!\n";
    std::cout << "where is a = (3, 1), b = (-3, 1), c = (0, 2)\n";
    std::cout << "Then plus vector a and vector b and vector c\n";
    std::cout << "And minus vector a and vector b and vector c\n";

    Point2D a = {3, 1};
    Point2D b = {-3,1};
    Point2D c = {0, 2};
    Point2D result;
    
    result = a + b + c;
    
    printf("a coordinator of point A is (%f, %f).\n",a.x, a.y);
    printf("a coordinator of point B is (%f, %f).\n",b.x, b.y);
    printf("a coordinator of point C is (%f, %f).\n",c.x, c.y);
    
    printf("vector A + vector B + vector C = (%f, %f).\n",result.x, result.y);
    result = a - b - c;
    printf("vector A - vector B - vector C = (%f, %f)\n",result.x, result.y);
    
    
    
    return 0;
}

