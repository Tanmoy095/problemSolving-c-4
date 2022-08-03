//Write a C program that calculates the summation of first n Natural numbers. Demonstrate the use of recursive function.  


int sum(int n);
int main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num));
    return 0;

}
int sum(int n)
{
if(n>0)return n + sum(n-1);
    else return 0;



}
