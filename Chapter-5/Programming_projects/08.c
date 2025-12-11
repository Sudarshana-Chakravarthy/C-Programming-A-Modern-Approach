/* */

#include <stdio.h>

int main(void){
	
	int hour, minutes,time, dep, arr;
	
	printf("Enter a 24 hour time: ");
	scanf("%2d:%2d",&hour,&minutes);
	time = hour * 60 + minutes; 	
	
	if(time < (480 + 583) / 2){
	
		dep = 480;
	       	arr = 616;

	}
	else if (time < (583 + 679) / 2){

		dep = 583;
	       	arr = 712;

	}
	else if (time < (679 + 767) / 2){

		dep = 679;
		arr = 811;

	}
	else if (time < (767 + 840) / 2){

		dep = 767;
		arr = 900;
	}
	else if (time < (840 + 945) / 2 ){
		dep = 840;
		arr = 968;
	}
	else if (time < (945 + 1140) / 2){
		
		dep = 945;
		arr = 1075;
	}
	else if (time < (1140 + 1305) /2 ){
		dep = 1140;
		arr = 1160;
	}
	else {
		dep = 1305;
		arr = 1318;
	}

	int dep_hr, dep_min, arr_hr, arr_min;
	
	dep_hr = dep / 60;
	dep_min = dep % 60;
	arr_hr = arr / 60;
	arr_min = arr % 60;

	printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",(dep_hr % 12 == 0) ? 12: dep_hr % 12, dep_min,(dep_hr >= 12) ? "p.m." : "a.m.",(arr_hr % 12 == 0) ? 12: arr_hr % 12, arr_min,(arr_hr >= 12) ? "p.m." : "a.m.");
	


	return 0;
}
