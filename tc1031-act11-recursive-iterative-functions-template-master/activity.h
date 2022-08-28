// =================================================================
//
// File: activity.h
// Author: Erik Cabrera
// Date: 27/08/22
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(int n){
  unsigned int suma = 0;
  for (int i = 1; i <= n; i++){
    suma += i;
  }
  return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(int n){
  if (n == 1){
    return 1;
  }
  else{
    return n + sumaRecursiva(n - 1);
  }
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	1
// =================================================================
unsigned int sumaDirecta(int n){
  return (n * (n +1) / 2);
}

#endif /* ACTIVITY_H */
