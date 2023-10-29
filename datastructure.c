#include <stdio.h>
#include <math.h>
#include<string.h>
/*Arrays*/
// void main()
// {
/*
ques-1
*/
// int n;
// printf("Enter no. of elements:");
// scanf("%d",&n);
// int a[n];
// for(int i=1;i<=n;i++)
// {
//     scanf("%d",&a[i]);
// }
// for(int i=1;i<=n;i++)
// {
//     printf("%d",a[i]);
// }
/*
Ques-2
*/
//    {
//     int n;
//     printf("Enter no. of elements:");
//     scanf("%d",&n);
//     int a[n+1];
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int p;
//     printf("Enter the position where you want to enter a number:");
//     scanf("%d",&p);
//     int nu;
//     printf("Enter a number:");
//     scanf("%d",&nu);
//     for(int i=n+1;i>=p;i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[p]=nu;
//     for(int i=1;i<=n+1;i++)
//     {
//         printf("%d",a[i]);
//     }
// }
/*
Ques-3
*/

// int n;
// printf("Enter no. of elements:");
// scanf("%d",&n);
// int a[n+1];
// for(int i=1;i<=n;i++)
// {
//     scanf("%d",&a[i]);
// }

// int nu,p=0;
// printf("Enter a number:");
// scanf("%d",&nu);
// int i=n;
// while(a[i]>nu)
// {
//      a[i+1]=a[i];
//      i--;
//      p++;
// }
// a[p]=nu;
// for (int i=1;i<=n+1;i++)
// {
//     printf("%d",a[i]);
// }
/*
Ques-4
*/
// int n;
// printf("Enter the size of the array:");
// scanf("%d",&n);
// int a[n];
// printf("Enter the elemnts of the array:");
// for (int i = 1; i <= n; i++)
// {
//     scanf("%d",&a[i]);
// }
// int nu;
// printf("Enter the element you want to delete:");
// scanf("%d",&nu);
// for (int i = 1; i <= n; i++)
// {
//   if (a[i]==nu)
//   {
//     for (int j=i; j <= n; j++)
//     {
//        a[j]=a[j+1];
//     }
//   }

// }
// for (int i = 1; i < n; i++)
// {
//   printf("%d",a[i]);
// }
/*
Ques-5
*/
// int n;
// printf("Enter the size of array:");
// scanf("%d",&n);
// int a[n];

// for (int i = 0; i < n; i++)
// {
//     scanf("%d",&a[i]);
// }
// int p,b;
// for (int i = 0; i < n; i++)
// {
//     if (a[i]+1!=a[i+1])
//     {
//         p=a[i+1]-1;
//         break;
//     }
// }
// printf("%d",p);
/*
Ques-6
*/
// int n;
// printf("Enter the size of the array:");
// scanf("%d",&n);
// int a[n];
// for (int i = 1; i <= n; i++)
// {
//   scanf("%d",&a[i]);
// }
// int c;

// for(int j=1;j<=n;j++)
// {
//   c=0;
// for (int i = 1; i <= n; i++)
// {
//   if (a[i]==a[j])
//   {
//     c++;
//   }

// }
// if (c==1)
// {
//   printf("%d is not repeated!\n",a[j]);
// }
// else
// printf("%d is repeated %d times\n",a[j],c);
// }
// }
/*
Ques-7
*/
// int n;
// printf("Enter the size of the array:");
// scanf("%d",&n);
// int a[n],temp;
// printf("enter the elements:");
// for (int i = 0; i < n; i++)
// {
//     scanf("%d",&a[i]);
// }
// for (int i = 0,j=n-1; i<=n/2,j>=n/2; i++,j--)
// {
//     temp=a[i];
//     a[i]=a[j];
//     a[j]=temp;

// }
// printf("Th reversed array is:");
// for (int i = 0; i < n; i++)
// {
//     printf("%d",a[i]);
// }
// }
/*
Ques-8
*/
// int n;
// printf("Enter the size of array1:");
// scanf("%d",&n);
// int a[n];
// printf("Enter the elements of array1:");
// for (int i = 0; i < n; i++)
// {
//     scanf("%d",&a[i]);
// }
// int m;
// printf("Enter the size of array2:");
// scanf("%d",&m);
// int b[m];
// printf("Enter the elements of array2:");
// for (int i = 0; i < m; i++)
// {
//     scanf("%d",&b[i]);
// }
// int c[m+n];
// int o=0,j=0,k=0;
// while (o<n && j<m)
// {
// if (a[o]<b[j])
// {
//     c[k]=a[o];
//     o++;
//     k++;
// }
// else
// {c[k]=b[j];
// j++;
// k++;}
// }
// if (n<m)
// {
//     while (j<m)
//     {
//         c[k]=b[j];
//         k++;
//         j++;
//     }
// }
// else
//     {

