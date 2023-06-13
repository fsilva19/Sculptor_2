#include "putvoxel.h"
#include <iostream>
#include "sculptor.h"

putvoxel::putvoxel()
{

}
void putvoxel::draw(Sculptor &t){
    t.v[x][y][z].show = true;
    t.v[x][y][z].r = r;
    t.v[x][y][z].g = g;
    t.v[x][y][z].b = b;
    t.v[x][y][z].a = a;
}
