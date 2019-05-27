#include<stdio.h>
int main()
{
	int ch1,ch2;
	float l,w,b,h,r,area,perimeter;
	printf("\t\t\t------ Geometrical Shapes ------\t\t\t ");
	Mainmenu:
	printf("\n 1. Triangle \n 2. Square \n 3. Rectangle \n 4. Rhombus \n 5. Parallelogram \n 6. Circle \n");
	printf("\n Enter your choice:-");
	scanf("%d",&ch1);
	printf("\n");
	switch(ch1) 
	{
		case 1: printf("1. Triangle \n");
				//for structure
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=5;j++)
						{
							if((i==1&&j==3)||(i==3&&j==2)||(i==3&&j==4)||i==5)
							{
								printf(" * ");
							}
							else
							{
								printf("   ");
							}
						}
					printf("\n");
			    }
				//for calculation
				printf("Height=");
				scanf("%f",&h);
				printf("Base=");
				scanf("%f",&b);
				printf("\n Which one u want to calculate... \n");
				printf("1. Area \t 2. Perimeter \t 3. Main Menu\n");	
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:	area=0.5*h*b;
							printf("Area= %f",area);
							break;
					case 2: perimeter=3*b;
							printf("Perimeter= %f",perimeter);
							break;
					case 3: printf("\n ----Main Menu---- \n");
							goto Mainmenu;		
					default : printf("\n Jitni chadar ho utne hi par phelao");				
				}	
				break;	
	case 2: printf("2. Square \n");
				//for structure
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=4;j++)
						{
							if(i==1||i==5||j==1||j==4)
							{
								printf(" * ");
							}
							else
							{
								printf("   ");
							}
						}
					printf("\n");
			    }
				//for calculation
				printf("Lenght=");
				scanf("%f",&b);
				printf("\n Which one u want to calculate... \n");
				printf("1. Area \t 2. Perimeter \t 3. Main Menu\n");	
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:	area=b*b;
							printf("Area= %f",area);
							break;
					case 2: perimeter=4*b;
							printf("Perimeter= %f",perimeter);
							break;
					case 3: printf("\n ----Main Menu---- \n");
							goto Mainmenu;		
					default : printf("\n Jitni chadar ho utne hi par phelao");				
				}	
				break;	
	case 3: printf("3. Rectangle \n");
				//for structure
				for(int i=1;i<=4;i++)
				{
					for(int j=1;j<=6;j++)
						{
							if(i==1||j==1||i==4||j==6)
							{
								printf(" * ");
							}
							else
							{
								printf("   ");
							}
						}
					printf("\n");
			    }
				//for calculation
				printf("Lenght=");
				scanf("%f",&l);
				printf("Width=");
				scanf("%f",&w);
				printf("\n Which one u want to calculate... \n");
				printf("1. Area \t 2. Perimeter \t 3. Main Menu \n");	
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:	area=l*w;
							printf("Area= %f",area);
							break;
					case 2: perimeter=2*(l+w);
							printf("Perimeter= %f",perimeter);
							break;
					case 3: printf("\n ----Main Menu---- \n");
							goto Mainmenu;		
					default : printf("\n Jitni chadar ho utne hi par phelao");				
				}	
				break;
	case 4: printf("4. Rhombus \n");
				//for structure
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=7;j++)
						{
							if((i==3&&j==2)||(i==3&&j==6)||(i==1&&(i+j)>3)||(i==5&&(i+j)<11))
							{
								printf(" * ");
							}
							else
							{
								printf("   ");
							}
						}
					printf("\n");
			    }
				//for calculation
				printf("Diagonal1=");
				scanf("%f",&h);
				printf("Diagonal2=");
				scanf("%f",&b);
				printf("Side=");
				scanf("%f",&w);
				printf("\n Which one u want to calculate... \n");
				printf("1. Area \t 2. Perimeter 3. Main Menu\n");	
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:	area=h*b*0.5;
							printf("Area= %f",area);
							break;
					case 2: perimeter=4*w;
							printf("Perimeter= %f",perimeter);
							break;
					case 3: printf("\n ----Main Menu---- \n");
							goto Mainmenu;		
					default : printf("\n Jitni chadar ho utne hi par phelao");				
				}	
				break;
	case 5: printf("5. Parallelogram \n");
				//for structure
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=9;j++)
						{
							if((i==3&&j==2)||(i==3&&j==8)||(i==1&&(i+j)>3)||(i==5&&(i+j)<13))
							{
								printf(" * ");
							}
							else
							{
								printf("   ");
							}
						}
					printf("\n");
			    }
				//for calculation
				printf("Height=");
				scanf("%f",&h);
				printf("width=");
				scanf("%f",&b);
				printf("Length=");
				scanf("%f",&l);				
				printf("\n Which one u want to calculate... \n");
				printf("1. Area \t 2. Perimeter \t 3. Main Menu\n");	
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:	area=h*b*0.5;
							printf("Area= %f",area);
							break;
					case 2: perimeter=2*(l+b);
							printf("Perimeter= %f",perimeter);
							break;
					case 3: printf("\n ----Main Menu---- \n");
							goto Mainmenu;		
					default : printf("\n Jitni chadar ho utne hi par phelao");				
				}	
				break;					
	case 6: printf("6. Circle \n");
				//for structure
				for(int i=1;i<=6;i++)
				{
					for(int j=1;j<=7;j++)
						{
							if((i==1&&j==3)||(i==1&&j==4)||(i==1&&j==5)||(i==2&&j==2)||(i==2&&j==6)||(i==3&&j==1)||(i==3&&j==7)||(i==4&&j==1)||(i==4&&j==7)||(i==5&&j==2)||(i==5&&j==6)||(i==6&&j==3)||(i==6&&j==4)||(i==6&&j==5))
							{
								printf("*");
							}
							else
							{
								printf(" ");
							}
						}
					printf("\n");
			    }
				//for calculation
				printf("Radius=");
				scanf("%f",&r);				
				printf("\n Which one u want to calculate... \n");
				printf("1. Area \t 2. Perimeter \t 3. Main Menu\n");	
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:	area=3.14*r*r;
							printf("Area= %f",area);
							break;
					case 2: perimeter=2*3.14*r;
							printf("Perimeter= %f",perimeter);
							break;
					case 3: printf("\n ----Main Menu---- \n");
							goto Mainmenu;		
					default : printf("\n Jitni chadar ho utne hi par phelao");				
				}	
				break;												
	default : printf("Invalid choice!!!");			
	}
	return 0;
}
