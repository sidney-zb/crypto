#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include"task1.h"
#include"task2.h"
#include"task3.h"
#pragma warning(disable:4996)

int main(){

    int chooseNum ;
    char Ptext[8];
    char Skey[8];
    int changeSum;

    printf(" \n\n\n\n\n\n\n                                                   \n");
	printf("                        ################################################################\n");
	printf("                        ##                                                            ##\n");
	printf("                        ##                          ��������                          ##\n");
	printf("                        ##                                                            ##\n");
	printf("                        ##                                                            ##\n");
	printf("                        ##                                   ##\n");
	printf("                        ################################################################\n\n");
	printf(" �밴�κμ��Լ��� ,, ");
	getchar();
	system("cls");

    printf("\n\n\n\n\n\n\n                                            ��ѡ���������:\n");
	printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                               @                                       @\n");
	printf("                               @       **    1=����1 ��ַ���   **     @\n");
	printf("                               @       **    2=����2 �ı�����   **     @\n");
	printf("                               @       **    3=����3 �ı���Կ   **     @\n");
	printf("                               @             4=�˳�                    @\n");
	printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                                           ����������ѡ��");
	scanf("%d", &chooseNum);
	getchar();

	   while (chooseNum != 4)
	{
		switch (chooseNum)
		{
			case 1:
             printf("������6λ��֣�");
             char intput[6];
             scanf("%s",intput);
             int intputchafen[6];
             for(int i=0;i<6;i++){
             if(intput[i]=='0')
             intputchafen[i] = 0;
             else intputchafen[i] = 1;
               }
             printf("\n");
             mainFuntion(intputchafen);
             system("PAUSE");
			break;

			case 2:
             printf("������8λ�ַ���Ϊ���ģ�");
             scanf("%s",Ptext);
             printf("\n������8λ�ַ���Ϊ��Կ��");
             scanf("%s",Skey);
             printf("\n���������ĸı��λ����");
             scanf("%d",&changeSum);
             mainFuntion2(Ptext,Skey,changeSum);
             system("PAUSE");
			break;

			case 3:
             printf("������8λ�ַ���Ϊ���ģ�");
             scanf("%s",Ptext);
             printf("\n������8λ�ַ���Ϊ��Կ��");
             scanf("%s",Skey);
             printf("\n��������Կ�ı��λ����");
             scanf("%d",&changeSum);
             mainFuntion3(Ptext,Skey,changeSum);
             system("PAUSE");
            break;
		}
    system("cls");
    printf("\n\n\n\n\n\n\n                                            ��ѡ���������:\n");
	printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                               @                                       @\n");
	printf("                               @       **    1=����1 ��ַ���   **     @\n");
	printf("                               @       **    2=����2 �ı�����   **     @\n");
	printf("                               @       **    3=����3 �ı���Կ   **     @\n");
	printf("                               @             4=�˳�                    @\n");
	printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                                           ����������ѡ��");
	scanf("%d", &chooseNum);
	getchar();
	}

 return 0;
}
