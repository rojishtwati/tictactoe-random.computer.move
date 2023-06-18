#include <stdio.h>
#include <conio.h>
#include <time.h>


void board();
int checkwin();
int bestmove();
char box[]= {'0','1','2','3','4','5','6','7','8','9'};
time_t t1;

void main() {
	int check,choice,player=1;
	char mark;
	
	
	
	do {
		board();
		
	if(player%2==0){
		player=2;
		mark='O';
		
		choice= bestmove();
	}
	else{
		player=1;
		mark='X';
		scanf("%d",&choice);
	}
//	printf("player %d",player);
//	getch();
	
		
		if (choice == 1 && box[1] == '1')
            box[1] = mark;
            
        else if (choice == 2 && box[2] == '2')
            box[2] = mark;
            
        else if (choice == 3 && box[3] == '3')
            box[3] = mark;
            
        else if (choice == 4 && box[4] == '4')
            box[4] = mark;
            
        else if (choice == 5 && box[5] == '5')
            box[5] = mark;
            
        else if (choice == 6 && box[6] == '6')
            box[6] = mark;
            
        else if (choice == 7 && box[7] == '7')
            box[7] = mark;
            
        else if (choice == 8 && box[8] == '8')
            box[8] = mark;
            
        else if (choice == 9 && box[9] == '9')
            box[9] = mark;
            
        else {
		printf("Invalid move ");
		player--;
			}
			
        check = checkwin();
	player++;
    }while (check ==  - 1);


board();
if(check==1){
	player--;
	if(player==1){
	printf("HUMAN win  %d",player);
	}
	else{
		printf("AI win ");
	}
}
else {
	printf("draw");
}    
getch();
}


void board() {
	system("cls");
	printf("\t\t     |     |  \n");
	printf("\t\t  %c  |  %c  |  %c \n",box[1],box[2],box[3]);
	printf("\t\t_____|_____|____\n");
	printf("\t\t     |     |  \n");
	printf("\t\t  %c  |  %c  |  %c \n",box[4],box[5],box[6]);
	printf("\t\t_____|_____|____\n");
	printf("\t\t     |     |  \n");
	printf("\t\t  %c  |  %c  |  %c \n",box[7],box[8],box[9]);
	printf("\t\t     |     |  \n");

}


int checkwin() {
	
	if (box[1] == box[2] && box[2] == box[3])
		return 1;

	else if (box[4] == box[5] && box[5] == box[6])
		return 1;

	else if (box[7] == box[8] && box[8] == box[9])
		return 1;

	else if (box[1] == box[4] && box[4] == box[7])
		return 1;

	else if (box[2] == box[5] && box[5] == box[8])
		return 1;

	else if (box[3] == box[6] && box[6] == box[9])
		return 1;

	else if (box[1] == box[5] && box[5] == box[9])
		return 1;

	else if (box[3] == box[5] && box[5] == box[7])
		return 1;

	else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
	         box[4] != '4' && box[5] != '5' && box[6] != '6' &&
	         box[7] != '7' && box[8] != '8' && box[9] != '9')
		return 0;
	else{
		return  - 1;
	}
}


int bestmove(){
	int aimove;
	srand ( (unsigned) time (&t1));
	aimove=rand()%10;
	printf("%d",aimove);
	return aimove;
}