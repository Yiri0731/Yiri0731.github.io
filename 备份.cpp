#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	char PanDing[2]=" ",x[10]="1920",y[10]="1080",File[32767];
	double ping=0;
	int Yin_Liang,YinLiang=50,QuanPing=0,start;//"Yin_Liang"ָ�û������������С��"YinLiang"�����·���for����� ;
	system("title ����С����"); 
	while(1>0)
	{
		if(start==1)
		{
			break;
		}
		else
		{
			cout<<"����һ�����Ƴ���ʹ��C++��д"<<endl<<"��ʹ��ǰ��ȷ�ϵ����ϰ�װ�����ú���ffplay"<<endl<<"�˳������밴��ESC��"<<endl;
			cout<<"-------------------------------------------------"<<endl;
			cout<<"ָ�������زģ�Ĭ��û��ָ���� 1"<<endl<<"����������Ĭ��Ϊ100�� 2"<<endl<<"�������ƴ��ڴ�С��Ĭ�ϴ�СΪ1920*1080�� 3"<<endl<<"�������ƴ����Ƿ�ȫ����Ĭ��Ϊ�� 4"<<endl<<"������ʱ��Ĭ��Ϊ0�� 5"<<endl<<"��ʼ���� 0"<<endl;
			cin>>PanDing[2];
			switch(PanDing[2])
			{
				case '1':
				{
					cout<<"�ز��ļ�·���в��ܰ�����&������-���ȷ��ţ��Լ��ո�"<<endl<<"�����������ز��ļ���ַ������C:/User/***/Desktop/114514.mp4����" ;
					cin>>File;
					system("cls");
					break;
				}
				case '2':
				{
					cout<<"������Ҫ������������" ;
					cin>>Yin_Liang;
					YinLiang=Yin_Liang/2; 
					system("cls");
					break;
				}
				case '3':
				{
					cout<<"�����봰�ڴ�С����ʽ���� ����";
					cin>>x>>y;
					system("cls");
					break;
				}
				case '4':
				{
					cout<<"�������� 1 ���������� 0 ��";
					cin>>QuanPing;
					system("cls");
					break;
				} 
				case '5':
				{
					cout<<"��������Ҫ�ӳٵ�������";
					cin>>ping;
					ping=ping*1000;
					system("cls");
					break;
				}
				case '0':
				{
					start=1;
					break;
				}
				default :
					system("cls");
					break;
			}
		}
	}
	Sleep(ping);
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	for(int z=0;z<50;z++)
	{
		keybd_event(VK_VOLUME_DOWN,MapVirtualKey(VK_VOLUME_DOWN,0),KEYEVENTF_EXTENDEDKEY,0); 
		keybd_event(VK_VOLUME_DOWN,MapVirtualKey(VK_VOLUME_DOWN,0),KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,0); 
	}
	for(int i=0;i<YinLiang;i++)
	{
		keybd_event(VK_VOLUME_UP,MapVirtualKey(VK_VOLUME_UP,0),KEYEVENTF_EXTENDEDKEY,0); 
		keybd_event(VK_VOLUME_UP,MapVirtualKey(VK_VOLUME_UP,0),KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,0); 
	}
	char a[30]="ffplay -noborder -volume 100 ",b[4]="-x ",c[5]=" -y ",d[12]=" -autoexit ",e[5]="-fs ",str[1919810];
	if (QuanPing==0)
		{
			strcat(a,b);
			strcat(a,x);
			strcat(a,c);
			strcat(a,y);
			strcat(a,d);
			system(strcat(a,File));
		}
		else
		{
			strcat(a,e); 
			strcat(a,b);
			strcat(a,x);
			strcat(a,c);
			strcat(a,y);
			strcat(a,d);
			system(strcat(a,File));
		}
	return 0;
 } 
