#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d-%d-%d",&a,&b,&c);
    if(b>12||c>31) printf("NO");
    else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
        if(c<=31) printf("YES");
        else printf("NO");
    }
    else if(b==4||b==6||b==9||b==11){
    	if(c<30) printf("YES");
    	else printf("NO");
	}
    else if(b==2){
        if((a%100!=0&&a%4==0)||a%400==0){
        	if(c<=29) printf("YES");
        	else printf("NO");
    	}else if(c>=29) printf("NO");
		else if(c<=28) printf("YES");
	}
        
    return 0;
}