//         while (o<n)
//         {
//             c[k]=a[o];
//             o++;
//             k++;

//         }

//     }

// for (int l = 0; l < m+n; l++)
// {
//     printf("%d",c[l]);
// }
// }
/*


// ques-9
// int m;
// printf("Enter size of array1:");
// scanf("%d",&m);
// int n;
// printf("Enter the size of array2:");
// scanf("%d",&n);
// int a[m],b[n];
// printf("Enter the elements of array1:");
// for (int i = 0; i < m; i++)
// {
//    scanf("%d",&a[i]);
// }
// printf("Enter the elements of array2:");
// for (int i = 0; i < n; i++)
// {
//    scanf("%d",&b[i]);
// }
// int c[m+n];
// int i=0,j=0,k=0;
// while(i<=m && j<=n)
// {
//     if (a[i]<=b[j])
//     {
//         c[k]=a[i];
//         k++;
//         i++;
//     }
//     else
//     {
//         c[k]=b[j];
//         k++;
//         j++;
//     }
// }
// if (m<=n)
// {
//     while(j<n)
//     {
//       c[k]=b[j];
//       k++;
//       j++;
//     }
// }
// else
// {
//     while(i<=m)
//     {
//       c[k]=a[i];
//       k++;
//       i++;
//     }
// }
// for (int l = 0; l < m+n; l++)
// {
//     if (c[l]==c[l+1])
//     {
//         continue;
//     }
//     else
//     {
//         printf("%d",c[l]);
//     }

// }
// }
/*
Ques-10
*/
// int m;
// printf("Enter size of array1:");
// scanf("%d",&m);
// int n;
// printf("Enter the size of array2:");
// scanf("%d",&n);
// int a[m],b[n];
// printf("Enter the elements of array1:");
// for (int i = 0; i < m; i++)
// {
//    scanf("%d",&a[i]);
// }
// printf("Enter the elements of array2:");
// for (int i = 0; i < n; i++)
// {
//    scanf("%d",&b[i]);
// }
// int c[m+n];
// int i=0,j=0,k=0;
// while(i<=m && j<=n)
// {
//     if (a[i]<=b[j])
//     {
//         c[k]=a[i];
//         k++;
//         i++;
//     }
//     else
//     {
//         c[k]=b[j];
//         k++;
//         j++;
//     }
// }
// if (m<=n)
// {
//     while(j<n)
//     {
//       c[k]=b[j];
//       k++;
//       j++;
//     }
// }
// else
// {
//     while(i<=m)
//     {
//       c[k]=a[i];
//       k++;
//       i++;
//     }
// }
// printf("Output is:");
// for (int l = 0; l < m+n; l++)
// {
//     if (c[l]==c[l+1])
//     {
//          printf("%d ",c[l]);
//     }
//     else
//     {
//        continue;
//     }

// }
// }
/*
Ques-11
*/
// int m;
// printf("Enter size of array1:");
// scanf("%d",&m);
// int n;
// printf("Enter the size of array2:");
// scanf("%d",&n);
// int a[m],b[n];
// printf("Enter the elements of array1:");
// for (int i = 0; i < m; i++)
// {
//    scanf("%d",&a[i]);
// }
// printf("Enter the elements of array2:");
// for (int i = 0; i < n; i++)
// {
//    scanf("%d",&b[i]);
// }
// int i=0,j=0;
// int k=0;
// int c[k];
// while (i<m)
// { int count=0;
//    while (j<n)
//    {
//     if (a[i]==b[j])
//     {
//         count++;
//         break;
//     }
//      if (count>0)
//     {
//         continue;
//     }
//     else
//     {

//         printf("%d\n",a[i]);

//     }

//     j++;
//    }

//     i++;
// }

// }
// int n,m;
// printf("Enter no. of rows and coloumns of matrix1 and matrix2:");
// scanf("%d%d",&m,&n);
// int a[m][n];
// printf("Enter elements of matrix 1:");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         scanf("%d",&a[i][j]);
//     }

