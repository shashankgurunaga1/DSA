/*#include <stdio.h>
#include <stdlib.h>
int main()
{
// Open two files to be merged
FILE *fp1 = fopen("file1.txt", "a");
FILE *fp2 = fopen("file2.txt", "r");
char c;
if (fp1 == NULL || fp2 == NULL)
{
puts("Could not open files");
exit(0);
}
fputc(' ',fp1);
while ((c = fgetc(fp2)) != EOF)
fputc(c, fp1);
printf("File1 and File2 Merged please check file1");

fclose(fp1);
fclose(fp2);
getch();
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    static int array[10][10];
    int i=0,j=0,m,n,sum=0;
    printf("Enter the order of the matrix");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",array[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=array[i][j];
        }
        printf("Sum of the row is",sum);
    }
    sum=0;

    //sum of  all the elements in the column
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum+=array[j][i];
        }
        printf("Sum of the column is",sum);
    }
    sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            sum+=array[j][i];
        }
    }
    printf("Sum of all the elements in the matrix is",sum);
    sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum+=array[i][j];
            }

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
             sum+=array[i][j];
        }
    }
    printf("Sum of all the elements in the diagonal matrix is",sum);
}

  
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Employees{
    int emp_id;
    char name[50];
    int salary;
};

void display(struct Employees emp1[],int n){
int i=0;
printf("The employee details are as follows\n");
for(i=0;i<n;i++){
printf("Employee Id:%d\n",emp1[i].emp_id);
printf("Employee Name:%s\n",emp1[i].name);
printf("Employee Salary:%d\n",emp1[i].salary);
}
}
void displaysalgreaterthanfifteeen(struct Employees emp1[],int n1){
printf("------Employees who have salary greater than 15000--------");
printf("Employee Id:%d\n",emp1[n1].emp_id);
printf("Employee Name:%s\n",emp1[n1].name);
printf("Employee Salary:%d\n",emp1[n1].salary);
}
void main(){
    const int n;
    int i=0;
    int n1=0;
    struct Employees emp1[10];
    printf("Enter the number of employees");
    scanf("%d",&n);
    printf("Enter the details of all the employees\n\n");
    for(i=0;i<n;i++){
        printf("Enter the id of the employee %d:\t",i+1);
        scanf("%d",&emp1[i].emp_id);
        printf("\nEnter the name of the employee %d:\t",i+1);
        scanf("%s",emp1[i].name);
        printf("\nEnter the salary of the employee %d:\t",i+1);
        scanf("%d",&emp1[i].salary);

    }
    display(emp1,n);
    for(i=0;i<n;i++){
         if(emp1[i].salary>15000){
            n1=i;
            displaysalgreaterthanfifteeen(emp1,n1);
         }
    }
    
    getch();
}

 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int Matrix_A[10][10],Matrix_B[10][10],Matrix_out[10][10]={0};
    int Matrix_Trans[10][10]={0};
    int i,j,k,m,n,p,q;
    printf("Enter the number of rows and columns in Matrix A");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns in Matrix B");
    scanf("%d%d",&p,&q);
    if(n!=p){
        printf("Matrix Multiplication is not allowed");
        return;
    }
    else{
        printf("Enter the elements of matrix A");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&Matrix_A[i][j]);
            }
        }
        printf("Enter the elements of Matrix B");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&Matrix_B[i][j]);
            }
        }
        //for matrix multiplication
        for(i=0;i<m;i++){
        for(j=0;j<q;j++){
        for(k=0;k<p;k++){
        Matrix_out[i][j] += Matrix_A[i][k]*Matrix_B[k][j];

        }
        }
        }
        printf("\nResult of Matirx Multiplication:\n");
        //displaying matrix multiplication
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ",Matrix_out[i][j]);

            }
            printf("\n");

        }
        printf("Transverse of the matrix\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                Matrix_Trans[j][i]=Matrix_out[i][j];
            }
        }
        //Displaying the transpose of the matrix
        for(i=0;i<q;i++){
            for(j=0;j<m;j++){
                printf("%d ",Matrix_Trans[i][j]);
            }
            printf("\n");
        }
    }
     getch();
}


// Bubble Sort //
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int array[100],num,c,i,swap;
    printf("Enter the number of elements in the matrix");
    scanf("%d",&num);
    for(c=0;c<num;c++){
       scanf("%d",&array[c]);
    }
    for(c=0;c<num;c++){
        for(i=0;i<num-c-1;i++){
            if(array[i]>array[i+1]){
                swap=array[i];
                array[i]=array[i+1];
                array[i+1]=swap;
            }
        }
    }
    printf("Ascending Order of elements is");
    for(c=0;c<num;c++){
        printf("%d ",array[c]);
    }
}


//Deletion of an element in an array//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int array[100],position,i,m,n,k;
    //clrscr();
    printf("Enter the number of elements in  the array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the position of the element that you want to delete ");
    scanf("%d",&position);
     
    if(position>n+1){
        printf("The position is incorrect and out of limit");
    }
    else{
    k=array[position-1];
    for(i=position-1;i<n-1;i++){
        array[i]=array[i+1];
    }
    //Remaining Elements
    for(i=0;i<n-1;i++){
        printf("%d ",array[i]);
       
    }
    printf("\nElement %d has been deleted at %d ",k,position);
    }
}


//Check whether the string is  a palindrome or not//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,pal_len=0,len=0,n;
    char pal_str[100];
    gets(pal_str);
    for(i=0;i<100;i++){
            if(pal_str[i]=='\0'){
           break;
            }
            len++;
    }
    for(i=0;pal_str[i]!='\0';i++){
        if(pal_str[i]==pal_str[len-1-i]){
            pal_len++;
        }
    }
    if(pal_len==len){
        printf("The string %s is a palindrome",pal_str);
    }
    else{
        printf("The string %s is not a palindrome",pal_str);
    }
}


//Greatest and smallest number in the array//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int array[10],min_Ele,max_Ele,max_Pos,min_Pos,i,n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the elements in the matrix");
    for(i=0;i<n;i++){
         scanf("%d",&array[i]);
    }
    //Setting up the minimum and the maximum element to initialize it to the first element
    min_Ele=array[0];
    max_Ele=array[0];
    //for getting the minimum element in the array
    for(i=0;i<n;i++){
        if(array[i]<min_Ele){
            min_Ele=array[i];
        }
        if(array[i]>max_Ele){
            max_Ele=array[i];
        }
    }
    printf("The maximum element in the array is %d and the minimum element in the  array is %d",max_Ele,min_Ele);
}


//Binary Search Method
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int array[10],n,i,mid,low,high,m,c;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    low=0;
    high=n-1;
    printf("Enter the value to be searched ");
    scanf("%d",&m);
    while(low<=high){
         mid=(low+high)/2;
         if(m==array[mid]){
           c=1;
           printf("\n %d found at %d position \n",m,mid+1);
           break;
         }
         else if(m<array[mid]){
            high=mid-1;
         }
         else{
            low=mid+1;
         }
    }
    

}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define SIZE 100
void main(){
    int n,i=0;
    float array[SIZE],sum,mean,variance,deviation;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++){
       scanf("%f",&array[i]);
    }
    //finding the mean
    for(i=0;i<n;i++){
        sum+=array[i];
    }
    mean=(sum/n);
    printf("\nMean(Average)= %f",mean);
    //finding the variance value
    sum=0;
    for(i=0;i<n;i++){
        sum+=(array[i]-mean)*(mean+array[i]);
    }
    variance=sum/n;
    printf("\nVariance of the elements in the array=%f",variance);
    sum=0;
    deviation=sqrt(variance);
    printf("\nThe deviation of the elements in the array=%f",deviation);
    getch();
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 100
void main(){
    int n,i,array[SIZE],m,flag=0,position;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Eter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter  the element to be searched");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(m==array[i]){
            position=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The element %d found at position %d",m,position+1);
    }
}


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main(){
    int n,m;
    printf("Enter two numbers");
    scanf("%d %d",&m,&n);
    if(m<=0||n<=0){
        printf("Invalid input");
    }
    else{
        if(m>n){
            m=m-n;
        }
        else{
            n=n-m;
        }
        printf("GCD= %d \n", n);
    }
    getch();
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
void main(){
    int n,i;
    printf("Please enter limit of fibonacci series");

    scanf("%d",&n);
    printf("Fibonanci series terms are:\n");
    for(i=0;i<=n;i++){
        printf("%d\n",fib(i));
    }
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main(){
    long num,temp,reverse;
    int rem;
    printf("Input a number");
    scanf("%d",&num);
    temp=num;
    reverse=0;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;

    }
    if(temp==reverse){
        printf(" %d is a palindrome",temp);
    }
    else{
        printf("%d is not a palindrome",temp);
    }

}
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main(){
    float a,b,c,d,x1,x2,realpart,imagpart,x;
    printf("Enter the roots of the quadratic equation");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0){
        x=-b/c;
        printf("The only root  x=%7.3f",x);

    }
    d=b*b-4*a*c;
    if(d>0){
        printf("real and distinct roots are");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%7.3f and x2=%7.3f",x1,x2);
    }
    else if(d==0){
        printf("repeated roots are");
        x1=(-b/(2*a));
        x2=x1;
        printf("x1=x2=%7.3f",x1,x2);

    }
    else{
        d=sqrt(d);
        realpart=(-b/(2*a));
        imagpart=(d/(2*a));
        printf("x1=%7.3f+i%7.3f",realpart,imagpart);
        printf("x2=%7.3f-i%7.3f",realpart,imagpart);

    }
    getch();
}
