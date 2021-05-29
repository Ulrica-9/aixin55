////
////
////
//////程序填空，该程序功能是：从键盘输入10名学生的成绩，显示其中的最高分、最低分和平均成绩。
////#include <stdio.h>
////
////int main()
////
////{
////
////    /**********found**********/
////
////    float s[10], *p=s;  //第一空
////
////    float max, min, average;
////
////    int i;
////
////    for (i = 0; i < 10; i++)
////    {
////
////        scanf_s("%f", p++);
////
////    }
////
////    /**********found**********/
////
////    p=s;  //指针归0(如果没有则会出错)---->相当于指向问题
////
////    /**********found**********/
////
////    max = min = average = *p;
////
////    for (i = 1; i < 10; i++)
////
////    {
////
////        if (*(p + i) > max)
////
////        {
////
////            max = *(p + i);
////
////        }
////
////        if (*(p + i) < min)
////
////        {
////
////            min = *(p + i);
////
////        }
////
////        average += *(p + i);
////
////    }
////
////    /**********found**********/
////
////    average /= 10;
////
////    printf("max=%.2f,min=%.2f,average=%.2f\n", max, min, average);
////
////}
// 
// 
// 
// 
// 
//////2.   程序填空，函数fun是统计在tt字符串中 'a' 到 'z' 26个字母各自出现的次数，并由pp数组传回main函数。
//////
//////例如，当输入字符串abcdabcaba后，输出的结果应该是：
//////
//////4 3 2 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//////
//////程序如下：
////
////#include <stdio.h>
////void fun(char* tt, int pp[])
////{
////
////    /**********found**********/
////
////    char* p = tt;
////
////    int i;
////
////    for (i = 0; i < 26; i++)
////
////        /**********found**********/
////
////    {
////
////        pp[i] = 0;
////
////    }
////
////    while (*p)
////
////    {
////
////        if (*p >= 'a' && *p <= 'z')
////
////            /**********found**********/
////
////        {
////
////            pp[*p-'a'] += 1;
////
////        }
////
////        p++;
////
////    }
////
////}
////
////int main()
////{
////    char aa[100];
////    int bb[26], k, n;
////    printf("\nPlease enter  a char string:");
////    scanf("%s", aa);
////    fun(aa, bb);
////    for (k = 0; k < 26; k++)
////    {
////        printf("%d ", bb[k]);
////    }
////    printf("\n");
////}
//
//
//////3.利用函数和指针编写程序，从键盘输入一个字符串，然后按照下面要求输出一个新字符串。新串是在原串中，每两个字符之间插入一个空格，如原串为abcd，则新串为a□b□c□d（□为空格，注意d后面没有空格）。
//////#include <stdio.h>
//////
////#include <string.h>
////void insert(char* str)
////{
////    char s[81];
////    int i = 0, j = 0;
////    while (*(str+j))                     //解决此题首先读主函数，然后思考次函数应该执行的功能
////    {                                    
////        if (i % 2 == 0)                   //因为下标从0开始，所以奇数位数打印空格，其余位数打印原字符,怎么保存了，创建一个新数组来进行保存,最后将新数组的数据遍历在之前原始数组中。
////        {
////            s[i] = *(str + j);
////            j++;
////        }
////        else
////        {
////            s[i] = ' ';
////        }
////        i++;
////    }
////    s[i] = '\0';                               //字符串末尾最后一个字符必须是\0,所以不要忘记\0
////   /* str = s;*/         //错误遍历操作示范
////    for (i = 0; i < strlen(s); i++)              //正确遍历操作
////    {
////        *(str ++) = s[i];
////    }
////    *str = '\0';
////    
////}
////
////int main()
////
////{
////
////    char str[81];
////
////    gets(str);
////
////    insert(str);
////
////    puts(str);
////}
//
//
//
//
////1、下列给定程序中，函数fun的功能是：逐个比较a、b两个字符串对应位置中的字符，把ASCII值大或相等的字符依次存放到c数组中，形成一个新的字符串。例如，若a中的字符串为aBCDeFgH, b中的字符串为：ABcd，则c中的字符串应为：aBcdeFgH。
////
////程序：
//
////#include <stdio.h> 
////
////#include <string.h> 
////
////void fun(char* p, char* q, char* c)
////
////{
////
////    /********found********/
////
////    int k = 0;
////
////    /********found********/
////
////    while (strcmp(p,q))                  //两个字符串不能直接比较大小要使用函数strcmp如果二者相等，则返回0，所以根据while函数实现判断
////    {
////
////        if (*p < *q)
////
////        {
////
////            c[k] = *q;
////
////        }
////
////        else
////
////        {
////
////            c[k] = *p;
////
////        }
////
////        if (*p)
////
////        {
////
////            p++;
////
////        }
////
////        if (*q)
////
////        {
////
////            q++;
////
////        }
////
////        k++;
////
////    }
////
////}
////
////int main()
////
////{
////
////    char a[10] = "aBCDeFgH", b[10] = "ABcd", c[80] = { '\0' };
////
////    fun(a, b, c);
////
////    printf("The string a:");
////
////    puts(a);
////
////    printf("The string b:");
////
////    puts(b);
////
////    printf("The result:");
////
////    puts(c);
////
////}
//// 
////2.  请补充函数fun(char* s)，该函数的功能是把字符串中的内容逆置。例如：字符串中原有的字符串为abcde，则调用该函数后，串中的内容为edcba。
//
//
//
//
////#include <string.h>
////
////#include <stdio.h>
////
////#define N 81
////
////void fun(char* s)
////
////{
////
////    int i, n = strlen(s) - 1;
////
////    char t;
////
////    for (i = 0; i < n; i++, n--)
////
////    {
////
////        t = s[i];
////
////        s[i]=s[n];
////
////        s[n]=t;
////
////    }
////
////}
////
////int main()
////
////{
////
////    char a[N];
////
////    printf("Enter a string:");
////
////    gets(a);
////
////    printf("The original string is:");
////
////    puts(a);
////
////    fun(a);
////
////    printf("\n");
////
////    printf("The string after modified:");
////
////    puts(a);
////
////}
//
//
//
//// 
//// 
//////3. 请编写一个函数int fun(char* ss, char* s)，该函数的功能是：求出ss字符串中指定子串s的个数，并返回此值。
////
//////例如，若输入ss = "1231231"，s = "12"，则输出2。
////#include <string.h>
////
////#include <stdio.h>
////
////#define M 81
////int strlen_my(char* p)
////{
////    int n = 0;
////    while (*p++)
////    {
////        n++;
////    }
////    return n;
////}
////int fun(char* ss, char* s)
////
////{
////    int a = 0, count = 0;     //计数
////    int i = 0, j = 0;        //循环指向
////    int n = 0, m = 0;      //创建两个临时变量接收它的长度
////    m = strlen_my(ss);
////    n = strlen_my(s);
////    //printf("%d\n", n);      //测试长度是否正确
////    //printf("%d\n", m);
////    for (i = 0; i < m; i++)
////    {
////        if (j >= n)            //如果查找的数范围超过第二次输入的值大小则重新回归0；
////        {
////            j = 0;
////        }
////        if ((*(ss + i) == *(s + j)))
////        {
////            
////            a++;                 //此处开始计数计数完成后通过比较进行输出
////            j++;
////        }
////        else
////        {
////            j = 0;
////            a = 0;
////        }
////       
////        if (a == n )
////        {
////            count++;
////            a = 0;
////        }  
////    }
////    return count;
////}
////
////int main()
////
////{
////
////    char a[M], s[M];
////
////    printf("\nPlease enter a string:");
////
////    gets(a);
////
////    printf("\nPlease enter a substring:");
////
////    gets(s);
////
////    printf("\nThe counts is: %d\n", fun(a, s));
////
////}
//
//
//
//////1、改错题。下列给定程序中的函数Creatlink的功能是：创建带头结点的单项链表，并为各结点数据域赋0到m - 1的值（不包括m - 1）。
//////
//////要求：1）上述程序文件名E4 - 7.C的文件，存放在E盘根目录下；
//////
//////2）请改正程序中函数Creatlink中的错误，使程序能得出正确的结果；
//////
//////3）不要改动main函数，不得增行或删行，也不得更改程序的结构。
////
////#include <stdio.h>
////
////#include <stdlib.h>
////
////typedef struct aa
////
////{
////
////    int data;
////
////    struct aa* next;
////
////} NODE;
////
////NODE* Creatlink(int n, int m)
////
////{
////
////    NODE* h = NULL, * p, * s=NULL;
////
////    int i;
////
////    /********found********/
////
////    p = (NODE *)malloc(sizeof(NODE));
////
////    h = p;
////
////    p->next = NULL;
////
////    for (i = 1; i <= n; i++)
////
////    {
////
////        s = (NODE*)malloc(sizeof(NODE));
////
////        /********found********/
////
////        s->data = rand() % (m-1);
////
////        s->next = p->next;
////
////        p->next = s;
////
////        p = p->next;
////
////    }
////
////    s->next = NULL;
////
////    /********found********/
////
////    return h;
////
////}
////
////void outlink(NODE* h)
////
////{
////
////    NODE* p;
////
////    p = h->next;
////
////    printf("\n\nTHE LIST :\n\n HEAD");
////
////    while (p)
////
////    {
////
////        printf("->%d ", p->data);
////
////        p = p->next;
////
////    }
////
////    printf("\n");
////
////}
////
////int main()
////
////{
////
////    NODE* head;
////
////    head = Creatlink(8, 22);
////
////    outlink(head);
////
////}
//
//
////2．程序填空，给定程序中已经建立一个带有头结点的单向链表，链表中的各个结点按结点数值域中的数据从小到大顺序链接，函数fun的功能是：把形参新的值放入一个新结点并插入到链表中，插入后各个结点仍然保持从小到大的顺序排列。
//
////#include <stdio.h>
////
////#include <stdlib.h>
////
////#define N 8
////
////typedef struct list
////
////{
////
////    int data;
////
////    struct list* next;
////
////} SLIST;
////
////void fun(SLIST* h, int x)
////
////{
////
////    SLIST* p, * q, * s;
////
////    s = (SLIST*)malloc(sizeof(SLIST));
////
////    /**********found**********/
////
////    s->data = x;
////
////    q = h;
////
////    p = h->next;
////
////    while (p != NULL && x > p->data)
////
////    {
////
////        /**********found**********/
////
////        q = p;
////
////        p = p->next;
////
////    }
////
////    s->next = p;
////
////    /**********found**********/
////
////    q->next = s;
////
////}
//////尾插法建立动态链表
////SLIST* creatlist(int* a)
////
////{
////
////    SLIST* h, * p, * q;
////
////    int i;
////
////    h = p = (SLIST*)malloc(sizeof(SLIST));
////
////    for (i = 0; i < N; i++)
////
////    {
////
////        q = (SLIST*)malloc(sizeof(SLIST));
////
////        q->data = a[i];
////
////        p->next = q;
////
////        p = q;
////
////    }
////
////    p->next = 0;
////
////    return h;
////
////}
//////输出链表
////void outlist(SLIST* h)
////
////{
////
////    SLIST* p;
////
////    p = h->next;
////
////    if (p == NULL)
////
////    {
////
////        printf("\nThe list is NULL!\n");
////
////    }
////
////    else
////
////    {
////
////        printf("\nHead");
////
////        do
////
////        {
////
////            printf("->%d", p->data);
////
////            p = p->next;
////
////        }
////
////        while (p != NULL);
////
////        printf("->End\n");
////
////    }
////
////}
////
////int main()
////
////{
////
////    SLIST* head;
////
////    int x;
////
////    int a[N] = { 11, 12, 15, 18, 19, 22, 25, 29 };
////
////    head = creatlist(a);
////
////    printf("\nThe list before inserting:\n");
////
////    outlist(head);
////
////    printf("\nEnter a number :  ");
////
////    scanf_s("%d", &x);
////
////    fun(head, x);
////
////    printf("\nThe list after inserting:\n");
////
////    outlist(head);
////
////}
//
////3. 编写程序，建立一个有3个结点的单向链表，每个结点包含姓名、年龄和工资。编写两个函数，一个用于建立链表，另一个用来输出链表。
//
//#include <stdio.h> 
//#include <malloc.h> 
//#include <string.h>
//#define stu struct student 
//stu
//{
//
//    char name[20];
//
//    int age;
//
//    int wage;
//
//    stu* next;
//
//};
//stu * creat(void)
//{
//    int i;
//    struct student * p, * head, * s;
//    head = p = (stu *)malloc(sizeof(stu));//创建头
//    /*if (!p)
//    {
//        exit(-1);
//    }  */                                //防止未创建成功
//    p->next= NULL;
//    for (i = 0; i < 3; i++)
//    {
//        s = (stu *)malloc(sizeof(stu));  //建立新节点(尾插法创建)
//        /*if (!s)
//        {
//            exit(-1);
//        }*/
//        printf("请输入姓名:");
//        scanf("%s", s->name);
//        getchar();
//        printf("请输入年龄&&工资:");
//        scanf_s("%d%d", &s->age, &s->wage);
//        s->next = p->next;
//        p->next = s;
//        
//    }
//
//    return head->next;
//}
//void output(struct student * p)
//{
//
//    while (p != NULL)
//
//    {
//
//        printf("%s: ", p->name);
//
//        printf("age=%d wage=%d\n", p->age, p->wage);
//
//        p = p->next;
//
//    }
//
//}
//int main()
//{
//
//    stu* p;
//
//    p = creat();
//
//    output(p);
//
//}
//
//
////1、程序填空，给定程序中，函数fun的功能是：将自然数1 - 10以及它们的平方根写到名为myfile.txt的文本文件中，然后再顺序读出显示到屏幕上。
//
////#include <math.h>
////
////#include <stdio.h>
////
////int fun(char* fname)
////
////{
////
////    FILE* fp;
////
////    int i, n;
////
////    float x;
////
////    if ((fp = fopen(fname, "w")) == NULL)
////
////    {
////
////        return 0;
////
////    }
////
////    for (i = 1; i <= 10; i++)
////
////        /**********found**********/
////
////    {
////
////        fprintf(fp, "%d %f\n", i, sqrt((double)i));
////
////    }
////
////    printf("\nSucceed!！\n");
////
////    /**********found**********/
////
////    fclose(fp);
////
////    printf("\nThe data in file :\n");
////
////    /**********found**********/
////
////    if ((fp = fopen(fname, "r")) == NULL)
////
////    {
////
////        return 0;
////
////    }
////
////    fscanf(fp, "%d%f", &n, &x);
////
////    while (!feof(fp))
////
////    {
////
////        printf("%d %f\n", n, x);
////
////        fscanf(fp, "%d%f", &n, &x);
////
////    }
////
////    fclose(fp);
////
////    return 1;
////
////}
////
////int main()
////
////{
////
////    char fname[] = "myfile.txt";
////
////    fun(fname);
////
////}
//// 
//// 
//// 
//// 
//// 
//// 
//////3．有五个学生，每个学生有三门课的成绩，从键盘上输入学生的学号，姓名，三门课成绩，把它们存放到磁盘文件中，并从该文件中能读出显示。
////
////#include <stdio.h>
////
////#include <stdlib.h>
////
////struct student
////
////{
////
////    int number;
////
////    char name[20];
////
////    int score[3];
////
////} stud[5];
////
////void save()
////
////{
////
////    FILE *fp;
////
////    int i;
////
////    if (( fp = fopen( "student.dat", "wb" )) == NULL )
////
////    {
////
////        printf( "can not open file\n" );
////
////        exit( 0 );
////
////    }
////
////    for ( i = 0; i < 5; i++ )
////
////    {
////
////   		fwrite(&stud[i],sizeof(struct student),1,fp);
////
////    }
////
////    fclose( fp );
////
////}
////
////void load()
////
////{
////	int i;
////	FILE*fp;
////	fp=fopen("student.dat", "rb");
////	if(fp==NULL)              //打开文件，并判断是否打开
////	{
////		printf("打开失败!!即将退出!!");
////		exit(-1);
////	}
////	//进行文件的读写操作
////	for(i=0;i<5;i++)
////	{
////		//若成功则读入数据否则退出程序显示数据
////		if(fread(&stud[i],sizeof(struct student),1,fp)!=1)
////		{
////			if(feof(fp))            //在判断是否读完，若读完退出程序否则读入失败
////			{
////				fclose(fp);
////				return;
////			}
////			printf("Open eorror!");
////		}
////		else
////		{
////			printf("%-2d,%-2s,%-2d,%-2d,%-2d\n",stud[i].number,stud[i].name,stud[i].score[0],stud[i].score[1],stud[i].score[2]);
////		}
////		
////	}
////
////	//关闭文件
////	if(fclose(fp))
////	{
////		printf("关闭失败!!!");
////	}
////    
////
////}
////
////int main()
////
////{
////
////    int i, j;
////
////    for ( i = 0; i < 5; i++ )
////
////    {
////
////        printf( "\ninput %d student's number: ", i + 1 );
////
////        scanf( "%d", &stud[i].number );
////
////        printf( "\ninput %d student's name:  ", i + 1 );
////
////        scanf( "%s", stud[i].name ,sizeof(stud[i].name));
////
////        printf( "\ninput %d student's score:  \n", i + 1 );
////
////        for ( j = 0; j < 3; j++ )
////
////        {
////
////            scanf( "%d", &stud[i].score[j] );
////
////        }
////
////    }
////
////    save();
////
////    load();
////
////}

#include <stdio.h>
#include <string.h>
int main(void)
{
	int a = 5, b = 5, c = 5;
	if (a == b&&b == c)
	{
		printf("a");
	}
	else
	{
		printf("b");
	}
	return 0;
}