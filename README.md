# Sculptor
# Scculptor_2

#include "putbox.h"

PutBox::PutBox()
{

}
PutBox::PutBox(int x0, int x1, int y0, int y1, int z0, int z1){
  for (int x = x0; x <= x1; x++) {
        for (int y = y0; y <= y1; y++) {
            for (int z = z0; z <= z1; z++) {
                putVoxel(x, y, z);
            }
        }
    }
}

void PutBox::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putBox(x0,x1,y0,y1,z0,z1);
}
