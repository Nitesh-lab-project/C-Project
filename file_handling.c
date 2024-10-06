#include<stdio.h>
#include<conio.h>

void insert_record();
void display_record();
void search_record();
void del_record();
void update_record();
void sort_record();

struct student{
    int roll;
    int sec[10];
    char Name[40];
    int marks;
    float grade;
};
 
  struct student s;
  void main(){
    int ch;
    clrscr();

    while(ch!=7){
        clrscr();
        printf("\t *************************************\n");
        printf("\t WELCOME TO STUDENT MANAGEMENT PROGRAM\n");
        printf("\t *************************************\n");

        printf("\t**** AVAILABLE FUNCTIONALITIES *****\n\n\n");
        printf("\t\t1: Insert student record\n");
        printf("\t\t1: Display student record\n");
        printf("\t\t1: Search student record\n");
        printf("\t\t1: Delete student record\n");
        printf("\t\t1: Update student record\n");
        printf("\t\t1: Sort student record\n");
        printf("\t\t1: Exit\n\n");
        printf("\t\tEnter your choice:");
        scanf("%d",ch);
        switch(ch){
            case 1: cls();
                insert_record();
                break;
            case 2: cls();
                display_record();
                break;
            case 3: cls();
                 search_record();
                 break;
            case 4: cls();
                 del_record();
                 break;
            case 5: cls;
                update_record();
                break;
            case 6: cls();
               sort_record();
               break;
            case 7: Exit(1);
            default:
                printf("\n\t\t Wrong choice Entered");
        }
        printf("\n\t\tPress any key to continue");
        getch();
    }
  }

  void insert_record(){
    FILE *fp;
    fp=fopen("Stu.txt","ab");
    if(fp==NULL){
        printf("\n\t\tError Cannot Open The file!!!");
        return;
    }
    printf("\t ****Previous Stores Data ****");
    display_record();

    printf("\n\n\t**** ENTER NEW STUDENT DATA ****\n\n");
    printf("\n\t\tEnter Student Roll Number: ");
    scanf("%d",&s.roll);
    fflush(stdin);
    printf("\n\t\tEnter Student Name: ");
    gets(s.Name);
    printf("\n\t\tEnter Student Section: ");
    scanf("%d",&s.sec);
    printf("\n\t\tEnter Student Total Marks: ");
    scanf("%d",&s.marks);
    printf("\n\t\tEnter Student grade: ");
    scanf("%d",&s.grade);
    fwrite(&s,sizeof(s),1,fp);
    {
        printf("\n\n\t !!! Student Record Insert Successfully\n");
    }
    flcose(fp);
    printf("\n\t\t Updated Record !!\n");
    display_record();

  }

  void display_record(){
    FILE *fp;
    fp=fopen("Stu.txt","ab");
    if(fp==NULL){
        printf("\n\t\tError Cannot open the file !!!");
        return;
    }

    printf("\n\n\t ***** Student Details Are Follow *****\n");
    printf("\nRoll NO\tName of Student\tSection\t\tMarks\t\tGrade\n\n");
    while(fread(&s,sizeof(s),1,fp)==1){
        printf("%d\t%s\t%s \t\t%d\t%fn",s.roll,s.Name,s.sec,s.marks,s.grade);
    }
    fclose(fp);
  }

  void search_record(){
    int ro,flag=0;
    FILE *fp;
    fp=fopen("Stu.txt","ab");
    if(fp==NULL){
        printf("\n\t\tError Cannot open the File!!!");
        return;
    }
    printf("\n\n\tEnter Student Roll Number which you want to search");
    scaf("%d",&ro);
    while(fread(&s,siszeof(s),1,fp)>0 && flag==0){
        if(s.roll==ro){
            flag=1;
            printf("\n\n\tSearch Successful find student record is as follow");
            printf("\nRoll Number of student\tSection\t\tMarks\t\tGrade");
            
        }
    }
  }