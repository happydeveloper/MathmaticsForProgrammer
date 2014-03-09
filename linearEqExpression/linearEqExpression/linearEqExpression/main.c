//
//  main.c
//  linearEqExpression
//
//  Created by dev on 2014. 3. 9..
//  Copyright (c) 2014년 dev. All rights reserved.
//  설명 : 직선의 방정식의 해를 구하는 프로그램  This program is to find solution of a given linear Eqaution.
//  입력값 : 구조체 일반형 선형방정식(Ax + By = C), 변수 x
//  반환값 : 포인트형구조체(데카르트 표기법으로 반환(return as notation of Certain coordinations)


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

//calculation of formaula
struct xyPoint calculator(struct linearEq Eq1,float x)
{
    struct xyPoint result;
    
    result.y = ( (Eq1.A*x) - (Eq1.C) ) / ( -Eq1.B );
    result.x = x;
    
    return result;
}

int main(int argc, const char * argv[])
{

    //struct linearEq formula_1 = {1, -2, 0};
    struct linearEq formula = {-3, 1 , 4};
    struct xyPoint results;
    int x = 1;
    
    results = calculator(formula, x);
    
    
    
    printf(" solution of Eq1 %f * x + %f * y = %f is ( %f , %f) when x = %f \n",formula.A, formula.B, formula.C, results.x, results.y, results.x);
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}




