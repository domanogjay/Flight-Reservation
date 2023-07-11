//compiled
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu();
int deluxeconomy[10]={};
//deluxe
int delChoice,i,Dstorage,deluxeCTR=0;
void deluxeOption();
void deluxeback();
void deluxegoto();
void deluxeReserve();
void deluxeCancel();
//economy
int ecoChoice,j,Estorage,economyCTR=0;
void economyOption();
void economyback();
void economygoto();
void economyReserve();
void economyCancel();
//change
int papalitan,ipapalit;
void change();
void gotomenu();
//ShowAllReservation
void showAll();

int main(){
	menu();
}
void menu(){
	int start;
	system("cls");
	printf("\t\t\t============ Welcome To ST Airlines! ============\n");
	printf("\t\t\t|    MENU                                       |\n");
	printf("\t\t\t|    [1] DELUXE                                 |\n");
	printf("\t\t\t|    [2] ECONOMY                                |\n");
	printf("\t\t\t|    [3] CHANGE Seat                            |\n");
	printf("\t\t\t|    [4] Show ALL RESERVATION                   |\n");
	printf("\t\t\t|    [5] EXIT                                   |\n");
	printf("\t\t\t=================================================\n");
	printf("\t\t\t\t Please Choose Above: ");
	scanf("%d", &start);
	
	switch (start){
		case 1:{
			deluxeOption();
			break;
		}
		case 2:{
			economyOption();
			break;
		}
		case 3:{
			change();
			break;
		}
		case 4:{
			showAll();
			break;
		}
		case 5:{
			printf("\n\t\t\t\t\tThank you for Choosing Us!");
			break;
		}
		default:{
			printf("\n\t\t\t\t\tInvalid Input.\n");
			gotomenu();
			break;
		}
	}
}
void deluxeOption(){
	system("cls");
	printf("\t\t\t\t WELCOME TO DELUXE CLASS!\n");
	printf("\t\t\t=================================================\n");
	printf("\t\t\t\t [1] RESERVE Seat\n");
	printf("\t\t\t\t [2] CANCEL Seat\n");
	printf("\t\t\t\t [3] Go To MENU\n");
	printf("\t\t\t=================================================\n");
	printf("\t\t\t\t Choose Above:");
	scanf("%d", &delChoice);
	
	switch (delChoice){
		case 1:{
			deluxeReserve();
			break;
		}
		case 2:{
			deluxeCancel();
			break;
		}
		case 3:{
			menu();
			break;
		}
		default:{
			deluxeback();
			break;
		}
	}
}
//DELUXE
void deluxeReserve(){
	system("cls");
	printf("\t\t\t\t\t Deluxe Available seat \n");
	printf("\t\t\t   =================================================\n");
	printf("\t\t\t\t");
		for(i=0; i<5; i++){
			if(deluxeconomy[i]==0)
				printf("[  %d  ] ", i+1);	
		}
		printf("\n");
		if(deluxeCTR!=5){
			printf("\n\t\t\t\t Enter seat number you want to RESERVE: ");
			scanf("%d", &Dstorage);
				if(Dstorage<1 || Dstorage>5){
					deluxeback();
				}
			else{
				if(deluxeconomy[Dstorage-1]==0){
				deluxeconomy[Dstorage-1]=Dstorage;
				printf("\t\t\t   -------------------------------------------------");
				printf("\n\t\t\t       Reservation of Seat Number %d was successful\n", Dstorage);
				printf("\t\t\t   -------------------------------------------------\n");
				deluxeCTR++;
				deluxegoto();
				}
				else{
					printf("\t\t\t\t Seat is Taken.Try Again");
					getch();
						deluxeOption();
				}
			}
		}
		else{
			printf("\t\t\t  All seats are Reserved for Deluxe.Try to cancel a Seat.\n");	
			deluxegoto();
		}
}
void deluxeCancel(){
	system("cls");
	int cancelD,k,t=0;
	printf("\t\t\t\t\t Deluxe Reserve seat \n");
	printf("\t\t\t   =================================================\n");
	printf("\t\t\t\t");
		for(i=0; i<5; i++){
			if(deluxeconomy[i]!=0)
				printf("[  %d  ] ", i+1);	
			}
		printf("\n");
	printf("\t\t\t\t Enter seat number you want to CANCEL: ");
	scanf("%d", &cancelD);
	if(cancelD<1 || cancelD>5){
		deluxeback();
	}
	else{
		if(deluxeconomy[cancelD-1]!=0){
			deluxeconomy[cancelD-1]=0;
			deluxeCTR--;
			printf("\n\t\t\t\t Cancel Seat was Successful.\n");
		}
		else
			printf("\n\t\t\t\t Can't Cancel Seat.Seat is not Reserved.\n");	
	}
	deluxegoto();
}
void deluxeback(){
	int q;
	printf("\t\t\t\t     Invalid Input. Press 0 to try again.");
	scanf("%d", &q);
	if(q==0)
		deluxeOption();
	else
		deluxeOption();
}
void deluxegoto(){
	int q;
	printf("\n\t\t\t  Press '0' if you want to go to MENU. Press '1' to go BACK.");
	scanf("%d", &q);
	if(q==0)
		menu();
	else
		deluxeOption();
}
//ECONOMY
void economyOption(){
	system("cls");
	printf("\t\t\t\t WELCOME TO ECONOMY CLASS!\n");
	printf("\t\t\t=================================================\n");
	printf("\t\t\t\t [1] RESERVE Seat\n");
	printf("\t\t\t\t [2] CANCEL Seat\n");
	printf("\t\t\t\t [3] Go To MENU\n");
	printf("\t\t\t=================================================\n");
	printf("\t\t\t\t Choose Above:");
	scanf("%d", &ecoChoice);
	
	switch (ecoChoice){
		case 1:{
			economyReserve();
			break;
		}
		case 2:{
			economyCancel();
			break;
		}
		case 3:{
			menu();
			break;
		}
		default:{
			economyback();
			break;
		}
	}
}
void economyReserve(){
	system("cls");
	printf("\t\t\t\t\t Economy Available seat \n");
	printf("\t\t\t   =================================================\n");
	printf("\t\t\t\t");
		for(i=5; i<10; i++){
			if(deluxeconomy[i]==0)
				printf("[  %d  ] ", i+1);	
		}
		printf("\n");
		if(economyCTR!=5){
			printf("\n\t\t\t\t Enter seat number you want to RESERVE: ");
			scanf("%d", &Estorage);
				if(Estorage<5 || Estorage>10){
					economyback();
				}
			else{
				if(deluxeconomy[Estorage-1]==0){
				deluxeconomy[Estorage-1]=Estorage;
				printf("\t\t\t   -------------------------------------------------");
				printf("\n\t\t\t       Reservation of Seat Number %d was successful\n", Estorage);
				printf("\t\t\t   -------------------------------------------------\n");
				economyCTR++;
				economygoto();
				}
				else{
					printf("\t\t\t\t Seat is Taken.Try Again");
					getch();
					economyOption();
				}
			}
		}
		else{
			printf("\t\t\t  All seats are Reserved for Economy.Try to cancel a Seat.\n");
			economygoto();
		}
}
void economyCancel(){
	system("cls");
	int cancelE,k,t=0;
	printf("\t\t\t\t\t Economy Reserve seat \n");
	printf("\t\t\t   =================================================\n");
	printf("\t\t\t\t");
		for(i=5; i<10; i++){
			if(deluxeconomy[i]!=0)
				printf("[  %d  ] ", i+1);	
			}
		printf("\n");
	printf("\t\t\t\t Enter seat number you want to CANCEL: ");
	scanf("%d", &cancelE);
	if(cancelE<5 || cancelE>10){
		economyback();
	}
	else{
		if(deluxeconomy[cancelE-1]!=0){
			deluxeconomy[cancelE-1]=0;
			economyCTR--;
			printf("\n\t\t\t\t Cancel Seat was Successful.\n");
		}
		else
			printf("\n\t\t\t\t Can't Cancel Seat. Seat is not Reserved.\n");	
	}
	economygoto();
}
void economyback(){
	int q;
	printf("\t\t\t\t     Invalid Input. Press 0 to try again.");
	scanf("%d", &q);
	if(q==0)
		economyOption();
	else
		economyOption();
}
void economygoto(){
	int q;
	printf("\n\t\t\t  Press '0' if you want to go to MENU. Press '1' to go BACK.");
	scanf("%d", &q);
	if(q==0)
		menu();
	else
		economyOption();
}
//change
void change(){
		system("cls");
		if(deluxeCTR+economyCTR==0){
		printf("\n\t\t\tCan't Change Seat. There's no Reserved seat yet.\n");
		gotomenu();
		}
		printf("\t\t\t\t\t All RESERVED SEAT \n");
		printf("\t\t\t   =================================================\n");
		printf("\n\t\t\t\t\t Deluxe Reserved seat \n");
		printf("\t\t\t              --------------------------        \n");
		printf("\t\t\t\t");
		for(i=0; i<5; i++){
			if(deluxeconomy[i]!=0)
				printf("[  %d  ] ", i+1);	
			}
		printf("\n\n\t\t\t\t\t Economy  Reserved seat \n");
		printf("\t\t\t              --------------------------        \n");
		printf("\t\t\t\t");
		for(i=5; i<10; i++){
			if(deluxeconomy[i]!=0)
				printf("[  %d  ] ", i+1);	
		}
		printf("\n\t\t\t Enter Seat Number you want to CHANGE: ");
		scanf("%d", &papalitan);
		if(deluxeconomy[papalitan-1]!=0){
			deluxeconomy[papalitan-1]=0;
			if(papalitan<=5)
				deluxeCTR--;
			else
				economyCTR--;
		}
		else{
			printf("\n\t\t\t\t Seat is not Reserved.\n");
			gotomenu();
		}
		printf("\n\n\t\t\t\t------------------------------------------\n");
		printf("\t\t\t\t\t All AVAILABLE SEAT \n");
		printf("\t\t\t   =================================================\n");
		printf("\t\t\t\t\t Deluxe Available seat \n");
		printf("\t\t\t              --------------------------        \n");
		printf("\t\t\t\t");
		for(i=0; i<5; i++){
			if(deluxeconomy[i]==0)
				printf("[  %d  ] ", i+1);	
			}
		printf("\n\n\t\t\t\t\t Economy  Available seat \n");
		printf("\t\t\t              --------------------------        \n");
		printf("\t\t\t\t");
		for(i=5; i<10; i++){
			if(deluxeconomy[i]==0)
				printf("[  %d  ] ", i+1);	
		}
		printf("\n\t\t\t\t Enter Seat you want to RESERVE:");
		scanf("%d", &ipapalit);
		if(deluxeconomy[ipapalit-1]==0){
			deluxeconomy[ipapalit-1]=ipapalit;
			if(ipapalit<=5)
				deluxeCTR++;
			else
				economyCTR++;
			printf("\t\t\t   =================================================\n");
			printf("\n\t\t\t\t Change was Successful.\n");
		}	
		else{
			printf("\t\t\t   =================================================\n");
			printf("\t\t\t\t Seat is Taken.\n");
			deluxeconomy[papalitan-1]=papalitan;
			if(papalitan<=5)
				deluxeCTR++;
			else
				economyCTR++;
			printf("\t\t\t   =================================================\n");
			printf("\n\t\t\t\t Change was not Successful.\n");
		}
		gotomenu();
}
void gotomenu(){
	int q;
	printf("\n\t\t\t\t  Press '0' to go to MENU.");
	scanf("%d", &q);
	if(q==0)
		menu();
	else
		menu();
}
//showAll
void showAll(){
	system("cls");
	int c;
	printf("\t\t\t\t\t All RESERVED SEAT \n");
	printf("\t\t\t   =================================================\n");
	printf("\n\t\t\t\t\t Deluxe Reserved seat \n");
	printf("\t\t\t              --------------------------        \n");
	printf("\t\t\t\t");
		for(i=0; i<5; i++){
			if(deluxeconomy[i]!=0)
				printf("[  %d  ] ", i+1);	
			}
	printf("\n\n\t\t\t\t\t Economy  Reserved seat \n");
	printf("\t\t\t              --------------------------        \n");
	printf("\t\t\t\t");
		for(i=5; i<10; i++){
			if(deluxeconomy[i]!=0)
				printf("[  %d  ] ", i+1);	
			}
	c=deluxeCTR + economyCTR;
	printf("\n\n\n\t\t\t   -------------------------------------------------");
	printf("\n\t\t\t       All Passenger/s on Board: %d Passenger/s\n", c);
	printf("\t\t\t   -------------------------------------------------\n");
	gotomenu();
}

