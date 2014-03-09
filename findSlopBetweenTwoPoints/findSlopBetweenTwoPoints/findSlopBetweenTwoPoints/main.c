//
//  main.c
//  findSlopBetweenTwoPoints
//
//  Created by dev on 2014. 3. 9..
//  Copyright (c) 2014년 dev. All rights reserved.
//  직선의 기울기를 구하는 프로그램 : ㄷ

#include <stdio.h>
#include <math.h>

float slopeBetweenPoints(float* P1, float* P2);
float radianToDegree(double radi);

int main(int argc, const char * argv[])
{

    float P1[2] = {1, 5};
    float P2[2] = {-2, 0};
    float m;
    
    m = slopeBetweenPoints(P1, P2);
    
    
    printf("기울기 m=tan_theta= %f \n", m);
    // insert code here...
    printf("기울기는 라디안 rad {%f}\n", atan((double)m));
    
    
    printf("기울기는 디그리 deg {%f}\n", radianToDegree(atan((double)m)));
    return 0;
}

float radianToDegree(double radi)
{
    return (float)((360 / 6.28) * radi);
}

float slopeBetweenPoints(float* P1, float* P2)
{
    return (P2[1] -P1[1]) / (P2[0]-P1[0]);
}

