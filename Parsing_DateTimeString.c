#include <stdio.h>
#include <string.h>

char out[20];
char is_string;
void cpy_string(char *pos, char c,char d){
	char i=20;
	out[0]=*pos;
	while((*(pos+20-i)!=c) && i && *(pos+20-i)!=d){
		out[20-i]=*(pos+20-i);
		i--;
	}
	if(*(pos+20-i)=='.') is_string=1;
	out[20-i]=0;
}

struct {
	char day;
	char month;
	int year;
	char hour;
	char minute;
}DateTime;

int main()
{
    char *temp;
    char str[]="24.07.2000 22:55";
    temp=(&str[0]);
    cpy_string(temp,'"','.');
   	DateTime.day=(out[0]-0x30)*10+(out[1]-0x30);
    cpy_string(temp+3,'"','.');
    DateTime.month=(out[0]-0x30)*10+(out[1]-0x30);
    cpy_string(temp+6,'"',' ');
    DateTime.year=(out[0]-0x30)*1000+(out[1]-0x30)*100+(out[2]-0x30)*10+(out[3]-0x30);
    cpy_string(temp+11,'"',':');
    DateTime.hour=(out[0]-0x30)*10+(out[1]-0x30);
    cpy_string(temp+14,'"','"');
    DateTime.minute=(out[0]-0x30)*10+(out[1]-0x30);

    printf("%d.%d.%d %d:%d",DateTime.day,DateTime.month,DateTime.year,DateTime.hour,DateTime.minute);

    return 0;
}
