#include "datatypes.h"

#ifndef _POINT3D_H
  #define _POINT3D_H 1
  point3D* point3D_newPoint(float, float, float);
  point3D* point3D_origin();
  point3D* point3D_addVectors(point3D*, point3D*);
  int point3D_isEqual(point3D*, point3D*);
  point3D* point3D_subtractVectors(point3D*, point3D*);
  void point3D_dispPoint(point3D*);
  point3D* point3D_indexToPoint3D_fcc(int, parameter*);
  int point3D_point3DtoIndex(point3D*, parameter*);
  void point3D_periodicBoundaryTransform(point3D*, parameter*);
  float point3D_magnitude(point3D*);
  float point3D_distAtoB(point3D*, point3D*);
#endif
