/* Convert distances from Miles to KMS. */

#include <stdio.h>
#define KMS_PER_MILE 1.609
int main(void){
  double miles,kms;
  FILE *inp,
       *outp;
       
  inp= fopen("b:distance.dat","r");
  outp=fopen("b:distance.out","w");
  
  /* Get and Echo the distance in miles */
  
  fscanf(inp, "%lf",&miles);
  fprintf(outp,"The Distance in miles is %.2f\n",miles);
  
  
  /* Convert the distance to kms */
  kms= KMS_PER_MILE * miles;
  
  /* Display the distance in kms */
  fprintf(outp, "That equals %.2f kms\n",kms);
  
  /*Close the Files*/
  fclose(inp);
  fclose(outp);
  
  return(0);
  
}



/* Output */
/* Contents of input file distance.dat */
/*112.0 */

/* Contents of output file distance.out
The distance in miles is 112.00
That equals 180.21 kms */


