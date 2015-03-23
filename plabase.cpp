#include "plabase.h"

PlaBase::PlaBase(): Objecte(NumVerticesF)
{
    std::cout<<"Estic en el constructor del cub\n";
    // Cub centrat al 0,0,0 amb dimensió 1 a totes les seves arestes
    xorig = 0; yorig = 0; zorig = 0;

    // Vertices of a unit cube centered at origin, sides aligned with axes
    vertex[0] = point4( 0.5, 0.5,  1.0, 1.0 );
    vertex[1] = point4( 0.5, 0.5,  -1.0, 1.0 );
    vertex[2] = point4( -0.5, 0.5, -1.0, 1.0 );
    vertex[3] = point4( -0.5, 0.5, 1.0, 1.0 );

    color = point4( 255.0, 255.0, 255.0, 1.0 );
}

void PlaBase::make()
{
    Index = 6;
    colors[0] = color; points[0] = vertex[2];
    colors[1] = color; points[1] = vertex[1];
    colors[2] = color; points[2] = vertex[0];

    colors[3] = color; points[3] = vertex[0];
    colors[4] = color; points[4] = vertex[3];
    colors[5] = color; points[5] = vertex[2];
}

// Destructora
PlaBase::~PlaBase()
{
}


