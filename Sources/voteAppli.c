#include <stdio.h>
#include <stdbool.h>  // stdbool.h library for importing data type boolean
#include <stdlib.h>
#include <string.h>

/*Vote apps
** select the candidate using apps

how to work
0. input name
1. input the age
  if age is votable -> get the voteChance, message that you can vote
  else message that you can't vote due to under age, program ends

2. check the Candidate
   message to voter like greeting, 
   display all the candidate

3. vote the candidate
   message who are you choosing
   input the selection by number
   store the number
4. closing the apps
   message that you already voting
   your voting are.
   close the apps
  */

// function declaration
char* inputName ();
int inputAge();
void checkVoterAge(int param1);
void displayCandidate(char paramName,char Cand1, int CandNo1,char Cand2, int CandNo2,char Cand3, int CandNo3);
char voteCandidate();
void closeApp(char paramCan);


//Struct
struct Candidate {
    int _no;
    char _name[50];
};

    // declare instance
    struct Candidate candidate1 = {1, "Captain America"};
    struct Candidate candidate2 = {2, "Hulk"};
    struct Candidate candidate3 = {3, "Thor"};


int main(){
    
    char voterName[50];
    strcpy(voterName,inputName());

    int voterAge = inputAge();

    checkVoterAge(voterAge);
    displayCandidate(voterName, candidate1._name, candidate1._no,candidate2._name, candidate2._no,candidate3._name, candidate3._no);
    char voteFinal = voteCandidate();
    closeApp(voteFinal);

    printf("Thank you for participating\n");
    printf("Program will closed");
    return 0;
}

void displayCandidate(char paramName,char Cand1, int CandNo1,char Cand2, int CandNo2,char Cand3, int CandNo3){
    printf("Hello %s, here are the candidate\n",paramName);
    printf("%d. %s\n",CandNo1,Cand1);
    printf("%d. %s\n",CandNo2,Cand2);
    printf("%d. %s\n",CandNo3,Cand3);
};

void checkVoterAge(int param1){
    int voteAbleAge = 20;
    // bool voteChance;

    if(param1 > voteAbleAge){
        // voteChance = true;
        printf("You are %d years old, so you can vote.",param1);
    }
    else{
        // voteChance = false;
        printf("Sorry, you are under age, so you can't vote.");
        printf("Program closed.");
        exit(0);
    }

    // return voteChance;
}

int inputAge(){
    int _age;
    printf("Please input your age!\n");
    
    if(scanf("%d",&_age)!=1){
        printf("Invalid input!\n");
        exit(1);
    };
    return _age;
};

char* inputName (){
    static char firstName[20];
    static char lastName[20];
    static char fullName[50];
    printf("Please input first Name !\n");
    scanf("%s",&firstName); 
    getchar();

    printf("Please input your Last Name !\n");
    scanf("%s",&lastName);
    getchar();

    strcpy(fullName, firstName);
    strcat(fullName," ");
    strcat(fullName, lastName);
    
    printf("Your name are : %s\n", fullName);
    getchar();
    return fullName;
};

char voteCandidate(){

    char userSelectVote;
    printf("Please select the candidate by input the number!\n");
    scanf("%c", &userSelectVote);
    return userSelectVote;
};

void closeApp(char paramCan){
    switch (paramCan)
    {
    case 1:
        printf("Thank you for your vote\n");
        printf("Your vote will belong to %d %s\n", candidate1._no, candidate1._name);
        break;
    case 2:
        printf("Thank you for your vote\n");
        printf("Your vote will belong to %d %s\n", candidate2._no, candidate2._name);
        break;
    case 3:
        printf("Thank you for your vote\n");
        printf("Your vote will belong to %d %s\n", candidate3._no, candidate3._name);
        break;
    
    default:
        printf("input not found\n");
        break;
    }

};





