// This program is prepared by 22CE008_Rudri Bhatt
//Program 2.1

#include<stdio.h>
#include<conio.h>
void main()
{
	int TotalPopulation,TotalLiterate,TotalMen,TotalWomen,LiterateMen,LiterateWomen,TotalIllitrate,IllitrateMen,IllitrateWomen;

	TotalPopulation=80000;
	TotalMen=80000*(0.52);
	TotalWomen=TotalPopulation-TotalMen;
	TotalLiterate=80000*(0.48);
	LiterateMen=80000*(0.35);
	LiterateWomen=TotalLiterate-LiterateMen;
	TotalIllitrate=TotalPopulation-TotalLiterate;
	IllitrateMen=TotalMen-LiterateMen;
	IllitrateWomen=TotalWomen-LiterateWomen;

	printf("Total Population = %d",TotalPopulation);
	printf("\nTotal Men = %d",TotalMen);
	printf("\nTotal Women = %d",TotalWomen);
	printf("\nTotal Literate = %d",TotalLiterate);
	printf("\nLiterate Men = %d",LiterateMen);
	printf("\nLiterate Women = %d",LiterateWomen);
	printf("\nTotal Illitrate = %d",TotalIllitrate);
	printf("\nIllitrate Men = %d",IllitrateMen);
	printf("\nIllitrate Women = %d",IllitrateWomen);

	printf("\nThis program is prepared by 22CE008_Rudri Bhatt");
}
