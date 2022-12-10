#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
string rand_str(const int len)  /*参数为字符串的长度*/
{
    string str;                 /*声明用来保存随机字符串的str*/
    char c;                     /*声明字符c，用来保存随机生成的字符*/
    int idx;                    /*用来循环的变量*/
    /*循环向字符串中添加随机生成的字符*/
    for(idx = 0;idx < len;idx ++)
    {
        /*rand()%26是取余，余数为0~25加上'a',就是字母a~z,详见asc码表*/
        c = 'a' + rand()%26;
        str.push_back(c);       /*push_back()是string类尾插函数。这里插入随机字符c*/
    }
    return str;                 /*返回生成的随机字符串*/
}
void Ctrl_V()
{
	keybd_event(0x11, 0, 0, 0);//按下ctrl
	keybd_event(0x56, 0, 0, 0); //按下v
	keybd_event(0x56, 0, 2, 0); //放开v
	keybd_event(0x11, 0, 2, 0); //放开ctrl
}

int main()
{
	int GongNeng,RandomStrOpen,ShuaPing=0;
	string str,RandomStr;
	while(ShuaPing==0)
	{
		cout<<"欢迎使用自动刷屏！"<<endl<<"使用方法："<<endl<<"0.输入1开始准备刷屏，输入0选择是否开启随机字符串前缀"<<endl<<"1.输入想要进行刷屏的字符串（不能包含空格！）/输入1开启随机字符串前缀;"<<endl<<"2.输入完后按下回车，同时选中文本框，3秒后将开始刷屏 \n（刷屏期间请勿操作电脑，待没有需要后再按“Shift”停止刷屏）"; 
		
		cin>>GongNeng; 
		if(GongNeng==1)
		{
			cout<<"请输入字符串（不要带空格！）：";
			cin>>str;
			system("cls");
			ShuaPing=ShuaPing+1;
			break;
		}
		else(GongNeng==0); 
		{	
			cout<<"输入1开启功能，输入0关闭功能（默认开启）：";
			cin>>RandomStrOpen;
			system("cls");
			break;
		}
	}
	if (RandomStrOpen==1)
	{
		while(ShuaPing==10)
		{
			if(!kbhit())
			{
				ShuaPing=10;
	 		} 
			str.insert(0,rand_str(7));
			HWND hWnd = NULL;
   			OpenClipboard( hWnd );//打开剪切板
   			HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 1000);//分配内存
   			char* pData = (char*) GlobalLock(hHandle);//锁定内存，返回申请内存的首地址
   			strcpy(pData,str);
   			SetClipboardData(CF_TEXT, hHandle);//设置剪切板数据
   			GlobalUnlock(hHandle);//解除锁定
   			CloseClipboard();//关闭剪切板
   			Ctrl_V;
		}
	} 
	else
	{
		while(ShuaPing==10)
		{
			if(!kbhit())
			{
				ShuaPing=10;
	 		} 
			HWND hWnd = NULL;
   			OpenClipboard( hWnd );//打开剪切板
   			HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 1000);//分配内存
   			char* pData = (char*) GlobalLock(hHandle);//锁定内存，返回申请内存的首地址
   			strcpy(pData,str);
   			SetClipboardData(CF_TEXT, hHandle);//设置剪切板数据
   			GlobalUnlock(hHandle);//解除锁定
   			CloseClipboard();//关闭剪切板
   			Ctrl_V;
		}
	} 
	return 0;
}
