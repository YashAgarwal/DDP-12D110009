#ifndef _EAM_FUNCTIONS_H
  #define  _EAM_FUNCTIONS_H
  #include<stdio.h>
  #include<stdlib.h>
  #include <gsl/gsl_rng.h>
  #include<math.h>
  #include "math_functions.h"
  #include "eam_functions.h"
  #include "utils.h"

  int field_check_eam(int ,int);
  double eam_data_interpolation_func(double* , int , int , double );
  void eam_monte_carlo_simulation(double *,double *,int, char *, char *,char *);
  void neighbour_lattice_sites_read(double* );
  int read_parameter_file(char*,double []);
  void random_crystal_generator(char*, char* );
  void eam_data_read(double*,char*);


  #define TOTAL_NEIGHBOUR_ATOMS_FCC 134
  #define TOTAL_NEIGHBOUR_ATOMS_FCC_ARRAY_SIZE 402
  #define NORMAL_TEMPERATURE 2000
#endif

#define RADIUS 0
#define PAIRING_POTENTIAL_Al_Al 1
#define PAIRING_POTENTIAL_Ni_Al 2
#define PAIRING_POTENTIAL_Ni_Ni 3
#define ELECTRON_DENSITY_Al 4
#define ELECTRON_DENSITY_Ni 5
#define ELECTRON_DENSITY_INDEX 6
#define EMBEDDING_FUNCTION_Ni 7
#define EMBEDDING_FUNCTION_Al 8

#define BOLTZMANN_CONST 1.38E-23
#define ELECTRONIC_CHARGE 1.602e-19

#define Al 0
#define Ni 1
