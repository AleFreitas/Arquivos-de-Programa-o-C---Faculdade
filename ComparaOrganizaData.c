//Este programa organiza e compara duas datas diferentes
//This Program organizes and compares two different dates
#include<stdio.h>

int main() {
	int n1,n2,n3,dt1,a1,a2,a3,dt2;
	printf("digite a primeira data na seguinte ordem:\n1-dia\n2-mes\n3-ano\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("digite a segunda data na seguinte ordem:\n1-dia\n2-mes\n3-ano\n");
	scanf("%d %d %d",&a1,&a2,&a3);
	if(n3>a3){//anos diferentes 1
		printf(" a primeira data %d / %d / %d e cronologicamente maior que a segunda %d / %d / %d...",n1,n2,n3,a1,a2,a3);
	}
	else{
		//anos diferentes 2
		if (a3>n3){
			printf(" a segunda data %d / %d / %d e cronologicamente maior que a primeira %d/ %d %d",a1,a2,a3,n1,n2,n3);
		}
		else{
			//anos iguais,mes diferentes 1
			if(n3==a3 && n2>a2){
				printf(" a primeira data %d / %d / %d e cronologicamente maior que a segunda %d / %d / %d...",n1,n2,n3,a1,a2,a3);
			}
			else{
				//ano igual,mes diferentes 2
				if(n3==a3 && a2>n2){
					printf(" a segunda data %d / %d / %d e cronologicamente maior que a primeira %d/ %d %d",a1,a2,a3,n1,n2,n3);
				}
				else{
					//ano igual, mes igual, dias diferentes 1
					if(n3==a3 && n2==a2 && n1>a1){
						printf(" a primeira data %d / %d / %d e cronologicamente maior que a segunda %d / %d / %d...",n1,n2,n3,a1,a2,a3);
					}
					else{
						//ano igual,mes igual,dias diferentes 2
						printf(" a segunda data %d / %d / %d e cronologicamente maior que a primeira %d/ %d %d",a1,a2,a3,n1,n2,n3);
					}
				}
			}
		}
    }

	return 1;
}
