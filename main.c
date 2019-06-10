/*************************
main file
**************************/

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
// prototype of function which accepts two sets and return address of array containing common enelents in both sets
int* compare(int* p, int* q);

int* set1=NULL;                            // pointer to first set
int* set2=NULL;                            // pointer to second set
int main(int argc, char const *argv[]) {
  int n1 = atoi(argv[1]);                  // accept size of first set from command-line
  int n2 = atoi(argv[2]);                  // accept size of second set from command-line
  set1 = malloc(n1*sizeof(int));           // allocate memory for first set
  set2 = malloc(n2*sizeof(int));           // allocate memory for second set

  /*assign a pointer which stores the return address of pointer to array containing common elements in both sets*/
  int* t=NULL;
  t=compare(set1,set2);
  printf("%s\n","Common elements are\n");  // prints the common elements in both sets
  for(int i=0;i<sizeof(t);i++) {
    printf("%d\t",*(t+i));
  }
  return 0;
}

//function which compares elements in set1 and set2 and stores common elements into an array
int* compare(int* p, int* q) {
  static int d[100];
  for(int i=0,j=0,k=0;i<(*set1),j<(*set2);i++,j++) {
    if ((*(p+i))==(*(q+i))) { // if element is set1 == element in set2
      d[k]=*(p+i);            // store in array d
      k++;                    // increment to next location
    }
    else continue;            // else continue to the next location in set1 and set2
  }
  return d;                   // return address of d[0]
}