// }
/*
Ques-11
*/
// int m;
// printf("Enter size of array1:");
// scanf("%d",&m);
// int n;
// printf("Enter the size of array2:");
// scanf("%d",&n);
// int a[m],b[n];
// printf("Enter the elements of array1:");
// for (int i = 0; i < m; i++)
// {
//    scanf("%d",&a[i]);
// }
// printf("Enter the elements of array2:");
// for (int i = 0; i < n; i++)
// {
//    scanf("%d",&b[i]);
// }
// int ch;
// printf("Enter your choice(i.e 1 for a-b and 2 for b-a):");
// scanf("%d",&ch);
// int temp,k=0,count;
// int c[100];
// switch (ch)
// {
// case 1:
//     for (int i = 0; i < m; i++)
// {   count=0;
//     temp=a[i];
//     for (int j = 0; j < n; j++)
//     {
//         if (temp==b[j])
//         {
//             break;
//         }
//         else
//         {
//           count++;
//         }
//     }
//     if (count==n)
//     {
//         c[k]=temp;
//         k++;
//     }

// }
// for (int i = 0; i < k; i++)
// {
//     printf("%d",c[i]);
// }
//     break;

// case 2:
//    { for (int i = 0; i < n; i++)
//      {count=0;
//     temp=b[i];
//     for (int j = 0; j < m; j++)
//     {
//         if (temp==a[j])
//         {
//             break;
//         }
//         else
//         {
//           count++;
//         }
//     }
//     if (count==m)
//     {
//         c[k]=temp;
//         k++;
//     }

// }
// for (int i = 0; i < k; i++)
// {
//     printf("%d",c[i]);
// }
//     break;
// }
// }
// }
/*
/*
Ques 12*/
//     int n;
//     printf("Enter the size of matrix1:");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int m;
//     printf("Enter the size of matrix2:");
//     scanf("%d", &m);
//     int b[m];
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     int k = 0, temp1, temp2, count;
//     int c[100];
//     for (int i = 0; i < n; i++)
//     {
//         temp1 = a[i];
//         count = 0;
//         for (int j = 0; j < m; j++)
//         {
//             if (temp1 == b[j])
//             {
//                 break;
//             }
//             else
//             {
//                 count++;
//             }
//         }
//         if (count == m)
//         {
//             c[k] = temp1;
//             k++;
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         temp2 = b[i];
//         count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (temp2 == a[j])
//             {
//                 break;
//             }
//             else
//             {
//                 count++;
//             }
//         }
//         if (count == n)
//         {
//             c[k] = temp2;
//             k++;
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         printf("%d ", c[i]);
//     }
// }
/*
Ques-16
*/
// int b[m][n];
// int c[m][n];
// printf("Enter elements of matrix2:");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         scanf("%d",&b[i][j]);
//     }

// }
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         c[i][j]=a[i][j]+b[i][j];
//     }

// }
// printf("Sum of matrix is:\n");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         printf("%d ",c[i][j]);
//     }
//     printf("\n");
// }
// }
/*
Ques-17*/
// int n,m;
// printf("Enter no. of rows and coloumns of matrix1 and matrix2:");
// scanf("%d%d",&m,&n);
// int a[m][n];
// printf("Enter elements of matrix 1:");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         scanf("%d",&a[i][j]);
//     }

// }
// int b[m][n];
// int c[m][n];
// printf("Enter elements of matrix2:");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         scanf("%d",&b[i][j]);
//     }

// }
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         c[i][j]=abs(a[i][j]-b[i][j]);
//     }

// }
// printf("Sum of matrix is:\n");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         printf("%d ",c[i][j]);
//     }
//     printf("\n");
// }
// }
/*
Ques-18
*/
// int m,n;
// int a[m][n];
// printf("Enter the size of matrix1:");
// scanf("%d%d",&m,&n);
// printf("Enter the elements of array1:");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         scanf("%d",a[m][n]);
//     }

// }
// int p,q;
// int b[p][q];
// printf("Enter the size of matrix1:");
// scanf("%d%d",&p,&q);
// printf("Enter the elements of array1:");
// for (int i = 0; i < p; i++)
// {
//     for (int j = 0; j < q; j++)
//     {
//         scanf("%d",b[p][q]);
//     }

// }
// int i=0,j=0;
// int sum[i][j]=0;
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < q; j++)
//     {
//         sum[i][j]=sum[i][j]+a[i][q];
//     }

// }
// }
/*
Ques-19
*/
// int m,n;
// printf("Enter the size of array:");
// scanf("%d%d",&m,&n);
// int a[m][n];
// printf("Enterthe elements of array:");
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//        scanf("%d",&a[i][j]);
//     }

// }
// int at[n][m];
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         at[j][i]=a[i][j];
//     }

// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < m; j++)
//     {
//         printf("%d ",at[i][j]);
//     }
//     printf("\n");
// }

// }
/*

/*Ques-18
 */
