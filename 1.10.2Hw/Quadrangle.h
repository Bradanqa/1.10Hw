#pragma once
#include "Figure.h"

class Quadrangle : public Figure {
public:
   Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

   void print_info() override;

protected:
   int a;
   int b;
   int c;
   int d;
   int A;
   int B;
   int C;
   int D;
};