#pragma once

#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif

extern "C" MATHLIB_API bool isPointsOnLine(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3);
