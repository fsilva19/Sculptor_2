#include "PutSphere.h"

PutSphere::PutSphere(){

}

PutSphere::PutSphere(int xc, int yc, int zc, int radius, float r, float g, float b, float a){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutSphere::draw(Sculptor &t){
    t.setColor(r,g,b,a);

    for(int x=(xcenter-radius); x<=(xcenter+radius); x++){
        for(int y=(ycenter-radius); y<=(ycenter+radius); y++){
            for(int z=(zcenter-radius); z<=(zcenter+radius); z++){
                if((x-xcenter)*(x-xcenter) + (y-ycenter)*(y-ycenter) + (z-zcenter)*(z-zcenter) <= radius*radius){
                    t.putVoxel(x,y,z);
                }
            }
        }
    }

}
