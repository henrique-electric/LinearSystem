//
//  main.c
//  LinearAlgebra
//
//  Created by BaianoDaBahia on 04/05/25.
//

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Vec2 {
    int x, y;
} Vec2;

typedef struct Vec3 {
    int x, y, z;
} Vec3;

typedef struct Matrix2D {
    Vec2 x_basis, y_basis;
} Matrix2D;


