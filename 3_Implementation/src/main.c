#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#include"QuizFunction.h"

int main()///Start of main function.
     {
     system("color 0f");
     int countr,s,s1,count,i;
     float score;
     char choice;
     char candidate_name[20];
     mainhome:
     system("cls");
     printf("\n\t\t         QUIZ COMPETITION\n");
     printf("\n\t\t________________________________________");
     printf("\n\n\t\t      Welcome To The Competition");
     printf("\n\t\t________________________________________");
     printf("\n\n\t\t > Press S to Start the Competition");
     printf("\n\t\t > Press V to View the Highest Score  ");
     printf("\n\t\t > Press R to Reset Score");
     printf("\n\t\t > press H for Help");
     printf("\n\t\t > press Q to Quit");
     printf("\n\n\t\t > Enter Your Choice : ");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();
    getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister Your Name: ");
     gets(candidate_name);

    system("cls");
    printf("\n ------------------  Welcome %s to Quiz Competition --------------------------",candidate_name);
    printf("\n\n Here Are Few Tips For You:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Competition, qualifier round & main round");
    printf("\n >> In qualifier round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to attend the Competition if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your Competition starts with the main round. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 2 marks");
    printf("\n    By this way you can be WINNER !!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the Competition!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=5;i++)
     {
    system("cls");
     s1=i;


     switch (s1)
		{
		case 1:
		printf("\n\n1) How many cards are there in a complete pack of cards?");
		printf("\n\nA.20\t\tB.32\n\nC.52\t\tD.40");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
  			}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.52");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n2) What is the hottest continent on Earth?");
		printf("\n\nA.Asia\t\tB.Europe\n\nC.Africa\tD.South America");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Asia");
		       getch();
		       break;
			   }

        case 3:
		printf("\n\n\n3) How many planets are there in our solar system?");
		printf("\n\nA.7\t\tB.8\n\nC.9\t\tD.5");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is B.8");
		       getch();
		       break;
			   }

        case 4:
		printf("\n\n\n4) What is the 15th letter of the English alphabet?");
		printf("\n\nA.F\t\tB.I\n\nC.M\t\tD.O");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is D.O");
		       getch();
		       break;
			   }

        case 5:
        printf("\n\n\n5) Which one is not amongst the Seven Wonders of the World?");
        printf("\n\nA.Mecca Madina\t\tB.Statue of Liberty\n\nC.Taj Mahal\t\tD.The Great Wall of China");
        if (toupper(getch())=='A')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;
				}
        else
		       {printf("\n\nWrong!!! The correct answer is A.Mecca Madina");
		       getch();
		       break;
			   }

        }
	}

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO ATTEND THIS COMPETITION, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s YOU ARE ELIGIBLE TO ATTEND THIS COMPETITION ***",candidate_name);
     printf("\n\n\n\n\t! Press any key to start the competition !");
     if(toupper(getch())=='p')
		{goto Competition;}
