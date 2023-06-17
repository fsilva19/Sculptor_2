#include "CutSphere.h"

CutSphere::CutSphere(){

}

CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
}

void CutSphere::draw(Sculptor &t){
    for(int x=(xcenter-radius); x<=(xcenter+radius); x++){
        for(int y=(ycenter-radius); y<=(ycenter+radius); y++){
            for(int z=(zcenter-radius); z<=(zcenter+radius); z++){
                if((x-xcenter)*(x-xcenter) + (y-ycenter)*(y-ycenter) + (z-zcenter)*(z-zcenter) <= radius*radius){
                    t.cutVoxel(x,y,z);
                }
            }
        }
    }
}

