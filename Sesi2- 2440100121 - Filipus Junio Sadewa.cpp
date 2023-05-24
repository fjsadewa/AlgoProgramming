#include <stdio.h>
#include <math.h>

int main(){
	int vr, vbr,w ; 
	float vbg,d ;
printf("\t\t\t     Physics Calculators \n");
printf("\t\t\t -*-*-*-*-*-*-*-*-*-*-*-*-*- \n");
printf(" Calculation of the boat speed towards the ground \n");
printf(" ************************************************ \n");
printf("\n\t vbg = sqrt(vr^2 + vbr^2) \n");
printf("\n Where : vr  = River flow velocity \n");
printf("\t vbr = Boat speed against the river \n");
printf("\t vbg = Boat speed towards the ground \n");
fflush(stdin);
printf("\n Input vr  (in meters per second) : ");
scanf("%d",&vr);
printf(" Input vbr (in meters per second) : ");
scanf("%d",&vbr);
vbg = sqrt(vr*vr+vbr*vbr); 
printf("\n Boat speed towards the ground : %.2f ", vbg);

printf(" Calculation of the distance of boat traveled across a river \n");
printf(" *********************************************************** \n");
printf("\n\t d =  w * vbr / vbg \n");
printf("\n Where : d  = distance of a boat traveled across a river \n");
printf("\t w = river width \n");
printf("\n Input w (in meters) : ");
scanf("%d",&w);
d = w*vbr/vbg;
printf("\n distance of a boat traveled across a river : %.2f ", d);
return 0;
	
}  