Competition:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     s=i;

     switch(s)
		{
		case 1:
		printf("\n\nWhich of the following elements of electrical engineering cannot be analyzed using Ohms law?");
		printf("\n\nA.Capacitors\t\tB.Inductors\n\nC.Transistors\t\tD.Resistance");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!\n\nExplanation:Ohms law cannot be used for unilateral networks as such networks only allow current flow in one direction. Transistor forms a unilateral network. Thus, Ohm’s law cannot be used on Transistors.");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Transistors\n\nExplanation:Ohms law cannot be used for unilateral networks as such networks only allow current flow in one direction. Transistor forms a unilateral network. Thus, Ohm’s law cannot be used on Transistors.");getch();
		       goto score;
		       break;
			   }

		case 2:
		printf("\n\n\nWhich of the following is a correct representation of peak value in an AC Circuit?");
		printf("\n\nA.RMS value/Peak factor\t\tB.RMS value*Form factor\n\nC.RMS value/Form factor\t\tD.RMS value*Peak factor");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!\n\nExplanation: A peak factor in an AC circuit represents the ratio of the peak value to the RMS value. The peak factor also called the crest factor indicates how extreme the peaks are present in a waveform.");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.RMS value*Peak factor\n\nExplanation: A peak factor in an AC circuit represents the ratio of the peak value to the RMS value. The peak factor also called the crest factor indicates how extreme the peaks are present in a waveform.");
			   getch();
		       goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nWhich of the following according to fundaments of electrical energy is correct about alternating current?");
		printf("\n\nA.Frequency is zero\t\tB.Magnitude changes with time\n\nC.Can be transported to larger distances with less loss in power\t\tD.Flows in both directions");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\n\nExplanation: An alternating current changes its value with time and flows in both directions. The loss in power is less due to alternating current properties and thus, can be transported to larger distances.");
			countr++;getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is A.Frequency is zero\n\nExplanation: An alternating current changes its value with time and flows in both directions. The loss in power is less due to alternating current properties and thus, can be transported to larger distances.");getch();
		       goto score;
		       break;
			   }

        case 4:
		printf("\n\n\nHow many cycles will an AC signal make in 2 seconds if its frequency is 100 Hz?");
		printf("\n\nA.50\t\tB.100\n\nC.150\t\tD.200");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!\n\nExplanation: In electrical engineering, the frequency represents the ratio of the number of cycles to the total time. Since frequency is given as 100 Hz and the time is 2 sec thus a total of 200 cycles will be made.");
			countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.200\n\nExplanation: In electrical engineering, the frequency represents the ratio of the number of cycles to the total time. Since frequency is given as 100 Hz and the time is 2 sec thus a total of 200 cycles will be made.");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhat kind of quantity is an Electric potential?");
		printf("\n\nA.Vector quantity\t\tB.Tensor quantity\n\nC.Scalar quantity\t\tD.Dimensionless quantity");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!\n\nExplanation: Electric potential refers to the work done to bring a unit positive charge from a point with higher potential to a point with lower potential. Since electric potential only has magnitude but no direction, it is a scalar quantity.");
			countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Scalar quantity\n\nExplanation: Electric potential refers to the work done to bring a unit positive charge from a point with higher potential to a point with lower potential. Since electric potential only has magnitude but no direction, it is a scalar quantity.");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhat do crowded lines of force indicate?");
		printf("\n\nA.Strong electric field\t\tB.Weak electric field\n\nC.Strong electric potential\t\tD.Weak electric potential");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!\n\nExplanation: According to the principles of electric fields, when crowded lines of field are present the electric fields are very strong. The strong electric field can be witnessed near the poles of a magnet as the lines of force are crowded in this region.");
			countr++;getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is A.Strong electric field\n\nExplanation: According to the principles of electric fields, when crowded lines of field are present the electric fields are very strong. The strong electric field can be witnessed near the poles of a magnet as the lines of force are crowded in this region.");
goto score;
		       getch();
		       break;
			   }

        case 7:
		printf("\n\n\nWhich of the following will happen in a transformer when the number of secondary turns is less than the number of primary turns?");
		printf("\n\nA.The voltage gets stepped up\t\tB.The voltage gets stepped down\n\nC.The power gets stepped up\t\tD.The power gets stepped down");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\n\nExplanation: The voltage transformation ratio is basically the ratio of the number of secondary turns to that of the number of primary turns. When the transformation ratio is less than 1, the step-down operation occurs.");
			countr++;
            getch();
			break;
			}
		else
		    {printf("\n\nWrong!!! The correct answer is B.The voltage gets stepped down\n\nExplanation: The voltage transformation ratio is basically the ratio of the number of secondary turns to that of the number of primary turns. When the transformation ratio is less than 1, the step-down operation occurs.");
            getch();
		    goto score;
		    break;
			}

        case 8:
		printf("\n\n\nWhich of the following is a correct representation of average value in an AC Circuit?");
		printf("\n\nA.RMS value/Form factor\t\tB.RMS value*Form factor\n\nC.RMS value/Peak factor\t\tD.RMS value*Peak factor");
		if (toupper(getch())=='A')
			{
                printf("\n\nCorrect!!!\n\nExplanation: The form factor basically gives the expression for DC of equal power to a given AC. A form factor in an AC circuit represents the ratio of the RMS value to the average value. Thus, average value = RMS value/Form factor.");
			    countr++;
                getch(); 
			    break;
			}
		else
		    {
                printf("\n\nWrong!!! The correct answer is A.RMS value/Form factor\n\nExplanation: The form factor basically gives the expression for DC of equal power to a given AC. A form factor in an AC circuit represents the ratio of the RMS value to the average value. Thus, average value = RMS value/Form factor.");
                getch();
		        goto score;
		        break;
			}


        case 9:
		printf("\n\n\nWho defined electric current and devised a method to measure current?");
		printf("\n\nA.Michael Faraday\t\tB.Andre-Marie Ampere\n\nC.Nikola Tesla\t\tD.Alessandro Antonio Volta");
		if (toupper(getch())=='B')
			{
                printf("\n\nCorrect!!!\n\nExplanation: Andre-Marie Ampere is a French physicist and mathematician who defined electric current and devised a method to measure current in the 1820s.");
			    countr++;
                getch();
			    break;
			 }
		else
              {printf("\n\nWrong!!! The correct answer is B.Andre-Marie Ampere\n\nExplanation: Andre-Marie Ampere is a French physicist and mathematician who defined electric current and devised a method to measure current in the 1820s.");
getch();
              break;goto score;
			  }

        case 10:
		printf("\n\n\nWhich of the following is correct about direct current?");
		printf("\n\nA.Magnitude is constant\t\tB.Frequency is zero\n\nC.Can be transported to larger distances with less loss in power\t\tD.Flows in one direction");
		if (toupper(getch())=='C')
			  {
                printf("\n\nCorrect!!!\n\nExplanation: A direct current has a fixed value and does not change with time. The frequency of the direct current is equal to zero as it does not change with time.");
			    countr++;
                getch();
			    break;
			   }
		else
              {printf("\n\nWrong!!! The correct answer is C.Can be transported to larger distances with less loss in power\n\nExplanation: A direct current has a fixed value and does not change with time. The frequency of the direct current is equal to zero as it does not change with time.");
getch();
              break;goto score;
			  }

		case 11:
		printf("\n\n\nWho witnessed the effect of magnetism for the first time?");
		printf("\n\nA.Hans Christian Orsted\t\tB.Alexander Graham Bell\n\nC.Michael Faraday\t\tD.Gustav Robert Kirchhoff");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\n\nExplanation: Hans Christian Orsted was a Danish physicist and chemist who witnessed the effect of magnetism for the first time. He discovered that electric current can create a magnetic field using an experiment.");
			countr++;getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Hans Christian Orsted\n\nExplanation: Hans Christian Orsted was a Danish physicist and chemist who witnessed the effect of magnetism for the first time. He discovered that electric current can create a magnetic field using an experiment.");
