// student detials dashboard
#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
    char branch[10];
    float marks;
};
void addStudent();
void displayStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;
    while (1)
    {
        printf("\n======STUDENT CRUD SYSTEM========\n");

        printf("1.Add student\n");
        printf("2.Display student\n");
        printf("3.Update student\n");
        printf("4.Delete student\n");
        printf("5.exit\n");
        printf("Enter the Choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudent();
            break;
        case 3:
            updateStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            return 0;
        default:
            printf("invalid choice!\n");
        }
    }
}

void addStudent()
{
    FILE *fp = fopen("students.dat", "ab");
    struct student s;
    printf("Enter the roll:");
    scanf("%d", &s.roll);

    printf("Enter the Name:");
    scanf("%s", &s.name);

    printf("Enter the branch:");
    scanf("%s", &s.branch);

    printf("Enter the Marks:");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);
    printf("Student added Successfully\n");
}
void displayStudent()
{
    FILE *fp = fopen("students.dat", "rb");
    struct student s;

    if (!fp)
    {
        printf("No data found.\n");
        return ;
        
        
    }
    printf("\n----- STUDENT RECORD-----\n");

    while (fread(&s, sizeof(s), 1, fp))
    {
        printf("Roll:%d Name:%s Branch:%s Marks:%.2f\n",
               s.roll, s.name, s.branch, s.marks);
    }
    fclose(fp);
}

void updateStudent()
{
    FILE *fp =fopen("students.dat","rb");
    FILE *temp =fopen("temp.dat","wb");
    struct student s;
    int rno, found =0;

    printf("Enter roll to update: ");
    scanf("%d",&rno);
    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.roll ==rno){
            found =1;
        printf("enter the new name: ");
        scanf("%s",s.name);
        printf("enter the new branch: ");
        scanf("%s", s.branch);
        printf("enter the new marks: ");
        scanf("%f", &s.marks);

        }
        fwrite(&s,sizeof(s), 1,temp);
    }
    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");
    if(found)
    printf("record updated\n");
    else
    printf("record not found\n");

}    
void deleteStudent(){
    FILE *fp =fopen("students.dat","rb");
    FILE *temp =fopen("temp.dat","wb");

    struct student s;
    int rno, found =0;

    printf("Enter roll to delete: ");
    scanf("%d",&rno);
    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.roll ==rno){
            found =1;
            continue;
        }
        fwrite( &s, sizeof(s), 1,temp);
    }
    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");
    if(found)
    printf("record deleted\n");
    else
    printf("record not found\n");



}