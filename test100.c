// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//         int buff[] = {1, 2, 3};
//         int *p = buff;
//         printf("%d\n",sizeof(buff) );
//         printf("%p\n",p );
//         printf("%x\n", *(int *)((int)p + 1));

//         return 0;
// }

// #include <stdio.h>
// typedef union Tag_Node
// {
// 	struct Tag_node
// 	{
// 		char a;
// 		char b;
// 		char c;
// 		char d;
// 	}node;
// 	int i;
// }Node;
// int main(int argc, char *argv[])
// {
// 	Node myunion;
// 	myunion.node.a = 1;	
// 	myunion.node.b = 2;	
// 	myunion.node.c = 3;	
// 	myunion.node.d = 4;
// 	printf("%x\n", myunion.i);

// 	return 0;
// }

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int buff[] =  {1, 2, 3};
// 	int *p = buff;
// 	*p++ += 123;

// 	printf("%d,%d\n", *p, *++p);

// 	return 0;

// }


// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int i = 3, j = -1;
// 	for(NULL ; i>0, j<0; --i, ++j)
// 		printf("hello word\n"); 
// 	return 0;
// }


#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	int j = (i--)+(++i);

	printf("%d\n", j);

	return 0;
}