getch();
		       break;goto score;
			   }

        case 12:
		printf("\n\n\nWhich of the following according is correct about electrical conductivity?");
		printf("\n\nA. It is the ratio of current density to the electric field\t\tB.It is the product of current density and electric field\n\nC.It is the ratio of the electric field to current density\t\tD.It is the reciprocal of the product of current density and electric field");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\n\nExplanation: Electrical conductivity gives the ability of a conductor to conduct electric current. The point form of Ohm’s law says that the electrical conductivity (σ) is the ratio of current density (J) to electric field (E).");
			countr++;getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is A. It is the ratio of current density to the electric field\n\nExplanation: Electrical conductivity gives the ability of a conductor to conduct electric current. The point form of Ohm’s law says that the electrical conductivity (σ) is the ratio of current density (J) to electric field (E).");
getch();
		       break;goto score;}

		case 13:
		printf("\n\n\nWhat is responsible for the current to flow?");
		printf("\n\nA.Protons\t\tB.Electrons\n\nC.Nucleus\t\tD.Protons and Electrons");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\n\nExplanation: For the current to flow in a circuit electrons are required. Electrons are negatively charged and when the potential difference is applied these electrons flow to constitute a current. The current direction is opposite to the electron flow.");
			countr++;getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is B.Electrons\n\nExplanation: For the current to flow in a circuit electrons are required. Electrons are negatively charged and when the potential difference is applied these electrons flow to constitute a current. The current direction is opposite to the electron flow.");getch();
		       goto score;
		       break;
			   }

		case 14:
		printf("\n\n\nWhich of the following according to KCL must be zero?");
		printf("\n\nA. Algebraic sum of currents in closed-loop\t\tB.Algebraic sum of power in closed-loop\n\nC.Algebraic sum of currents entering and leaving a junction\t\tD.Algebraic sum of voltages across the input and output");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!\n\nExplanation: KCL or Kirchhoffs current law helps in finding the currents flowing in the circuit. KCL states that the current entering a junction is equal to the current leaving a junction.");
			countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Algebraic sum of currents entering and leaving a junction\n\nExplanation: KCL or Kirchhoffs current law helps in finding the currents flowing in the circuit. KCL states that the current entering a junction is equal to the current leaving a junction.");
getch();
		       goto score;
		       break;
			   }


		case 15:
		printf("\n\n\nWhich of the following will happen in a transformer when the number of secondary turns is greater than the number of primary turns?");
		printf("\n\nA.The voltage gets stepped up\t\tB.The voltage gets stepped down\n\nC.The power gets stepped up\t\tD.The power gets stepped down");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\n\nExplanation: The voltage transformation ratio is the ratio of the number of secondary turns to that of the number of primary turns. When the transformation ratio is greater than 1, the step-up operation occurs.");
			countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.The voltage gets stepped up\n\nExplanation: The voltage transformation ratio is the ratio of the number of secondary turns to that of the number of primary turns. When the transformation ratio is greater than 1, the step-up operation occurs.");getch();goto score;
		       break;
			   }
		}
		}
	score:
    system("cls");
	score=(float)countr*2;
	if(score>0.00 && score<20)
	{
	   printf("\n\n\t\t**************** CONGRATULATIONS ****************");
	     printf("\n\t Your score is %.2f",score);goto go;}

	 else if(score==20.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A WINNER!!!!!!!!!");
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T MADE ANY SCORE ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to attend next Competition");
	puts(" Press any key if you want to go main home");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,candidate_name);
		goto mainhome;
		}
	}
	}///End of main
