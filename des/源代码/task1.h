#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
void hello(){
printf("fsdf");
}

int mainFuntion(int in[6]) {
    int In[6];
    for(int i=0;i<6;i++){
        In[i]=in[i];
    }                                                //�����������
    int k;
    int i;
    void Differ(int In[6]);                           //fp��ָ�룬����ָ��FILE���͵Ķ���

    void s_box(int array[6],int brray[4],int crray[4][16]);    //����des�ѽ��д��8��6���ش��Ĳ�����ÿһ��s�а�6����ӳ�䵽4����
                                                             //��array��������ش���6λ brray��������ش���4λ��crray��s��4X16

    printf("��ֲַ�ͳ�Ʊ�\n");
    printf("\n������: ");

        for(k=0;k<=5;k++) {                     //��ӡ��ǰ�������
            printf("%d",In[k]);
         }
         printf("\n");

         Differ(In);                       //���ò�ַ���

    return 0;
}



void Differ(int In[6])
{   //������s�У�������ѧԭ����ʵ����P76ҳS1
    int s[4][16]={{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7}
                ,{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8}
                ,{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0}
                ,{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
                };
    int b[6]; //���ܵ�����
    int d[6];
    int e[4],f[4],Out[4],n[4];//n[4]��������0000~1111��
    int flag;
    int l;
    int k;
    int i,j;
    int count;    //����һ��������
    void s_box(int array[6],int brray[4],int crray[4][16]);

    printf("��������������������������������������������������������������������������������������������������������\n");
    printf("S1��������\t���ܵ�����\n");


    for(i=0;i<=15;i++)
    {
        {
         int t;                  //����������
         t=i;                    //��λ��������0000~1111��������n��
         n[3]=t%2;  t=t/2;
         n[2]=t%2;  t=t/2;
         n[1]=t%2;  t=t/2;
         n[0]=t%2;
        }
        //printf("������:");
        for(k=0;k<=3;k++)          //��ӡ��ǰ��������
        {
            printf("%d",n[k]);
        }
        printf("\t\t");


        count=0;                   //����ǰ������ֲ���ʼ��Ϊ0��
        for(j=0;j<=63;j++)              //����������Ԫ��
        {

            {   int t;
                t=j;
                b[5]=t%2;  t=t/2;
                b[4]=t%2;  t=t/2;
                b[3]=t%2;  t=t/2;
                b[2]=t%2;  t=t/2;
                b[1]=t%2;  t=t/2;
                b[0]=t%2;
            }
            for(l=0;l<=5;l++)
               d[l]=b[l]^In[l];         //��������а�λ�������������ǰ���������x��Ӧ��x*��������������d[]��
            s_box(b,e,s);               //b������x ��e��s��������Ϊbʱ�����
            s_box(d,f,s);               //d��b���������Ϊin[l]��Ӧ�µ�����x*��f��s��������Ϊbʱ�����
            for(k=0;k<=3;k++)
                Out[k]=e[k]^f[k];       //��������֣�����Out������
            flag=1;                     //������־λ��1��
            for(k=0;k<=3;k++)
            {
                if(Out[k]!=n[k])
                {
                 flag=0;
                 break;
                }
            }
           if(flag==1)  {//���ϵ�ǰ�����ֵ�ʱ�򣬵�ǰ�����ֵļ�������һ
            count=count+1;
            for(int z=0;z<6;z++){
                printf("%d",b[z]);
            }
            printf(",");
           }

        }
      if(count==0)
      printf("û�п�������");
      else
      printf("\t��������Ϊ��%d",count);

      printf("\n");
    }
    printf("��������������������������������������������������������������������������������������������������������\n");
}

    void s_box(int array[6],int brray[4],int crray[4][16])
    {
        int p,q,t;
        p=2*array[0]+array[5];                               //��b1b6���ؾ���s�е���ȡֵΪp
        q=2*2*2*array[1]+2*2*array[2]+2*array[3]+array[4];   //��b2b3b4b5����s�е���ȡֵΪq
        t=crray[p][q];                                       //t����s��������Ϊarray[6]ʱ�����
        brray[3]=t%2;
        t=t/2;
        brray[2]=t%2;
        t=t/2;
        brray[1]=t%2;
        t=t/2;
        brray[0]=t%2;                                        //��tת���ɶ��������洢��brray��
    }





#endif // TASK1_H_INCLUDED
