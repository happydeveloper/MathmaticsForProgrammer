//
//  main.cpp
//  OperatorOverloading
//
//  Created by dev on 2014. 3. 8..
//  Copyright (c) 2014년 dev. All rights reserved.
//

#include <iostream>

struct _3dPointS
{
    float x, y, z;
    
    //덧셈 오버로드
    //Point Point::operator+(const Point& p)
    _3dPointS operator+(const _3dPointS& P2) const
    {
        _3dPointS temp {
            this->x + P2.x,
            this->y + P2.y,
            this->z + P2.z,
        };
        
        return temp;
    }
};


int main(int argc, const char * argv[])
{

    _3dPointS A, B, C;
    
    A = {1, 2, 2};
    B = {2, 1, 3};
    C = A + B;
    
    printf("%f %f %f\n", C.x, C.y, C.z);
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

