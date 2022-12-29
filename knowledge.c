#include <stdio.h>

int main()
{
    int n, i, ans1,ans2,ans3,ans4,ans5;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    ans1 = (n % 2);
    printf("%d\n", ans1);

    ans2 = ((n & 1));
    printf("%d\n", ans2);

//above both are same

//below both are same
    ans3 = n / 2;
    printf("%d\n", ans3);

    ans4 = n >> 1;
    printf("%d\n", ans4);


//from this element is multiply with 2
    ans5=n<<1;
    printf("%d\n",ans5);

    return 0;
}