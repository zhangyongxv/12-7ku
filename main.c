#include <stdio.h>
int main()
{
    /*
    char str1[100], str2[100], *p = str1,n = 0;
    printf("请输入第一个字符串:");
    scanf("%s", str1);
    printf("请输入第二个字符串:");
    scanf("%s", str2);
    while (*p++ != '\0');//移动指针到str1尾
    --p;//回退一个单元，以便覆盖str1末的'\0p;//回退一个单元，以便覆盖str1末的'\0'
    while (str2[n] != '\0')
    {
        *p++ = str2[n];//将str2接到str1末
        ++n;
    };
    *p = '\0';//拼接完成，手动为str1末添上结束标记
    printf("结果为:\n%s\n\n",str1);
    return 0;
    */
   
   int num;
   int i=0;
   int a[10];
   scanf("%d",&num);
  do {
    a[i]=num%10;
    num/=10;
    i++;
   }while((num%10)!=0);
    if(a[0]!=a[i-1])
    {
        printf("no");
        return -1;
    }
    else{
        int j=i;
        int k=0;
        while(j)
        {
            j--;
            if(a[k]==a[j]){
                 k++;
            }
            else
            {
                printf("no");
                return -1;
            }
        }
        printf("yes");
        return 0;
    } 
}