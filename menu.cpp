#include<iostream>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#include<cstdlib>
using namespace std;
void clr(int);
enum{UP=72,DOWN=80,LEFT=75,RIGHT=77,ESC=27,BACK=8,ENTER=13};
int menu(int min,int max,char options[][44],char desc[][44],char* leftHeading="",char*rightHeading="");
HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
/*
void main(){//uncomment this main to view all selectionsible color combinations with there codes

	for(int i=0;i<256;i++)
	{
		clr(i);
		cout<<i<<"Hello\n";
	}
}
*/
void main()
{
	char options[11][44]={"","","  New","  Load","  Settings","  About","","","","",""};//will appear in right box
	char desc[11][44]={"","","  Start a New Game","  Load from File","  Change Game Settings","  Know About Developers",//will appear in left box
		"","  --------------------------------------- ","  Use Up/Down Arrow Keys To Navigate","  Enter/Right Arrow Key To Select an Option","  Esc/Back/Left Arrow Key to Go Back"};
	char leftHeading[44]="                  MENU"//Heading telling whats coming in right
		,rightHeading[44]="                DESCRIPTION";//Heading telling whats coming in left
	int choice=menu(         2        ,       4       ,options,desc,leftHeading,rightHeading);//Function Printing Menu returns int(should be used in switch()
	//               Starting Option    Ending Option
}
void convert(char *str)//function adds spaces to string
{
	for(int i=0;i<43;i++)
		if(!str[i])//if charAt[i][j] contains null,replace it with a space character
			str[i]=' ';
}
void convert(char options[][44])//function adds space to string
{
	for(int i=0;i<11;i++)
		convert(options[i]);
}
void clr(int x)
{
//	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, x);
}
void printHeading()
{
	
		clr(11);cout<<"\n         TTTTTTTTTT";clr(15);cout<<"  II     CCCCC       ";clr(11);cout<<"TTTTTTTTTT";clr(15);cout<<"    AAA         CCCCC       ";clr(11);cout<<"TTTTTTTTTT";clr(15);cout<<"   OOOOO     EEEEEEEEE";
		clr(11);cout<<"\n             TT    ";clr(15);cout<<"  II   CC     CC         ";clr(11);cout<<"TT";clr(15);cout<<"       AA AA      CC     CC         ";clr(11);cout<<"TT";clr(15);cout<<"     OO     OO   EE";
		clr(11);cout<<"\n             TT    ";clr(15);cout<<"  II  CC                 ";clr(11);cout<<"TT";clr(15);cout<<"      AA   AA    CC                 ";clr(11);cout<<"TT";clr(15);cout<<"    OO       OO  EE";
		clr(11);cout<<"\n             TT    ";clr(15);cout<<"  II  CC                 ";clr(11);cout<<"TT";clr(15);cout<<"     AA     AA   CC                 ";clr(11);cout<<"TT";clr(15);cout<<"    OO       OO  EEEEEEEE";
		clr(11);cout<<"\n             TT    ";clr(15);cout<<"  II  CC                 ";clr(11);cout<<"TT";clr(15);cout<<"    AAAAAAAAAAA  CC                 ";clr(11);cout<<"TT";clr(15);cout<<"    OO       OO  EE";
		clr(11);cout<<"\n             TT    ";clr(15);cout<<"  II   CC     CC         ";clr(11);cout<<"TT";clr(15);cout<<"   AA         AA  CC     CC         ";clr(11);cout<<"TT";clr(15);cout<<"     OO     OO   EE";
		clr(11);cout<<"\n             TT    ";clr(15);cout<<"  II     CCCCC           ";clr(11);cout<<"TT";clr(15);cout<<"  AA           AA   CCCCC           ";clr(11);cout<<"TT";clr(15);cout<<"       OOOOO     EEEEEEEEE\n\n\n";
}
int menu(int min,int max,char options[][44],char desc[][44],char* left,char*right)
{
	max+=min-1;
	int selection=min;
	convert(left);
	convert(right);
	convert(options);
	convert(desc);

	do{
	//	printHeading();

		cout<<"            ";clr(176);cout<<"  TIC TAC TOE                                                                           - [] ";clr(192);cout<<"X";clr(176);cout<<" \n";clr(12);
		cout<<"            ===============================================";clr(176);cout<<" ";clr(12);cout<<"===============================================\n";
		cout<<"            ==";clr(11);cout<<left;clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<right;clr(12);cout<<"==\n";
		cout<<"            ==";selection==0?clr(176):clr(11);cout<<options[0];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[0];clr(12);cout<<"==\n";
		cout<<"            ==";selection==1?clr(176):clr(11);cout<<options[1];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[1];clr(12);cout<<"==\n";
		cout<<"            ==";selection==2?clr(176):clr(11);cout<<options[2];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[2];clr(12);cout<<"==\n";
		cout<<"            ==";selection==3?clr(176):clr(11);cout<<options[3];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[3];clr(12);cout<<"==\n";
		cout<<"            ==";selection==4?clr(176):clr(11);cout<<options[4];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[4];clr(12);cout<<"==\n";
		cout<<"            ==";selection==5?clr(176):clr(11);cout<<options[5];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[5];clr(12);cout<<"==\n";
		cout<<"            ==";selection==6?clr(176):clr(11);cout<<options[6];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[6];clr(12);cout<<"==\n";
		cout<<"            ==";selection==7?clr(176):clr(11);cout<<options[7];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[7];clr(12);cout<<"==\n";
		cout<<"            ==";selection==0?clr(176):clr(11);cout<<options[0];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[0];clr(12);cout<<"==\n";
		cout<<"            ==";selection==1?clr(176):clr(11);cout<<options[1];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[1];clr(12);cout<<"==\n";
		cout<<"            ==";selection==2?clr(176):clr(11);cout<<options[2];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[2];clr(12);cout<<"==\n";
		cout<<"            ==";selection==3?clr(176):clr(11);cout<<options[3];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[3];clr(12);cout<<"==\n";
		cout<<"            ==";selection==4?clr(176):clr(11);cout<<options[4];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[4];clr(12);cout<<"==\n";
		cout<<"            ==";selection==5?clr(176):clr(11);cout<<options[5];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[5];clr(12);cout<<"==\n";
		cout<<"            ==";selection==6?clr(176):clr(11);cout<<options[6];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[6];clr(12);cout<<"==\n";
		cout<<"            ==";selection==7?clr(176):clr(11);cout<<options[7];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[7];clr(12);cout<<"==\n";
		cout<<"            ==";selection==8?clr(176):clr(11);cout<<options[8];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[8];clr(12);cout<<"==\n";
		cout<<"            ==";selection==9?clr(176):clr(11);cout<<options[9];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[9];clr(12);cout<<"==\n";
		cout<<"            ==";selection==9?clr(176):clr(11);cout<<options[10];clr(12);cout<<"==";clr(176);cout<<" ";clr(12);cout<<"==";clr(11);cout<<desc[10];clr(12);cout<<"==\n";
		cout<<"            ==                                           ==";clr(176);cout<<" ";clr(12);cout<<"==                                           ==\n";
		cout<<"            ===============================================";clr(176);cout<<" ";clr(12);cout<<"===============================================\n";
		cout<<"            ";clr(176);cout<<"                                                                                               \n\n\n";clr(15);
		int c;
		do{
			c=getch();
		}while(c!=72&&c!=80&&c!=75&&c!=77&&c!=13&&c!=8&&c!=27);//will not continue until a valid input is found
		switch(c)
		{
		case UP:
			{//up
				if(selection==min) selection=max;
				else selection--;
				break;
			}
		case DOWN:
			{//down
				if(selection==max) selection=min;
				else selection++;
				break;
			}
		case RIGHT://right
		case ENTER:
			{//enter
				return selection-min;
			}
		case LEFT://left
		case BACK://back
		case ESC:
			{//esc
				return -1;
			}
		default:;
		}
	}while(true);
	return NULL;
}