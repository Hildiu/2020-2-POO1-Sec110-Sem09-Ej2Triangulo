//
// Created by MARIA HILDA BERMEJO RIOS on 10/30/20.
//

#include "CTriangulo.h"

tnumero CTriangulo::area()
{//-----------------------
  tnumero s=semiperimetro();
  return sqrt(s*(s-l1)*(s-l2)*(s-l3));
}

tnumero CTriangulo::perimetro()
{//----------------------------
  return (2*semiperimetro());
}

tnumero CTriangulo::semiperimetro()
{//---------------------------------
  return ((l1 + l2 + l3)/2);
}