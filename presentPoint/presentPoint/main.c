//
//  main.c
//  presentPoint
//
//  Created by dev on 2014. 3. 8..
//  Copyright (c) 2014년 dev. All rights reserved.
//

#include <stdio.h>

struct _3dPointS
{
    float x, y, z;
};


int main(int argc, const char * argv[])
{

    //float _3dPoint[3];
    
    struct _3dPointS A, B, C, S;
    
    A.x = 1;
    A.y = 1;
    A.z = 1;
    
    B.x = 2;
    B.y = 2;
    B.z = 2;
    
    C.x = 3;
    C.y = 3;
    C.z = 3;
    
    S.x = A.x+B.x+C.x;
    S.y = A.y+B.y+C.y;
    
    printf("%f \n", S.x);
    
    
    
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}



