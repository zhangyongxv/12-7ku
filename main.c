#include <stdio.h>
int main()
{
    /*
    char str1[100], str2[100], *p = str1,n = 0;
    printf("�������һ���ַ���:");
    scanf("%s", str1);
    printf("������ڶ����ַ���:");
    scanf("%s", str2);
    while (*p++ != '\0');//�ƶ�ָ�뵽str1β
    --p;//����һ����Ԫ���Ա㸲��str1ĩ��'\0p;//����һ����Ԫ���Ա㸲��str1ĩ��'\0'
    while (str2[n] != '\0')
    {
        *p++ = str2[n];//��str2�ӵ�str1ĩ
        ++n;
    };
    *p = '\0';//ƴ����ɣ��ֶ�Ϊstr1ĩ���Ͻ������
    printf("���Ϊ:\n%s\n\n",str1);
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