// int n;
// printf("Enter the size of matrix(i.e rows and coloumns):");
// scanf("%d",&n);
// printf("Enter the elements of matrix 1:");
//  int a[n][n];
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         scanf("%d",&a[i][j]);
//     }

// }
// int p,k=0;
// printf("Enter the size of matrix(i.e rows and coloumns):");
// scanf("%d",&p);
// printf("Enter the elements of matrix 2:");
// int b[p][p];
// int c[100][100];
// for (int i = 0; i < p; i++)
// {
//     for (int j = 0; j < p; j++)
//     {
//         scanf("%d",&b[i][j]);
//     }

// }
// for (int i = 0; i < n; i++)
// {
//    for (int j = 0; j < p; j++)
//    {
//         c[i][j]=0;
//         for (int k = 0; k < n; k++)
//         {
//             c[i][j]+=a[i][k]*b[k][j];
//         }

//    }

// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         printf("%d ",c[i][j]);
//     }
//     printf("\n");
// }
// }
/*
Ques-18
*/
//     int m, n;
//     printf("Enter the size of matrix1:");
//     scanf("%d%d", &m, &n);
//     int a[m][n];
//     printf("Enter the eklements of matrix1:");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int p, q;
//     printf("Enter the size of matrix2:");
//     scanf("%d%d", &p, &q);
//     int b[p][q];
//     int c[100][100];
//     printf("Enter the eklements of matrix2:");
//     for (int i = 0; i < p; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     if (n == p)
//     {
//         int sum;
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < q; j++)
//             {
//                 sum = 0;
//                 for (int k = 0; k < n; k++)
//                 {
//                     sum += a[i][k] * b[k][j];
//                 }
//                 c[i][j] = sum;
//             }
//         }
//     }
//     printf("After matrix multiplication:");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
// }
/*
Ques-20
*/
// int a[3][3],det;
// printf("Enter the elements of a 3x3 matrix:");
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         scanf("%d",&a[i][j]);
//     }

// }
// det=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
// printf("%d",det);
// }
/*
Ques-21
*/
//     int m, n;
//     printf("Enter the size of matrix:");
//     scanf("%d%d", &m, &n);
//     int a[m][n];
//     printf("Enter the elements of matrix:");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int c[100][100];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//            c[j][i]=a[i][j];
//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//            printf("%d ",c[i][j]);
//         }
//         printf("\n");

//     }
// }
/*

/*Factorial(ques-1)*/

// int fact(int n,int ans)
// {
//     if (n==1)
//     {
//         return ans;
//     }
//     else

//      return fact(n-1,ans*n);

// }
// int main()
// {int ans=1;
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     printf("%d",fact(n,ans));

// }
/*ques-2*/

// int rpn(int n,int a,int p)
// {
//     if (n==1)
//     {
//         return a;
//     }
//     else
//     return rpn(n-1,p*a,p);

// }
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int a,p;

//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     p=a;
//     printf("%d",rpn(n,a,p));
// }
/*Fibonacci(ques-3)*/
// int fib(int n)
// {
//     if (n==1||n==2)
//     {
//         return n-1;
//     }
//     else
//     return fib(n-1)+fib(n-2);

// }
// void main()
// {int n;
//     printf("Enter the number of terms:");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ",fib(i));
//     }

// }
/*OR*/
// int a[100]={0};
// int fib(int n)
// {
//     if (n==1||n==2)
//     {
//         return a[n]=n-1;
//     }
//     else
//     if (a[n]==0)
//     {
//         return a[n]=fib(n-1)+fib(n-2);
//     }
//     return a[n];
// }
// void main()
// {int n;
//     printf("Enter the number of terms:");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ",fib(i));
//     }
/*Gcd(ques-4)*/
// int gcd(int n1,int n2)
// {
//     if (n1%n2==0)
//     {
//         return n2;
//     }
//     else
//     return gcd(n2,n1%n2);

// }
// int main()
// {
//     int n1,n2;
//     printf("Enter the firdt number:");
//     scanf("%d",&n1);
//     printf("Enter the second number:");
//     scanf("%d",&n2);
//     printf("%d",gcd(n1,n2));
// }
/*Binary search(ques-5)*/
// int binary(int n,int a)
// {

// }
// int main()
// {
//    int n,s,a,ar;
//    printf("Enter the size of the array:");
//    scanf("%d",&n);
//    int ar[100];
//    printf("Enter the element you want to search:");
//    scanf("%d",&a);
//    printf("Enter the elemnts:");
//    for (int i = 1; i <= n; i++)
//    {
//     scanf("%d",&ar[i]);
//     // s=binary(a[i],a);
//     printf("%d",ar[i]);
//    }

