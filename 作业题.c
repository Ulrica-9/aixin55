////
////
////
//////������գ��ó������ǣ��Ӽ�������10��ѧ���ĳɼ�����ʾ���е���߷֡���ͷֺ�ƽ���ɼ���
////#include <stdio.h>
////
////int main()
////
////{
////
////    /**********found**********/
////
////    float s[10], *p=s;  //��һ��
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
////    p=s;  //ָ���0(���û��������)---->�൱��ָ������
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
//////2.   ������գ�����fun��ͳ����tt�ַ����� 'a' �� 'z' 26����ĸ���Գ��ֵĴ���������pp���鴫��main������
//////
//////���磬�������ַ���abcdabcaba������Ľ��Ӧ���ǣ�
//////
//////4 3 2 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//////
//////�������£�
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
//////3.���ú�����ָ���д���򣬴Ӽ�������һ���ַ�����Ȼ��������Ҫ�����һ�����ַ������´�����ԭ���У�ÿ�����ַ�֮�����һ���ո���ԭ��Ϊabcd�����´�Ϊa��b��c��d����Ϊ�ո�ע��d����û�пո񣩡�
//////#include <stdio.h>
//////
////#include <string.h>
////void insert(char* str)
////{
////    char s[81];
////    int i = 0, j = 0;
////    while (*(str+j))                     //����������ȶ���������Ȼ��˼���κ���Ӧ��ִ�еĹ���
////    {                                    
////        if (i % 2 == 0)                   //��Ϊ�±��0��ʼ����������λ����ӡ�ո�����λ����ӡԭ�ַ�,��ô�����ˣ�����һ�������������б���,�������������ݱ�����֮ǰԭʼ�����С�
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
////    s[i] = '\0';                               //�ַ���ĩβ���һ���ַ�������\0,���Բ�Ҫ����\0
////   /* str = s;*/         //�����������ʾ��
////    for (i = 0; i < strlen(s); i++)              //��ȷ��������
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
////1�����и��������У�����fun�Ĺ����ǣ�����Ƚ�a��b�����ַ�����Ӧλ���е��ַ�����ASCIIֵ�����ȵ��ַ����δ�ŵ�c�����У��γ�һ���µ��ַ��������磬��a�е��ַ���ΪaBCDeFgH, b�е��ַ���Ϊ��ABcd����c�е��ַ���ӦΪ��aBcdeFgH��
////
////����
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
////    while (strcmp(p,q))                  //�����ַ�������ֱ�ӱȽϴ�СҪʹ�ú���strcmp���������ȣ��򷵻�0�����Ը���while����ʵ���ж�
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
////2.  �벹�亯��fun(char* s)���ú����Ĺ����ǰ��ַ����е��������á����磺�ַ�����ԭ�е��ַ���Ϊabcde������øú����󣬴��е�����Ϊedcba��
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
//////3. ���дһ������int fun(char* ss, char* s)���ú����Ĺ����ǣ����ss�ַ�����ָ���Ӵ�s�ĸ����������ش�ֵ��
////
//////���磬������ss = "1231231"��s = "12"�������2��
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
////    int a = 0, count = 0;     //����
////    int i = 0, j = 0;        //ѭ��ָ��
////    int n = 0, m = 0;      //����������ʱ�����������ĳ���
////    m = strlen_my(ss);
////    n = strlen_my(s);
////    //printf("%d\n", n);      //���Գ����Ƿ���ȷ
////    //printf("%d\n", m);
////    for (i = 0; i < m; i++)
////    {
////        if (j >= n)            //������ҵ�����Χ�����ڶ��������ֵ��С�����»ع�0��
////        {
////            j = 0;
////        }
////        if ((*(ss + i) == *(s + j)))
////        {
////            
////            a++;                 //�˴���ʼ����������ɺ�ͨ���ȽϽ������
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
//////1���Ĵ��⡣���и��������еĺ���Creatlink�Ĺ����ǣ�������ͷ���ĵ���������Ϊ�����������0��m - 1��ֵ��������m - 1����
//////
//////Ҫ��1�����������ļ���E4 - 7.C���ļ��������E�̸�Ŀ¼�£�
//////
//////2������������к���Creatlink�еĴ���ʹ�����ܵó���ȷ�Ľ����
//////
//////3����Ҫ�Ķ�main�������������л�ɾ�У�Ҳ���ø��ĳ���Ľṹ��
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
////2��������գ������������Ѿ�����һ������ͷ���ĵ������������еĸ�����㰴�����ֵ���е����ݴ�С����˳�����ӣ�����fun�Ĺ����ǣ����β��µ�ֵ����һ���½�㲢���뵽�����У��������������Ȼ���ִ�С�����˳�����С�
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
//////β�巨������̬����
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
//////�������
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
////3. ��д���򣬽���һ����3�����ĵ�������ÿ������������������͹��ʡ���д����������һ�����ڽ���������һ�������������
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
//    head = p = (stu *)malloc(sizeof(stu));//����ͷ
//    /*if (!p)
//    {
//        exit(-1);
//    }  */                                //��ֹδ�����ɹ�
//    p->next= NULL;
//    for (i = 0; i < 3; i++)
//    {
//        s = (stu *)malloc(sizeof(stu));  //�����½ڵ�(β�巨����)
//        /*if (!s)
//        {
//            exit(-1);
//        }*/
//        printf("����������:");
//        scanf("%s", s->name);
//        getchar();
//        printf("����������&&����:");
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
////1��������գ����������У�����fun�Ĺ����ǣ�����Ȼ��1 - 10�Լ����ǵ�ƽ����д����Ϊmyfile.txt���ı��ļ��У�Ȼ����˳�������ʾ����Ļ�ϡ�
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
////    printf("\nSucceed!��\n");
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
//////3�������ѧ����ÿ��ѧ�������ſεĳɼ����Ӽ���������ѧ����ѧ�ţ����������ſγɼ��������Ǵ�ŵ������ļ��У����Ӹ��ļ����ܶ�����ʾ��
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
////	if(fp==NULL)              //���ļ������ж��Ƿ��
////	{
////		printf("��ʧ��!!�����˳�!!");
////		exit(-1);
////	}
////	//�����ļ��Ķ�д����
////	for(i=0;i<5;i++)
////	{
////		//���ɹ���������ݷ����˳�������ʾ����
////		if(fread(&stud[i],sizeof(struct student),1,fp)!=1)
////		{
////			if(feof(fp))            //���ж��Ƿ���꣬�������˳�����������ʧ��
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
////	//�ر��ļ�
////	if(fclose(fp))
////	{
////		printf("�ر�ʧ��!!!");
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