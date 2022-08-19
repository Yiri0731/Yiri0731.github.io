#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	char PanDing[2]=" ",x[10]="1920",y[10]="1080",File[32767];
	double ping=0;
	int Yin_Liang,YinLiang=50,QuanPing=0,start;//"Yin_Liang"指用户输入的音量大小，"YinLiang"用在下方的for语句上 ;
	system("title 整人小程序"); 
	while(1>0)
	{
		if(start==1)
		{
			break;
		}
		else
		{
			cout<<"这是一个整蛊程序，使用C++编写"<<endl<<"在使用前请确认电脑上安装并配置好了ffplay"<<endl<<"退出整蛊请按“ESC”"<<endl;
			cout<<"-------------------------------------------------"<<endl;
			cout<<"指定整蛊素材（默认没有指定） 1"<<endl<<"设置音量（默认为100） 2"<<endl<<"设置整蛊窗口大小（默认大小为1920*1080） 3"<<endl<<"设置整蛊窗口是否全屏（默认为否） 4"<<endl<<"启动延时（默认为0） 5"<<endl<<"开始整蛊 0"<<endl;
			cin>>PanDing[2];
			switch(PanDing[2])
			{
				case '1':
				{
					cout<<"素材文件路径中不能包含“&”，“-”等符号（以及空格）"<<endl<<"请输入整蛊素材文件地址（例：C:/User/***/Desktop/114514.mp4）：" ;
					cin>>File;
					system("cls");
					break;
				}
				case '2':
				{
					cout<<"请输入要调整的音量：" ;
					cin>>Yin_Liang;
					YinLiang=Yin_Liang/2; 
					system("cls");
					break;
				}
				case '3':
				{
					cout<<"请输入窗口大小（格式：长 宽）：";
					cin>>x>>y;
					system("cls");
					break;
				}
				case '4':
				{
					cout<<"是请输入 1 ，否请输入 0 ：";
					cin>>QuanPing;
					system("cls");
					break;
				} 
				case '5':
				{
					cout<<"请输入所要延迟的秒数：";
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
