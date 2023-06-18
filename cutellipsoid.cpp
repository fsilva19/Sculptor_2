#include "cutellipsoid.h"

CutEllipsoid::CutEllipsoid(){

}

CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
}

void CutEllipsoid::draw(Sculptor &t){
    for (int x = (xcenter - rx); x<= (xcenter+rx); x++){
        for (int y = (ycenter - ry); y<= (ycenter+ry); y++){
            for (int z = (zcenter - rz); z<= (zcenter+rz); z++){
                if (float((((x - xcenter)*(x - xcenter))/float(rx*rx)) +
                          (((y - ycenter)*(y - ycenter))/float(ry*ry)) +
                          (((z - zcenter)*(z - zcenter))/float(rz*rz))) <= 1.0){
                    t.cutVoxel(x,y,z);
                }
            }
        }
    }
}
