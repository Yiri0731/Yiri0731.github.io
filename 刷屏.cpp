#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
string rand_str(const int len)  /*����Ϊ�ַ����ĳ���*/
{
    string str;                 /*����������������ַ�����str*/
    char c;                     /*�����ַ�c����������������ɵ��ַ�*/
    int idx;                    /*����ѭ���ı���*/
    /*ѭ�����ַ��������������ɵ��ַ�*/
    for(idx = 0;idx < len;idx ++)
    {
        /*rand()%26��ȡ�࣬����Ϊ0~25����'a',������ĸa~z,���asc���*/
        c = 'a' + rand()%26;
        str.push_back(c);       /*push_back()��string��β�庯���������������ַ�c*/
    }
    return str;                 /*�������ɵ�����ַ���*/
}
void Ctrl_V()
{
	keybd_event(0x11, 0, 0, 0);//����ctrl
	keybd_event(0x56, 0, 0, 0); //����v
	keybd_event(0x56, 0, 2, 0); //�ſ�v
	keybd_event(0x11, 0, 2, 0); //�ſ�ctrl
}

int main()
{
	int GongNeng,RandomStrOpen,ShuaPing=0;
	string str,RandomStr;
	while(ShuaPing==0)
	{
		cout<<"��ӭʹ���Զ�ˢ����"<<endl<<"ʹ�÷�����"<<endl<<"0.����1��ʼ׼��ˢ��������0ѡ���Ƿ�������ַ���ǰ׺"<<endl<<"1.������Ҫ����ˢ�����ַ��������ܰ����ո񣡣�/����1��������ַ���ǰ׺;"<<endl<<"2.��������»س���ͬʱѡ���ı���3��󽫿�ʼˢ�� \n��ˢ���ڼ�����������ԣ���û����Ҫ���ٰ���Shift��ֹͣˢ����"; 
		
		cin>>GongNeng; 
		if(GongNeng==1)
		{
			cout<<"�������ַ�������Ҫ���ո񣡣���";
			cin>>str;
			system("cls");
			ShuaPing=ShuaPing+1;
			break;
		}
		else(GongNeng==0); 
		{	
			cout<<"����1�������ܣ�����0�رչ��ܣ�Ĭ�Ͽ�������";
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
   			OpenClipboard( hWnd );//�򿪼��а�
   			HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 1000);//�����ڴ�
   			char* pData = (char*) GlobalLock(hHandle);//�����ڴ棬���������ڴ���׵�ַ
   			strcpy(pData,str);
   			SetClipboardData(CF_TEXT, hHandle);//���ü��а�����
   			GlobalUnlock(hHandle);//�������
   			CloseClipboard();//�رռ��а�
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
   			OpenClipboard( hWnd );//�򿪼��а�
   			HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 1000);//�����ڴ�
   			char* pData = (char*) GlobalLock(hHandle);//�����ڴ棬���������ڴ���׵�ַ
   			strcpy(pData,str);
   			SetClipboardData(CF_TEXT, hHandle);//���ü��а�����
   			GlobalUnlock(hHandle);//�������
   			CloseClipboard();//�رռ��а�
   			Ctrl_V;
		}
	} 
	return 0;
}
