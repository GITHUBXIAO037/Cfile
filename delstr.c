#include <stdio.h>
char* delstr(char *src, const char* sub){
	char *st = src,*s1 = NULL;
	const char* s2 = NULL;

	while(*st && *sub){
		s1 = st;
		s2 = sub;

		while(*s1 && *s2 && !(*s1 - *s2)){
			s1++;
			s2++;
		}

		if(!(*s2)){
			while(*st++ = *s1++);
			//printf("%s\n", st);
			// printf("%s\n", src);

			// st = src;
		}

		else{
			st++;
		}
	}
	return src;
}

int main(int argc, char *argv[])
{
	char str1[] = "nihaowodepengyou";
	char str2[] = "hao";
	printf("%s\n",delstr(str1,str2) );
	return 0;
}