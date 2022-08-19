#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string Files,Filename_Extension;
bool FenHao_Y_N;
int main()
{

	getline(cin,Files);
	int b=Files.size()-1;
	if (Files.find_last_of("\"")==b)
	{
		Files=Files.substr(0,Files.find_last_of("\"")); 
	}
	else if(Files.find_first_of("\"")==0) 
	{
		Files=Files.substr(Files.find_first_of("\"")+1); 
	}
	cout<<Files; 
	/*for(int i = 0; i < Files.size(); i++ )
    {
    	if( Files[i] == ' ')
    	{
			Filename_Extension=Files.substr(Files.find_last_of("."));
    		string NewFile="E:\\a"+Filename_Extension;
    		const char* NewFile_char=NewFile.data();
    		const char* Files_char=Files.data();
    		cout<<Files_char<<endl<<NewFile_char;
    		//CopyFile(Files_char,NewFile_char,true);
    		break;
		}
    }*/
	return 0;
} 
//检测空格（已完成）-->检测输入的路径前后是否含有分号-->有则在重新赋值给Files时去除 
