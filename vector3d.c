#include "vector3d.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//NIVEL 1
typedef struct vector3d 
{
    double x, y, z;
} vector3d;

PtVector3d  vector3dCreate(double x, double y, double z)
{
    PtVector3d p = (PtVector3d) malloc(sizeof(vector3d));

    if (p == NULL) return NULL;

    p->x = x;
    p->y=y;
    p->z=z;

    return p;
}

void vector3dPrint(PtVector3d vec, bool lineBreakAfter)
{
    if(vec == NULL)
    {
        printf("<NULL>");
    }
    else
    {
        printf("\n<%.2lf, %.2lf, %.2lf>\n", vec->x, vec->y, vec->z);
    }
    if(lineBreakAfter)
    {
        printf("\n");
    }
}

//NIVEL 2
/*
int vector3dX(PtVector3d vec, double *x) {
    
    return VECTOR3D_OK;
}

int vector3dY(PtVector3d vec, double *y) {
    
    return VECTOR3D_OK;
}

int vector3dZ(PtVector3d vec, double *z) {
    
    return VECTOR3D_OK;
}

int vector3dDestroy(PtVector3d *pVec) {
    
    return VECTOR3D_OK;
}

PtVector3d vector3dMultiplyByScalar(PtVector3d vec, double scalar) {
    return NULL;
}

PtVector3d vector3dAdd(PtVector3d vec1, PtVector3d vec2) {
    return NULL;
}

int vector3dMagnitude(PtVector3d vec, double *magnitude) {
   
    return VECTOR3D_OK;
}

PtVector3d vector3dNormalize(PtVector3d vec) {
    return NULL;
}
*/
