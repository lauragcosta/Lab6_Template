#include <stdio.h> 
#include <stdlib.h>
#include "vector3d.h"

int main() {

    PtVector3d v1 = vector3dCreate(2, 1, -4);
    if(v1 == NULL) {
        printf("No memory available. \n");
        return EXIT_FAILURE;
    }

    //NIVEL 1
    /*
    vector3dPrint(v1, true);
    free(v1);
    */

    //NIVEL 2
    PtVector3d v2 = NULL;
    vector3dPrint(v1, true);
    vector3dPrint(v2, true);

    vector3dDestroy(&v1);
    vector3dDestroy(&v2);

    //NIVEL 3
    /*
    printComponentOf(vNull);
    printComponentOf(v2);
    */
    //NIVEL 4
    PtVector3d v1a = vector3dMultiplyByScalar(v1, 2.5);
    vector3dPrint(v1a, true);

    PtVector3d v3 = vector3dAdd(v1, v2);
    vector3dPrint(v3, true);

    double magnitude;
    vector3dMagnitude(v1, &magnitude);
    printf("Magnitude: %.2f\n", magnitude);

    return EXIT_SUCCESS;
}

//NIVEL 3
void printComponentOf(PtVector3d vec)
{
    double x, y, z;
    if(vector3dX(vec, &x) != VECTOR3D_OK)
    {
        printf("Vector NULL. Não é possível apresentar as componentes.\n");
    }
    else
    {
        vector3dY(vec, &y);
        vector3dZ(vec, &z);
        printf("x = %.2f | y = %.2f | z = %.2f\n", x, y, z);
    }
}