// }
/*Towers of hanoi(ques-6)*/
// int hanoi(int n,char a,char b,char c)
// {
//     if (n==1)
//     {
//         printf("move disc %d from %c to %c\n",n,a,c);
//         return;
//     }
//     hanoi(n-1,a,c,b);
//     printf("move disc %d from %c to %c\n",n,a,c);
//     hanoi(n-1,b,a,c);
// }
// int main()
// {
//     hanoi(3,'a','b','c');
// }
/*recursion*/
/*Reverse(ques-7)*/
// int rev(int n,int s)
// {
//     if (n==0)
//     {
//         return s;
//     }
//     else
//     return rev(n/10,s*10+n%10);

// }
//  int main()
// {
//  int n,s=0;
//  printf("Enter the value of n:");
//  scanf("%d",&n);
//  printf("%d",rev(n,s));
// }
/*Ques-8 */
// int sum(int n,int s)
// {
//     if (n==0)
//     {
//         return s;
//     }
//     else
//     return sum(n/10,s+n%10);

// }
// int main()
// {
//     int n;
//     printf("Entre the value of n:");
//     scanf("%d",&n);
//     int s=0;
//     printf("%d",sum(n,s));
// }


// }



/*Structure*/
/*Ques-1*/
// struct class
// {
//     char name[20];
//     int r;
//     float marks;
// }c[6];
// void main()
// {
// printf("Enter the deatails:");
// for (int i = 0; i < 6; i++)
// {
//     fflush(stdin);
//     gets(c[i].name);
//     scanf("%d%f",&c[i].r,&c[i].marks);
// }
// for (int i = 0; i < 6; i++)
// {
//     printf("%s %d %f",c[i].name,c[i].r,c[i].marks);
// }

// }
/*Ques-2*/
// struct student
// {
//     int r;
//     char name[20];
//     int age;
//     float marks;
// } s[5];
// void main()
// {
//     printf("Enter the student's details:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the student roll no.:\n");
//         scanf("%d", &s[i].r);
//         printf("Enter the student name:\n");
//         fflush(stdin);
//         gets(s[i].name);
//         printf("Enter the student age:\n");
//         scanf("%d", &s[i].age);
//         printf("Enter the student marks:\n");
//         scanf("%f", &s[i].marks);
//     }
//     printf("roll no. is:%d\n", s[0].r);
//     printf("Name is:%s\n", s[0].name);
//     printf("Age  is:%d\n", s[0].age);
//     printf("Marks is:%f\n", s[0].marks);
// }
/*Ques-3*/
// struct student
// {
//     int r;
//     int age;
//     char add[20];
//     float marks;

// } s[15];
// void main()
// {
//     printf("Enter the deatils:\n");
//     for (int i = 0; i < 15; i++)
//     {
//         printf("Enter the roll no. of the student:");
//         scanf("%d", &s[i].r);
//         printf("Enter the age of the student:");
//         scanf("%d", &s[i].age);
//         printf("Enter the address of the student:");
//         fflush(stdin);
//         gets(s[i].add);
//         printf("Enter the marks of the student:");
//         scanf("%f", &s[i].marks);
//     }
//     for (int i = 0; i < 15; i++)
//     {
//         printf("The roll no. of the student is:%d\n", s[i].r);
//         printf("The Age of the student is:%d\n", s[i].age);
//         printf("The address of the student is:%s\n", s[i].add);
//         printf("The marks of the student is:%f\n", s[i].marks);
//     }
// }
/*Ques-4*/
/*4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.*/
// struct height
// {
//     int foot;
//     int inch;

// } h[2];
// void main()
// {
//     int fo, in;
//     printf("Enter the two heights in foot and inch:");
//     for (int i = 0; i < 2; i++)
//     {
//         scanf("%d%d", &h[i].foot, &h[i].inch);
//     }
//     fo = h[0].foot + h[1].foot;
//     in = h[0].inch + h[1].inch;
//     while (in >= 12)
//     {
//         fo = fo + 1;
//         in = in - 12;
//     }
//     printf("%d.%d", fo, in);
// }
/*Ques-5*/
/*5. Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.*/
// struct complex
// {
//     int real;
//     int img;
// } c[2];
// void main()
// {
//     for (int i = 1; i <= 2; i++)
//     {
//         printf("Enter the real part of number%d:", i);
//         scanf("%d", &c[i].real);
//         printf("Enter the imaginary part of number%d", i);
//         scanf("%d", &c[i].img);
//     }
//     int re, im;
//     re = c[1].real + c[2].real;
//     im = c[1].img + c[2].img;
//     printf("%d+%di", re, im);
// }
/*Ques-6*/
/*6. Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.*/
// struct compex
// {
//     int hour;
//     int min;
//     int sec;

