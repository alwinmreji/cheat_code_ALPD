#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void staff();
void student();

int curpass;//30081999;
int i;
unsigned int n=50;
struct subject
{
  unsigned int semester;
  unsigned int credits;
  bool eligible;
  bool completed;
  bool core;
  char code[9];
  char name[50];
  char prerequisites[45];
  int nop;
}s[50];

void subjectdatabase()
{
//analog and digital circuits
s[0].semester=3;
s[0].credits=4;
s[0].core=1;
strcpy(s[0].code,"17EARC201");
//s[0].name="Analog and Digital Circuits");
//Mechanics of Materials
s[1].semester=3;
s[1].credits=4;
s[1].core=1;
strcpy(s[1].code,"17EARC202");
strcpy(s[1].name,"Mechanics of Materials");
//Algorithm Analysis and Program Design
s[2].semester=3;
s[2].credits=4;
s[2].core=1;
strcpy(s[2].code,"17EARC203");
strcpy(s[2].name,"Algorithm Analysis and Program Design");
//Statistics and integral transforms
s[3].semester=3;
s[3].credits=4;
s[3].core=1;
strcpy(s[3].code,"15EMAB201");
strcpy(s[3].name,"Statistics and integral transforms");
//Machine Design
s[4].semester=3;
s[4].credits=4;
s[4].core=1;
strcpy(s[4].code,"17EARC204");
strcpy(s[4].name,"Machine Design");
//Machine Drawing Lab
s[5].semester=3;
s[5].credits=4;
s[5].core=1;
strcpy(s[5].code,"17EARP202");
strcpy(s[5].name,"Machine Drawing Lab");
//Analog and digital circuits lab
s[6].semester=3;
s[6].credits=4;
s[6].core=1;
strcpy(s[6].code,"17EARP201");
strcpy(s[6].name,"Analog and Digital Circuits Lab");
//Programming lab
s[7].semester=3;
s[7].credits=4;
s[7].core=1;
strcpy(s[7].code,"17EARP203");
strcpy(s[7].name,"Programming Lab");
//
s[8].semester=4;
s[8].credits=4;
s[8].core=1;
strcpy(s[8].code, "SEM4SUB01");
//add name from subject list
//
s[9].semester=4;
s[9].credits=4;
s[9].core=1;
strcpy(s[9].code, "SEM4SUB02");
//add name from subject list
//
s[10].semester=4;
s[10].credits=4;
s[10].core=1;
strcpy(s[10].code, "SEM4SUB03");
//add name from subject list
//
s[11].semester=4;
s[11].credits=4;
s[11].core=1;
strcpy(s[11].code, "SEM4SUB04");
//add name from subject list
//
s[12].semester=4;
s[12].credits=4;
s[12].core=1;
strcpy(s[12].code, "SEM4SUB05");
//add name from subject list
//
s[13].semester=4;
s[13].credits=4;
s[13].core=1;
strcpy(s[13].code, "SEM4SUB06");
//add name from subject list
//
s[14].semester=4;
s[14].credits=4;
s[14].core=1;
strcpy(s[14].code, "SEM4SUB07");
//add name from subject list
//
s[15].semester=4;
s[15].credits=4;
s[15].core=1;
strcpy(s[15].code, "SEM4SUB08");
//add name from subject list
//
s[16].semester=4;
s[16].credits=4;
s[16].core=1;
strcpy(s[16].code, "SEM4SUB09");
//add name from subject list
//
s[17].semester=5;
s[17].credits=4;
s[17].core=1;
strcpy(s[17].code, "SEM5SUB01");
//add name from subject list
//
s[18].semester=5;
s[18].credits=4;
s[18].core=1;
strcpy(s[18].code, "SEM5SUB02");
//add name from subject list
//
s[19].semester=5;
s[19].credits=4;
s[19].core=1;
strcpy(s[19].code, "SEM5SUB03");
//add name from subject list
//
s[20].semester=5;
s[20].credits=4;
s[20].core=1;
strcpy(s[20].code, "SEM5SUB04");
//add name from subject list
//
s[21].semester=5;
s[21].credits=4;
s[21].core=1;
strcpy(s[21].code, "SEM5SUYB05");
//add name from subject list
//
s[22].semester=5;
s[22].credits=4;
s[22].core=1;
strcpy(s[22].code, "SEM5SUB06");
//add name from subject list
//
s[23].semester=5;
s[23].credits=4;
s[23].core=1;
strcpy(s[23].code, "SEM5SUB07");
//add name from subject list
//
s[24].semester=5;
s[24].credits=4;
s[24].core=1;
strcpy(s[24].code, "SEM5SUB08");
//add name from subject list
//
s[25].semester=5;
s[25].credits=4;
s[25].core=1;
strcpy(s[25].code, "SEM5SUB09");
//add name from subject list
//
s[26].semester=6;
s[26].credits=4;
s[26].core=1;
strcpy(s[26].code, "SEM6SUB01");
//add name from subject list
//
s[27].semester=6;
s[27].credits=4;
s[27].core=1;
strcpy(s[27].code, "SEM6SUB02");
//add name from subject list
//
s[28].semester=6;
s[28].credits=4;
s[28].core=1;
strcpy(s[28].code, "SEM6SUB03");
//add name from subject list
//
s[29].semester=6;
s[29].credits=4;
s[29].core=1;
strcpy(s[29].code, "SEM6SUB04");
//add name from subject list
//
s[30].semester=6;
s[30].credits=4;
s[30].core=1;
strcpy(s[30].code, "SEM6SUB05");
//add name from subject list
//
s[31].semester=6;
s[31].credits=4;
s[31].core=1;
strcpy(s[31].code,"SEM6SUB06");
//add name from subject list
//
s[32].semester=6;
s[32].credits=4;
s[32].core=1;
strcpy(s[32].code,"SEM6SUB07");
//add name from subject list

//
s[33].semester=7;
s[33].credits=4;
s[33].core=1;
strcpy(s[33].code,"SEM7SUB01");
//add name from subject list
//
s[34].semester=7;
s[34].credits=4;
s[34].core=1;
strcpy(s[34].code,"SEM7SUB02");
//add name from subject list
//
s[35].semester=7;
s[35].credits=4;
s[35].core=1;
strcpy(s[35].code,"SEM7SUB03");
//add name from subject list
//
s[36].semester=7;
s[36].credits=4;
s[36].core=1;
strcpy(s[36].code,"SEM7SUB04");
//add name from subject list
//
s[37].semester=7;
s[37].credits=4;
s[37].core=1;
strcpy(s[37].code,"SEM7SUB05");
//add name from subject list
//
s[38].semester=8;
s[38].credits=4;
s[38].core=1;
strcpy(s[38].code,"SEM8SUB01");
//add name from subject list
//
s[39].semester=8;
s[39].credits=4;
s[39].core=1;
strcpy(s[39].code,"SEM8SUB02");
//add name from subject list
//
s[40].semester=8;
s[40].credits=4;
s[40].core=1;
strcpy(s[40].code,"SEM8SUB03");
//add name from subject list
//ELECTIVE SUBECTS
s[41].semester=6;
s[41].credits=4;
s[41].core=0;
s[41].nop=1;
strcpy(s[41].code,"VER1ELE01");
strcpy(s[41].prerequisites,"SEM8SUB03");

s[42].semester=7;
s[42].credits=4;
s[42].core=0;
s[42].nop=1;
strcpy(s[42].code,"VER2ELE01");

s[43].semester=8;
s[43].credits=4;
s[43].core=0;
s[43].nop=1;
strcpy(s[43].code,"VER3ELE01");
return;
}
void checkprerequisites(int i)
{
  char comp[5];
  int j;
  printf("\n The prerequisites for this subject are: \n");
  printf("%s",s[i].prerequisites);
  printf("\n For the courses mentioned above, press Y if you have completed the course and N if you have not !IN SEQUENTIAL ORDER!\n");
  for(j=0;j<5;j++)
  {
    scanf("%c",&comp[j]);
    if(comp[j]=='n'||comp[j]=='N')
    {
    printf("\n You are not eligible for this course. Kindly complete all the prerequisite courses mentioned above before opting for this one\n");
    student();
    }
  }
  printf("\n You are eligible for this course! \n");
  student();
}
void changecode()
{
 char newcode[9];
 char currcode[9];
 printf("Enter the current code of the subject: \n");
 scanf("%s",currcode);
 printf("Enter the new code: \n");
 scanf("%s",newcode);
 for(i=0;i<60;i++)
{
 if(strcmp(s[i].code,currcode)==0)
 printf("\n Subject found: \n Subject code \t Credits");
 printf("\n%s\t%d",s[i].code,s[i].credits);
 strcpy(s[i].code,newcode);
 printf("\nSubject found: \n Subject code \t Credits");
 printf("\n%s\t%d",s[i].code,s[i].credits);
 staff();
}
 printf("Subject code not found \n");
 staff();
}

