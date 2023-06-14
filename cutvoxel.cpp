#include "cutvoxel.h"

CutVoxel::CutVoxel()
{

}
void CutVoxel::draw(Sculptor &t){
    t.v[x][y][z].show = false;
}
