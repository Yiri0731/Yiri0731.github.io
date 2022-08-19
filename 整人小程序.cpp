#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string File,x="1920",y="1080";
double ping=0;
int Yin_Liang,YinLiang=50,QuanPing=0,start,PanDing;//"Yin_Liang"指用户输入的音量大小，"YinLiang"用在下方的for语句上 ;
int main()
{
	system("title 整人小程序"); 
	while(start=!0)
	{
		cout<<"这是一个整蛊程序，使用C++编写"<<endl<<"在使用前请确认电脑上安装并配置好了ffplay"<<endl<<"退出整蛊请按“ESC”"<<endl;
		cout<<"-------------------------------------------------"<<endl;
		cout<<"指定整蛊素材（默认没有指定） 1"<<endl<<"设置音量（默认为100） 2"<<endl<<"设置整蛊窗口大小（默认大小为1920*1080） 3"<<endl<<"设置整蛊窗口是否全屏（默认为否） 4"<<endl<<"启动延时（默认为0） 5"<<endl<<"开始整蛊 0"<<endl;
		cin>>PanDing;
		cout<<PanDing<<endl;
		switch(PanDing)
		{
			case 1:
			{
				cout<<"素材文件路径中不能包含“&”，“-”等符号（以及空格）"<<endl<<"请输入整蛊素材文件地址（例：C:/User/***/Desktop/114514.mp4）：" ;
				File=" ";
				cin>>File;
				for(int i=0;i<File.size();i++)
				{
					if(File[i]==' '||File[i]=='&'||File[i]=='-'||File[i]=='\"')
					{
						cout<<"文件路径格式不正确"<<endl;
						File=" ";
						system("pause");
						break;
					}
				}
				system("cls");
				break;
			}
			case 2:
			{
				cout<<"请输入要调整的音量：" ;
				cin>>Yin_Liang;
				YinLiang=Yin_Liang/2; 
				system("cls");
				break;
			}
			case 3:
			{
				cout<<"请输入窗口大小（格式：长 宽）：";
				cin>>x>>y;
				system("cls");
				break;
			}
			case 4:
			{
				cout<<"是请输入 1 ，否请输入 0 ：";
				cin>>QuanPing;
				system("cls");
				break;
			} 
			case 5:
			{
				cout<<"请输入所要延迟的秒数：";
				cin>>ping;
				ping=ping*1000;
				system("cls");
				break;
			}
			case 0:
			{
				start=0;
				break;
			}
			default :
				system("cls");
				break;
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
	string a="ffplay -noborder -volume 100 ",b="-x ",c=" -y ",d=" -autoexit ",e="-fs ",str;
	if (QuanPing==0)
		{
			str=a+b+x+c+y+d+File;
			const char* p=str.data();
			system(p);
		}
		else
		{
			str=a+b+x+c+y+d+e+File;
			const char* p=str.data();
			system(p);
		}
	return 0;
 } 
