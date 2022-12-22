#include<stdio.h>
#include<conio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "|    Bhartiya Janata Party    |    (Yogi Adityanath)     |       1      | "
#define CANDIDATE2 "|    Samajwadi Party          |    (Akhilesh Yadav)      |       2      | "
#define CANDIDATE3 "|    Bahujan Samaj Party      |    (Mayawati)            |       3      | "
#define CANDIDATE4 "|    Indian National Congress |    (Priyanka Gandhi)     |       4      | "



int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("-------------------------------------------------------------------------");
printf("\n|              PARTY          |   CANDIDATES             |	SYMBOL  |");
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE1);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE2);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE3);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE4);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s","|    NOTA {None}              |                          |       6   | " );
printf("\n|-----------------------------------------------------------------------|");

printf("\n\n Input your choice (1 - ) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
	     //hold the screen
	     getchar();
}
printf("\n thanks for vote !!");
getch();
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n|              PARTY          |   CANDIDATES             |	SYMBOL   | Votes |");

printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1>votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2>votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3>votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount3 && votesCount4>votesCount2 && votesCount4>votesCount1)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");



}

int main()
{
int i;
int choice;

do{


printf("\n\n ###### Welcome to Election Voting 2022 (Uttar Pradesh) #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}
