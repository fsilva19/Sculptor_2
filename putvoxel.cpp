#include "putvoxel.h"
#include "sculptor.h"

putvoxel::putvoxel(){

}

putvoxel::putvoxel(int x, int y, int z, int r, int g, int b, int a){
    this->x = x;
    this->y = y;
    this->z = z;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void putvoxel::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);
}
