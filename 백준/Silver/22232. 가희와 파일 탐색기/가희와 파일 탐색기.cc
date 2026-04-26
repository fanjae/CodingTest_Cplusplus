#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;
typedef struct file
{
	char filename[20];
	char dot;
	char extension[20];
}file;
file data[200005];

unordered_map <string, bool> extension_data;

bool compare(struct file &dat1,struct file &dat2)
{
	if(strcmp(dat1.filename,dat2.filename) == 0)
	{
		if((extension_data[dat1.extension] == false && extension_data[dat2.extension] == false) || (extension_data[dat1.extension] == true && extension_data[dat2.extension] == true))
		{
			return strcmp(dat1.extension,dat2.extension) < 0;	
		}
		else if(extension_data[dat1.extension] == true)
		{
			return extension_data[dat1.extension];
		}
		else
		{
			return extension_data[dat2.extension];
		}
	}
	else
	{
		return strcmp(dat1.filename,dat2.filename) < 0;
	}
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		char temp[45];
		int dot_temp = 0;
		int dot_index = 0;
		scanf("%s",temp);
		for(int j=0; ; j++)
		{
			if(temp[j] == '.')
			{
				data[i].dot = '.';
				dot_index = j+1;
				break;
			}
			data[i].filename[j] += temp[j];
		}
		for(int j=dot_index; ; j++)
		{
			if(temp[j] == 0)
			{
				data[i].extension[dot_temp] = 0;
				break;
			}
			data[i].extension[dot_temp] += temp[j];
			dot_temp++;
		}
	}
	
	for(int i=0; i<m; i++)
	{
		char extension[20];
		scanf("%s",extension);
		
		extension_data[extension] = true;
	}
	sort(data,data+n,compare);
	for(int i=0; i<n; i++)
	{
		printf("%s%c%s\n",data[i].filename,data[i].dot,data[i].extension);
	}
}