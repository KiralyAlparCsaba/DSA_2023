#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {

  Patient patient1 = {"Johnny Newman","1970708261284",15,7,1970,3};
  Patient patient2;
  //readPatientDetails(&patient2);
  char x[20];
  strcpy(x,patient1.CNP);
  strcat(x,".txt");
  freopen(x,"w",stdout);
  printPatient(patient1);


}
