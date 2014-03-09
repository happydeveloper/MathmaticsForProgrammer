//
//  main.c
//  findSlopeOfTwoLinearEqAndExpress
//
//  Created by dev on 2014. 3. 9..
//  Copyright (c) 2014년 dev. All rights reserved.
//

#include <stdio.h>

struct xyPoint {
    float x;
    float y;
};
struct linearEq {
    //formula : Ax + Bx = C
    float A;
    float B;
    float C;
};



struct xyPoint calculator(struct linearEq Eq1,float x);

float findSlopeOfLinearEq(struct linearEq Eq1);

int main(int argc, const char * argv[])
{
    struct linearEq Eq1 = {0.5, -1, -1};
    struct linearEq Eq2 = {-3, 6, -12};
    
    float m1, m2;
    
    m1 = findSlopeOfLinearEq(Eq1);
    m2 = findSlopeOfLinearEq(Eq2);
    
    // insert code here...
    printf("식 Eq1의 기울기 : {%f}\n", m1);
    
    printf("식 Eq2의 기울기 : {%f}\n", m2);
    return 0;
}


//calculation of formaula
struct xyPoint calculator(struct linearEq Eq1,float x)
{
    struct xyPoint result;
    
    result.y = ( (Eq1.A*x) - (Eq1.C) ) / ( -Eq1.B );
    result.x = x;
    
    return result;
}


float findSlopeOfLinearEq(struct linearEq Eq1)
{
    return -(Eq1.A/Eq1.B);
}

