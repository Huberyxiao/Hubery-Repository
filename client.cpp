#include <stdio.h>
#include <windows.h>
#include <conio.h>


void buy(char *id);
void refund(char *id);
int myidmanage(char *id);
void recentlymovie();
//�ͻ��˲������溯�� 
void client(char *id){
	char c;
	int i=0,t;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           �ͻ���\n\n\033[0m");
	printf("                           ������ӳһ��\n");
	printf("                           ��Ʊ\n");
	printf("                           ��Ʊ\n");
	printf("                           ����ID����\n\n");
	printf("               tips:���س�ȷ�ϲ����룡\n");
	printf("                    ��Esc����������!\n"); 
	while(1){
		c=getch();
		if(c==27){//Esc�˳� 
			break;
		}
		if(c==72){//���� 
			if(i>1){
				i--;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("\033[40;32m                           ������ӳһ��\n\033[0m");
					printf("                           ��Ʊ\n");
					printf("                           ��Ʊ\n");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n"); 
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("\033[40;32m                           ��Ʊ\n\033[0m");
					printf("                           ��Ʊ\n");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n"); 
				}
				if(i==3){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("                           ��Ʊ\n");
					printf("\033[40;32m                           ��Ʊ\n\033[0m");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n"); 
				}
			}
		}
		if(c==80){//���� 
			if(i<4){
				i++;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("\033[40;32m                           ������ӳһ��\n\033[0m");
					printf("                           ��Ʊ\n");
					printf("                           ��Ʊ\n");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n"); 
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("\033[40;32m                           ��Ʊ\n\033[0m");
					printf("                           ��Ʊ\n");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n"); 
				}
				if(i==3){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("                           ��Ʊ\n");
					printf("\033[40;32m                           ��Ʊ\n\033[0m");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n"); 
				}
				if(i==4){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("                           ��Ʊ\n");
					printf("                           ��Ʊ\n");
					printf("\033[40;32m                           ����ID����\n\n\033[0m");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n");
				}
			}
		}
		if(c=='\r'&&i==1){//�������Ԥ�����棬���ý���Ԥ������ 
			recentlymovie();
					system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("\033[40;32m                           ������ӳһ��\n\033[0m");
					printf("                           ��Ʊ\n");
					printf("                           ��Ʊ\n");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n");
		}
		if(c=='\r'&&i==2){//���빺Ʊ���棬���ù�Ʊ���� 
			buy(id); 
			system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("\033[40;32m                           ��Ʊ\n\033[0m");
					printf("                           ��Ʊ\n");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n");
		} 
		if(c=='\r'&&i==3){//������Ʊ���棬������Ʊ���� 
			refund(id);
			system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("                           ��Ʊ\n");
					printf("\033[40;32m                           ��Ʊ\n\033[0m");
					printf("                           ����ID����\n\n");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n");
		}
		if(c=='\r'&&i==4){//��������ID�������棬��������id��������
			t=myidmanage(id); 
			if(t==1){
				return ;
			} system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           �ͻ���\n\n\033[0m");
					printf("                           ������ӳһ��\n");
					printf("                           ��Ʊ\n");
					printf("                           ��Ʊ\n");
					printf("\033[40;32m                           ����ID����\n\n\033[0m");
					printf("               tips:���س�ȷ�ϲ����룡\n");
					printf("                    ��Esc����������!\n");
		} 
	}
	return ;
}