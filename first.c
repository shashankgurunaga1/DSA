
/*

#include<stdio.h>
int main(){
/*float var[5]={1.1f,2.2f,3.3f};
float(*ptr)[5];
ptr=&var;
printf("Value inside ptr : %u",ptr);
ptr=ptr+1;
printf("Value inside ptr : %u",ptr);
return 0;
};
float *ptr1=(float *)1000;
ptr1=ptr1+1;
printf("\nDifference location : %u",ptr1);
printf("\n Difference : %d", *ptr1);
return 0;
}

#include<stdio.h>

struct Student
{
int *ptr; //Stores address of integer Variable
char *name; //Stores address of Character String
}s1;

int main()
{

int roll = 20;
s1.ptr = &roll;
s1.name = "Pritesh";

printf("\nRoll Number of Student : %d",*s1.ptr);
printf("\nName of Student : %s",s1.name);

return(0);
}


//factorial//


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int fact(int n){
    int res1=1;
    if(n==0){
        return 1;
    }
    
    else{
     return(n*fact(n-1));
    }
}
void main(){
    int num,ans=0;
    printf("Enter the value of the number for which you want to find the factorial");
    scanf("%d",&num);
    ans=fact(num);
    printf("The answer is =%d",ans);
}



// cube//
#include<stdio.h>
#include<conio.h>
#include<math.h>

int cube(int n){
    
    return c;
}
void main(){
    int n,ans=0;
    printf("Enter the value of the number for which you are going to find  the cube :\n");
    scanf("%d",&n);
    ans=cube(n);
    printf("The cube of the  number is =%d ",ans);
}


//Ascending order sort of an array//
#include<stdio.h>
#include<conio.h>

void main(){
      int n,i=0,j=0;
      int temp=0;
      int arr[n];
      printf("Enter the number of elements in the array");
      scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      printf("Elements of original array: \n");    
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);     
    }   
      for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
      }
      printf("Elements of the changed array:");
      for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
      }
      
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n;
    int sum=0;
    int temp=0;
    int rem=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
    }
    if(sum==temp){
        printf("The number %d is an armstrong number",temp);
    }
    else{
        printf("The number %d is not an armstrong number",temp);
    }
}



//printing all  the letters from a to z in the for loop
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int i=0,j=0;
    char c;
    printf("The alphabets in Capital letter Order:\n");
    for(i=65;i<=90;i++){
        c=(char)i;
        printf("%c\n",c);
    }
    printf("The alphabets in Normal letter form Order:\n");
    for(i=97;i<=122;i++){
        c=(char)i;
        printf("%c\n",c);
    }
    
}



//reverse string//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void reverse(char *x, int start, int end){
    char c;
    if (start >= end)
       return;
    c = *(x+start);
    *(x+start) = *(x+end);
    *(x+end) = c;

    reverse(x, ++start, --end);
    
}
int main(){
    char str[100];
    printf("Enter the string");
    scanf("%s",&str);
    reverse(str,0,strlen(str)-1);
    printf("The reversed string is %s ",str);
    return 0;
}


//palindrome//


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main(){
    int n;
    int temp=0;
    int rem=0;
    int num=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        num=num*10+rem;
        n=n/10;
    }
    if(num==temp){
        printf("The number %d is a palindrome",temp);
    }
    else{
        printf("The number %d is not a palindrome",temp);
    }
}



//gcd//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main(){
    int n1,n2,i=0,j=0;
    int gcd=0;
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i){
          if((n1%i==0)&&(n2%i==0)){
               gcd=i;
          }
    }
    printf("The gcd of %d and %d is %d",n1,n2,gcd);
}


//lcm//
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void main(){
    int n1,n2,max=0;
    int lcm=0;
    bool x=true;
    scanf("%d %d",&n1,&n2);
    max=(n1>n2) ? n1:n2;
    while(x==true){
        if((max%n1==0) &&(max%n2==0)){
            lcm=max;
            printf("The lcm of input numbers %d and %d is %d",n1,n2,lcm);
            break;
        }
    }
}

// maximum element in array 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main(){
    int n,i=0,max=0;
    int arr[n];
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The maximum element in the array is %d",max);
}

//Bubble Sort 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main(){ 
       int n,i=0,c=0,temp=0;
       int arr[n];
       printf("Enter the number of elements in the array");
       scanf("%d",&n);
       for(i=0;i<n;i++){
           scanf("%d",&arr[i]);
       }
       printf("The unsorted initial array is");
       for(i=0;i<n;i++){
          printf("%d",arr[i]);
       }
       for(c=0;c<n-1;c++){
           for(i=0;c<n-i-1;c++){
            if(arr[i]>arr[i+1]){
                  temp=arr[i];
                  arr[i]=arr[i+1];
                  arr[i+1]=temp;
            }
           }
       }
       printf("The sorted array  is");
       for(i=0;i<n;i++){
        printf("%d",arr[i]);
       }
       }


//Largest of three numbers using pointers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main(){
    int *max,a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)){
        if(b>c){
            max=&a;
        }
        
    }
    else if(b>a){
             if(c>b){
                max=&c;
             }
             else if(a>c){
                max=&b;
             }
    }
    else if(b>c){
        if(c>a){
            max=&b;
        }
    }
    printf("The maximum number out of the three is %d",*max);
}

// binary to decimal //
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main(){
    int bin,rem=0,dec=0,temp=0,temp1=0;
    printf("Enter the binary format to be coded to decimal form");
    scanf("%d",&bin);
    temp=bin;
    while(bin!=0){
           rem=bin%10;
           dec+=rem*pow(2,temp1);
           bin=bin/10;
           temp1++;
    }
    printf("The decimal form of %d is %d",temp,dec);
}


//permutation //
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int fact(int n){
    
    if(n==0){
        return 1;
    }
    
    else{
     return(n*fact(n-1));
    }
}
void main(){
    int n,r,npr;
    printf("Enter the number for permutation");
    scanf("%d",&n);
    printf("Enter the  value of r");
    scanf("%d",&r);
    npr=fact(n)/fact(n-r);
    printf("The value of npr is %d for the numbers %d,%d",npr,n,r);

}

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
union employee
{
int id;
char name[20];
}e1;
int main(int argc, char *argv[])
{

e1.id = 10;

strcpy(e1.name,"Pritesh");
e1.id = 20;

printf("\nID : %d",e1.id);
printf("\nName : %s",e1.name);
return 0;
}

// question 1 //
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct employee{
    char name[20];
    int wage;
    int wdays;
}e1;
int main(){
    scanf("%s",&e1.name);
    scanf("%d",&e1.wage);
    scanf("%d",&e1.wdays);
    printf("Name of the employee: %s \n",e1.name);
    printf("Wage of the employee: %d \n",e1.wage);
    printf("Working days of the employee: %d \n",e1.wdays);
}

//question 2//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

struct employee{
    char name[20];
    int wage;
    int wdays;
}e1[2];
int main(){
    int i=0;
    for(i=0;i<2;i++){
    scanf("%s",&e1[i].name);
    scanf("%d",&e1[i].wage);
    scanf("%d",&e1[i].wdays);

    }
    for(i=0;i<2;i++){
        printf("Employee %d \n",i+1);
        printf("Name of the employee: %s \n",e1[i].name);
        printf("Wage of the employee: %d \n",e1[i].wage);
        printf("Working days of the employee: %d \n",e1[i].wdays);
    }
}

//question 3//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
struct employee{
     int eno;
     char ename[20];
     int salary;
}emp[100];

void main(){
    int n,i=0;
    printf("Enter the number of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&emp[i].eno);
        scanf("%s",&emp[i].ename);
        scanf("%d",&emp[i].salary);
    }
    for(i=0;i<n;i++){
        printf("Employee %d \n",i+1);
        printf("Id of the employee: %d \n",emp[i].eno);
        printf("Name of the employee: %s \n",emp[i].ename);
        printf("Salary of the employee: %d \n",emp[i].salary);
    }
}

//question 4//
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) // command line arguments
{
if(argc!=5)
{
printf("Arguments passed through command line " \
"not equal to 5");
return 1;
}


printf("\n Program name : %s \n", argv[0]);
printf("1st arg : %s \n", argv[1]);
printf("2nd arg : %s \n", argv[2]);
printf("3rd arg : %s \n", argv[3]);
printf("4th arg : %s \n", argv[4]);
printf("5th arg : %s \n", argv[5]);

return 0;
}


//reading the first line in a file//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("File cannot be opened");
        exit(1);
    }
    fscanf(fptr,"%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}

//writing into the file
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
    char ch[1000];
    FILE *fptr;
    fptr = fopen("program1.txt", "w");
    if (fptr == NULL) {
        printf("File cannot be opened");
        exit(1);
    }
    printf("Enter the text you want to put into the file");
    fgets(ch,sizeof(ch),stdin);
    printf("%s",ch);
    fclose(fptr);
    return 0;
}

//Selection sort
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);

    return 0;
}

#include<stdio.h>
int main(){
    int i=3;
    int j=i++;
 printf("i=%d j=%d \n",i,j);
    i=3;
    int k=++i;
   
    printf("i=%d k=%d",i,k);
    return 0;
}


//Structure in a Structure//
#include<stdio.h>
#include<conio.h>
struct Employee{
    int emp_id;
    char emp_name[20];
    int salary;
};
struct Organisarion{
    int org_id;
    char org_name[20];
    struct Employee emp[4];
}org1;
int main(){
    int n,i=0;
    printf("Enter the organiszation ID :");
    scanf("%d",&org1.org_id);
    printf("Enter the organization name :");
    scanf("%s",&org1.org_name);
    printf("Enter the number of employees");
    scanf("%d",&n);
    printf("Enter the employee datails ");
    
    for(i=0;i<n;i++){
        printf("Enter the employee id");
        scanf("%d",&org1.emp[i].emp_id);    
        printf("Enter the employee name");
        scanf("%s",&org1.emp[i].emp_name); 
        printf("Enter the employee's salary");
        scanf("%d",&org1.emp[i].salary); 

    }
    printf("Organisation Name=%s\n",org1.org_name);
    printf("Organization Id=%d\n",org1.org_id);
    for(i=0;i<n;i++){
        printf("Employee %d\n",i+1);
        printf("Employee ID=%d\n",org1.emp[i].emp_id);    
        printf("Employee Name=%s\n",org1.emp[i].emp_name); 
        printf("Employee's Salary=%d\n",org1.emp[i].salary); 

    }
    return 0;

}

//structure in function
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct Employee{
    
    char emp_name[100];
    int days;
    int salary;
    float amount;
};
void getSalary(struct Employee *emp1,char *name,int day,int sal){
    int totalsalary=1;
    strcpy(emp1->emp_name,name);
    emp1->days=day;
    emp1->salary=sal;
    emp1->amount=(float)((emp1->salary)*day);
}
int main(){
    char name[50];
    int day;
    int sal;
    struct Employee emp1;
    printf("Enter the name of the employee");
    scanf("%s",name);
    printf("Enter the number of days the employees worked");
    scanf("%d",&day);
    printf("Enter the salary");
    scanf("%d",&sal);
    getSalary(&emp1,name,day,sal);
    printf("%s received a salary of %f for %d days",emp1.emp_name,emp1.amount,emp1.days);


    return 0;
}


// binary search //
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main(){
    int n,arr[10],mid=0,low=0,high=0,flag=0,i=0,num=0;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the elements into the array");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    low=0,high=n-1;
    mid=(int)((low+high)/2);
    printf("Enter the number to be searched");
    scanf("%d",&num);
    while(low<=high){
        if(num==arr[mid]){
           flag=1;
           printf("Element %d found at position %d ",num,mid+1);
           break;
        }
        else if(num<arr[mid]){
                high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    getch();

}
*/
//selection sort//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main(){
    int n,l,i,j,k,c;
    int arr[n];
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        l=i;
        for(j=i+1;j<n;j++){
             if(arr[l]>arr[j]){
                l=j;
             }
        }
        int temp=arr[l];
        arr[l]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

   
}