// } c[2];
// void main()
// {
//     printf("Enter the time:");
//     for (int i = 0; i < 2; i++)
//     {
//         scanf("%d%d%d", &c[i].hour, &c[i].min, &c[i].sec);
//     }
//     int h, m, s;
//     h = c[0].hour + c[1].hour;
//     m = c[0].min + c[1].min;
//     s = c[0].sec + c[1].sec;
//     while (s >= 60)
//     {
//         m = m + 1;
//         s = s - 60;
//     }
//     while (m >= 60)
//     {
//         h = h + 1;
//         m = m - 60;
//     }
//     printf("%d %d %d", h, m, s);
// }
/*Ques-7*/
// struct marks
// {
//     int r;
//     char name[20];
//     float mc;
//     float mm;
//     float mp;

// } m[5];
// void main()
// {
//     printf("Enter the student's details:");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the roll no. of the student:\n");
//         scanf("%d", &m[i].r);
//         printf("Enter the name of the student:\n");
//         fflush(stdin);
//         gets(m[i].name);
//         printf("Enter the chemistry marks of the student:\n");
//         scanf("%f", &m[i].mc);
//         printf("Enter the mathematics marks of the student:\n");
//         scanf("%f", &m[i].mm);
//         printf("Enter the physics marks of the student:\n");
//         scanf("%f", &m[i].mp);
//     }
//     float per[5];
//     for (int i = 0; i < 5; i++)
//     {
//         per[i] = (m[i].mc + m[i].mm + m[i].mp) / 3.0;
//         printf("Student %d-->:%f\n", i, per[i]);
//     }
// }
/*Ques-8*/
/*8. Write a program to add, subtract and multiply two complex numbers using structures to function.*/
// int re = 0;
// int im = 0;
// int b = 0;
// struct complex
// {
//     int real;
//     int img;
// } c[100];
// int sum(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         re = re + c[i].real;
//         im = im + c[i].img;
//     }
//     printf("%d+i%d", re, im);
// }

// int difference(int n)
// {
//     re = 0;
//     im = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         re = abs(c[i].real - re);
//         im = abs(c[i].img - im);
//     }
//     printf("%d i%d", re, im);
// }
// int multiplication()
// {
//     re = 0;
//     int t1 = 1, t2 = 1;
//     im = 0;
//     for (int i = 1; i <= 2; i++)
//     {
//         re = re * c[i].real;
//         im = im * c[i].img;
//     }
//     t1 = c[1].real * c[2].img;
//     t2 = c[2].real * c[1].img;
//     printf("%d i%d", abs(re - im), t1 + t2);
// }
// void main()
// {
//     int n;
//     int a;
//     printf("Enter the number of terms you want to take:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter your %dcomplex no.:\n", i);
//         printf("Enter the real part:\n");
//         scanf("%d", &c[i].real);
//         printf("Enter the imaginary part:\n");
//         scanf("%d", &c[i].img);
//     }
//     printf("Enter your choice i.e what you want to do:\n1-->Sum\n2-->difference\n3-->multiplication\n");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 1:
//         sum(n);
//         break;
//     case 2:
//         difference(n);
//         break;
//     case 3:
//         multiplication();
//         break;
//     default:
//         printf("Invalid!!");
//         break;
//     }
// }
/*Ques-9*/
/*9. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14.
 - Write another function to print the names of all the students having even roll no.
 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).*/
// struct student
// {
//     int roll;
//     char name[20];
//     int age;
//     char add[50];
// } s[20];
// int even(int m)
// {
//     if (m % 2 == 0)
//     {
//         printf("%s\n", s[m].name);
//     }
// }
// int details(int p)
// {
//     printf("roll no is-->%d\nName is -->%s\nAge is-->%d\nAddress is-->%s", s[p].roll, s[p].name, s[p].age, s[p].add);
// }
// void main()
// {
//     int n;
//     printf("Enter the number of student:\n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter the student-%d's details:\n", i);
//         printf("His/Her roll no.\n");
//         scanf("%d", &s[i].roll);
//         printf("His/Her name:\n");
//         fflush(stdin);
//         gets(s[i].name);
//         printf("His/Her age\n");
//         scanf("%d", &s[i].age);
//         printf("His/Her address\n");
//         fflush(stdin);
//         gets(s[i].add);
//     }
//     int a;
//     int p;
//     printf("Enter 1 for dispaying student with even roll numbers and 2 for displaying the req student's details\n");
//     scanf("%d", &a);
//     if (a == 2)
//     {
//         printf("Enter the roll number:\n");
//         scanf("%d", &p);
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (a == 1)
//         {
//             /* code */ even(s[i].roll);
//             break;
//         }