void search()
{
  char searchc[9];
  printf("Enter the code of the subject: \n");
  scanf("%s",searchc);
  for(i=0;i<60;i++)
  {
  if(strcmp(s[i].code,searchc)==0)
  {
  printf("\nSubject found: \n Subject code \t Credits");
  printf("\n%s\t%d",s[i].code,s[i].credits);
  staff();
  }
  }

  printf("Subject not found \n");
  staff();
}
void setprerequisites()
{
unsigned int n,i;
char prereq[9];
printf("Enter the code of the course: \n");
char searchcode[9];
scanf("%s",searchcode);
for(i=0;i<60;i++)
{
if(strcmp(s[i].code,searchcode)==0&&s[i].core)
{
  printf("\n This is a core subject \n");
  staff();
}
else if(strcmp(s[i].code,searchcode)==0&& !s[i].core)
{
  printf("Subject found: \n Subject code \t Credits");
  printf("\n%s\t%d",s[i].code,s[i].credits);
  printf("Enter the number of prerequisites for this course");
  scanf("%d",&n);
  s[41].nop=n;
  printf("Enter prerequisite subject codes: (Use a space or comma if there are multiple)\n");
  scanf("%s",prereq);
  strcpy(s[i].prerequisites,prereq);

  staff();
}
}

printf("\n Subject not found \n");
staff();

}
void student()
{

unsigned int sem;
unsigned int schoice;
char searchcode[9];
printf("I would like to: \n 1-See a list of subjects for my semester. \n 2-Check if I am eligible for a certain course \n");
scanf("%u",&schoice);
switch(schoice)
{
case 1:printf("Which semester are you currently in? \n");
       scanf("%u",&sem);
if(sem<6)
{
printf("All the subjects in your semester are core subjects. The list of subjects for semster %d are:", sem);
for(i=0;i<50;i++)
{
  if(s[i].semester==sem)
  puts(s[i].code);
  printf("\t");
}
}
else if(sem>=6)
{
printf("The following are core subjects for this semster: \n Subject code \t Credits");
for(i=27;i<50;i++)
{
  if(s[i].semester==sem&& s[i].core)
  printf("\n%s\t%d",s[i].code,s[i].credits);
}
printf("\nThe following are elective subjects for this semester: \n Subject code \t Credits");
for(i=0;i<n;i++)
{
  if(s[i].semester==sem&& !s[i].core)
  printf("\n%s\t%d",s[i].code,s[i].credits);
}
}
student();
case 2:printf("Enter elective subject code \n");
	     scanf("%s",searchcode);
	     for(i=0;i<n;i++)
		     {
		      if(strcmp(searchcode,s[i].code)==0 && !s[i].core)
		      {printf("\n%s\t%d \t%s",s[i].code,s[i].credits,s[i].prerequisites);
          checkprerequisites(i);}
         }
       printf("The subject entered is not an elective subject \n");
case 3: main();

default:student();
}
}
void changepass()
{
  unsigned int pass;
  unsigned int newpass;
  bool passcheck;
  printf("Enter PASSWORD: \n");
  scanf("%u",&pass);
  if(pass==curpass)
  passcheck=1;
  if(passcheck)
  printf("Enter new PASSWORD \n");
  scanf("%u",&newpass);
  curpass=newpass;
  printf("PASSWORD changed! \n");
  return;
}
void staff()
  {
    unsigned int choice;
    char code[9];
    printf("\n I would like to: \n 1-Change subject code \n 2-Search subject \n 3-Set Prerequisites for a course \n 4-Change master password \n 5-Return to homescreen");
    scanf("%u",&choice);
    switch(choice)
    {
      case 1:  changecode();
               break;
      case 2:  search();
               break;
      case 3:  setprerequisites();
               break;
      case 4:  changepass();
               break;
      case 5:  main();
      default: scanf("%s",code);
      for(i=0;i<n;i++)
        {
         if(strcmp(code,s[i].code)==0 && !s[i].core)
         {printf("\n%s\t%d \t%s",s[i].code,s[i].credits,s[i].prerequisites);
         }
        }
  }
}

void main()
{
  unsigned int choice;
  unsigned int pass;
  subjectdatabase();
  printf("I am : \n 1-KLETECH Student \n 2-KLETECH Staff \n");
  scanf("%u",&choice);
  switch (choice)
  {
    case 1: student();
            break;
    case 2: printf("Enter PASSWORD: \n");
            scanf("%u",&pass);
            bool passcheck;
            curpass=100;
            if(pass==curpass)
            passcheck=1;
            if(passcheck)
            staff();

            break;
    default:student();
  }
 }
