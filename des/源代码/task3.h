#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>

int mainFuntion3(char Plaintext[8],char Secret_key[8],int changeSum)
{
    srand(time(NULL));
    int SecretariesChangeCount = 0;//���ĸı��λ��
    int output[64] = { 0 }; //����

//������,��Կ��Ϊ������
int PlaintextBits[64] = {0};
int Secret_keyBits[64] = {0};
CharToBit(Plaintext, PlaintextBits, 8);
CharToBit(Secret_key, Secret_keyBits, 8);

DES_Efun(PlaintextBits, Secret_keyBits, output); //��ȡ����


int tempSecret_keyBits[64] = {0};
int tempOutput[64] = {0};

    for(int i=0;i<10;i++){//�����ȡ��Կ�ı��λ�ã��ı���Կ10�Σ���������λ���ı�ƽ��ֵ
     int randNum =  rand()%64;
     for(int i=0;i<64;i++){tempSecret_keyBits[i] = Secret_keyBits[i];}//����Կbits���¸�ֵ
     for(int j=0;j<changeSum;j++){//����Կ��changeSumλ���иı�
        if(tempSecret_keyBits[(randNum+j)%64]==0)
            tempSecret_keyBits[(randNum+j)%64] = 1;
        else tempSecret_keyBits[(randNum+j)%64] = 0;
     }

     DES_Efun(PlaintextBits, tempSecret_keyBits, tempOutput);//��ȡ��Կ�ı�������

     for(int k=0;k<64;k++ ){//�Ƚ����ĸı��λ��
        if(tempOutput[k]!=output[k]) SecretariesChangeCount++;
     }
    }
    printf("*********************************\n");
    printf("����10������ı���Կ %d λ\n����ƽ���ı�λ��Ϊ��%.2f",changeSum,1.0*SecretariesChangeCount/10);
    printf("\n*********************************\n");
    return 0;
}



#endif // TASK3_H_INCLUDED
