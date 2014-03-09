//
//  main.c
//  determinantFunctionPowOfTwo
//
//  Created by dev on 2014. 3. 8..
//  Copyright (c) 2014년 dev. All rights reserved.
//

#include <stdio.h>

int powoftwo(int num)
{
    return !(num & (num - 1));
}


int main(int argc, const char * argv[])
{
    int t;
    int cnt;
    int limit;
    // insert code here...
    printf("2의 거듭제곱 확인!\n");
    cnt = 0;
    limit = 100000;
    
    while (cnt < limit){
        t = powoftwo(cnt);
        
        if(t == 0)
        {
            //printf("%d은 2의 거듭제곱이 아니다.\n", cnt);
        }
        else
        {
            printf("%d 2의 거듭제곱\n", cnt);
        }
        cnt++;
    }
    
    return 0;
}