//         else
//         {

//             if (p == s[i].roll)
//             {
//                 details(i);
//             }
//         }
//     }
// }
/*Ques-10*/
/*10. Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 1 - Write a function to print the names of all the customers having balance less than $200.
 2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.*/
// struct customer
// {
//     char name[20];
//     int ac;
//     float bal;
// } c[11];
// int balance(int b, int i)
// {
//     if (b < 200)
//     {
//         printf("%s\n", c[i].name);
//     }
// }
// int sum(int b, int i)
// {
//     if (b > 1000)
//     {
//         printf("Name-->%s\nACC no-->%d\nBalance--> %0.2f\n", c[i].name, c[i].ac, c[i].bal + 100);
//     }
// }
// void main()
// {
//     printf("Enter the details of each Customer\n");
//     for (int i = 1; i <= 11; i++)
//     {
//         fflush(stdin);
//         printf("Enter the costumer name:");
//         gets(c[i].name);
//         printf("Enter the customer account number and balance resp:");
//         scanf("%d%f", &c[i].ac, &c[i].bal);
//     }
//     printf("The customer having balance less than 200 is/are:");
//     for (int i = 1; i <= 11; i++)
//     {
//         balance(c[i].bal, i);
//     }
//     printf("Details of Costumer having balance more than 1000 is/are:\n");
//     for (int i = 1; i <= 11; i++)
//     {
//         sum(c[i].bal, i);
//     }
// }
/*Ques-11*/
/*11. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".*/
// struct Date
// {
//     int date;
//     char month[20];
//     int year;

// } d[2];
// int day(m,n)
// {
//     if (m==n)
//     {
//         return 1;
//     }
//     else
//     return 0;
// }
// int month(m,n)
// {
//     if (m==n)
//     {
//         return 1;
//     }
//     else
//     return 0;
// }
// int year(m,n)
// {
//     if (m==n)
//     {
//         return 1;
//     }
//     else
//     return 0;
// }
// void main()
// {
//     int a,b,c;
//     printf("Enter the two dates:\n");
//     for (int i = 1; i <= 2; i++)
//     {
//         printf("Enter the %d date:\n", i);
//         printf("Enter the day");
//         fflush(stdin);
//         gets(d[i].day);
//         printf("Enter the Month");
//         fflush(stdin);
//         gets(d[i].month);
//         printf("Enter the Year");
//         scanf("%d", &d[i].year);
//     }
//     a=day(d[1].day,d[2].day);
//     b=month(d[1].month,d[2].month);
//     c=year(d[1].year,d[2].year);
//     if (a==1 && b==1 && c==1)
//     {
//         printf("Dates are equal");
//     }
//     else
//     printf("Dates are not equal");
// }
/*Ques-12*/
/*12. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries. Hours of work per day 8
 Increase in salary $50*/
// struct company
// {
//     char name[20];
//     float s;
//     int h;
// }c[10];
// void main()
// {
//     printf("Enter the Employee's Details:");
//     for (int i = 0; i < 10; i++)
//     {
//        printf("Enter the employee's Name:");
//        fflush(stdin);
//        gets(name[i]); 
       
//     }
    
// }
/*stack*/
/*primitive operation(Ques-1)*/
// int top = -1, stack[20], n, item;
// void push()
// {
//     if (top >= n - 1)
//     {
//         printf("Stack overflow\n");
//     }
//     else
//         top = top + 1;
//     printf("Enter the element to be inserted:\n");
//     scanf("%d", &item);
//     stack[top] = item;
// }
// void pop()
// {
//     if (top < 0)
//     {
//         printf("Stack underflow\n");
//     }
//     else
//     {
//         top = top - 1;
//     }
// }
// void display()
// {
//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d ", stack[i]);
//     }
// }
// void main()
// {
//     printf("Enter the no. of elements:\n");
//     scanf("%d", &n);
//     int ch;
//     do
//     {
//         printf("Enter the choice:\n 1 for push\n 2 for pop \n 3 for display\n");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//         }
//     } while (ch <= 3);
// }
/*Ques-2*/
// int top = -1, stack[20], n, item;
// void push()
// {
//     if (top >= n - 1)
//     {
//         printf("Stack overflow\n");
//     }
//     else
//         top = top + 1;
//     printf("Enter the element to be inserted:\n");
//     scanf("%d", &item);
//     stack[top] = item;
// }

