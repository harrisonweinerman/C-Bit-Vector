//
//  main.c
//  Bitwise
//
//  Created by Harrison Weinerman on 1/28/15.
//  Copyright (c) 2015 Harrison Weinerman. All rights reserved.
//

#include <stdio.h>

int setBool(int *array, int index, int value){
    
    if (value) return *array |= (1 << index);
    else return *array &= ~(1 << index);

}

int getBool (int array, int index){
    return (array >> index)&1;
}

int getCount(int array){
    return (sizeof(array))*8;
}

int main(int argc, const char * argv[]) {
    
    int x = 0;
    
    for (int i = 0; i<(getCount(x)); i++) {
        x = setBool(&x, i, i % 3 == 0);
    }
    
    for (int i = 0; i<(getCount(x)); i++) {
        printf("%i", getBool(x, i));
    }
    
    return 0;
}
