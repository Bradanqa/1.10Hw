#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle {
public:
   Rectangle(int a, int b);

   void print_info() override;
};