// void display()
// {
//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d ", stack[i]);
//     }
// }
// void main()
// { int p;
//     printf("Enter the number:\n");
//     scanf("%d", &p);
//     int ch;
//     do
//     {
//         printf("Enter the choice:\n 1 for push\n 2 for pop \n 3 for display\n");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             p=p/2;
//             n=p%2;
//             push();
//             break;
        
//         case 3:
//             display();
//         }
//     } while (ch <= 3);
// }
/*Ques-2*/
// int top=-1,s[20],item;
// void push(int item)
// {
    
//     top=top+1;
//     s[top]=item;
// }
// void display()
// {
//     for (int i = top; i > -1; i--)
//     {
//       printf("%d",s[i]);  
//     }
    
// }
// void main()
// {   int d;
//     printf("Enter the no.:");
//     scanf("%d",&item);

//     do
//     {
//         d=item%2;
//         push(d);
//         item=item/2;
//     } while (item>0);
//     display();
    
// }
/*Ques-3*/
// int top=-1,s[20],item;
// void push(int item)
// {
    
//     top=top+1;
//     s[top]=item;
// }
// void display()
// {
//     for (int i = top; i > -1; i--)
//     {
//       printf("%d",s[i]);  
//     }
    
// }
// void main()
// {   int d;
//     printf("Enter the no.:");
//     scanf("%d",&item);

//     do
//     {
//         d=item%8;
//         push(d);
//         item=item/8;
//     } while (item>0);
//     display();
    
// }
/*Ques-4*/
// int top=-1,s[20],item;
// void push(int item)
// {
    
//     top=top+1;
//     s[top]=item;
// }
// void display()
// {
//     for (int i = top; i > -1; i--)
//     {
//         if (s[i]>=0 && s[i]<=9)
//         {
//              printf("%d",s[i]); 
//         }
//         else if (s[i]==10)
//         {
//             printf("A");
//         }
//         else if (s[i]==11)
//         {
//             printf("B");
//         }
//         else if (s[i]==12)
//         {
//             printf("C");
//         }
//         else if (s[i]==13)
//         {
//             printf("D");
//         }
//         else if (s[i]==14)
//         {
//             printf("E");
//         }
//         else if (s[i]==15)
//         {
//             printf("F");
//         }
//     }
    
// }
// void main()
// {   int d;
//     printf("Enter the no.:");
//     scanf("%d",&item);

//     do
//     {
//         d=item%16;
//         push(d);
//         item=item/16;
//     } while (item>0);
//     display();
    
// }
/*Ques-5*/
// int top=-1,s[20],item;
// void push(int item)
// {
    
//     top=top+1;
//     s[top]=item;
// }
// void display()
// {
//     for (int i = top; i > -1; i--)
//     {
//         if (s[i]>=0 && s[i]<=9)
//         {
//              printf("%d",s[i]); 
//         }
//         else if (s[i]==10)
//         {
//             printf("A");
//         }
//         else if (s[i]==11)
//         {
//             printf("B");
//         }
//         else if (s[i]==12)
//         {
//             printf("C");
//         }
//         else if (s[i]==13)
//         {
//             printf("D");
//         }
//         else if (s[i]==14)
//         {
//             printf("E");
//         }
//         else if (s[i]==15)
//         {
//             printf("F");
//         }
//     }
    
// }
// void main()
// {   int d;
//     int b;
//     printf("Enter the base:");
//     scanf("%d",&b);
//     printf("Enter the no.:");
//     scanf("%d",&item);

//     do
//     {
//         d=item%b;
//         push(d);
//         item=item/b;
//     } while (item>0);
//     display();
    
// }
// int top;
// char s[50];
// char b;
// void push(char item)
// {
//     top=top+1;
//     s[top]=item;
// }
// void pop(char b)
// {
//   top=top-1;
// }
// void main()
// {
//     char e[50];
//     printf("Enter the Expression:");
//     gets(e);
//     for (int i = 0; i < strlen(e); i++)
//     {
//        push(e[i]);
//     }
//     for (int i = 0; i < strlen(e); i++)
//     {
//         if (e[i]=='{')
//         {
//           if (e[strlen(e)-i-1]=='}')
//           {
//             pop(e[i]);

//           }
            
//         }
//         else if (e[i]=='[')
//         {
//           if (e[strlen(e)-i-1]==']')
//           {
//             pop(e[i]);

//           }
            
//         }
//         else if (e[i]=='(')
//         {
//           if (e[strlen(e)-i-1]==')')
//           {
//             pop(e[i]);

//           }
            
//         }
//     }
//     if(top==strlen(e)/2)
//     {
//         printf("valid");
//     }
//     else
//     printf("Invalid");
    
// }
