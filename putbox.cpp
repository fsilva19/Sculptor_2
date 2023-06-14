#include "putbox.h"

PutBox::PutBox()
{

}

void PutBox::draw(Sculptor &t)
{
    for (int x = x0; x <= x1; x++) {
        for (int y = y0; y <= y1; y++) {
            for (int z = z0; z <= z1; z++) {
                putVoxel(x, y, z);
            }
        }
    }
}
