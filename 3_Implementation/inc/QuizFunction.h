/**
 * @file QuizFunction.h
 * @author Abhishek Kanap (abhishekkanap@gmail.com)
 * @brief This is the source code which contains all the functions for the project
 * @version 0.1
 * @date 2022-03-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef QuizFunction
#define QuizFunction

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

/**
* @brief shows the highest score by a particular user
*/
void show_record();

/**
* @brief resets the highest score to default.
*/
void reset_score();

/**
* @brief help with Competition summary and rules.
*/
void help();

/**
* @brief adds the score to the previous one upon giving the right answer to a question.
*/
void edit_score(float , char [20] );


/// shows the highest score by a particular user
void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
	}
/// to reset the highest score to default
void reset_score()
    {system("cls");
	FILE *f,*ft;
	f=fopen("score.txt","r+");
    ft = fopen("temp.txt","r+");
    fclose(ft);
    fclose(f);
    remove("score.txt");
    rename("temp.txt","score.txt");
    printf("Press any key to continue.");
    }
///help with Competition summary and rules.
void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... Quiz Competition..........................");
    printf("\n >> There are two rounds in this Quiz Competition, Qualifier round & main round");
    printf("\n >> In qualifier round you will be asked a total of 5 questions to test your");
    printf("\n    general knowledge. You are eligible to attend the Competition if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the main Round.");
    printf("\n >> Your Competition starts with main round. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 2 marks");
    printf("\n    By this way you can be WINNER !!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}
///adds the current score to the previous one upon giving the right answer to a question
void edit_score(float score, char cdnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",cdnm,sc);
	    fclose(f);
		}
	}

#endif
