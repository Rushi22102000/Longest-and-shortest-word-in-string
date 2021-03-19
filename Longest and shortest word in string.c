main()
{
int i=0,j=0,m=0,k=0,mm=0,nn=0;
char s[]="ram se kaaj";
char s1[100][100];
int l=sizeof(s)/sizeof(char);
while (l!=m){
if(s[k]==' ')
{ i++; j=0;k++;m++;}

s1[i][j]=s[k];

m++;
j++;
k++; }

for(i=0;i<5;i++)
{ if (strlen(s1[i]) > mm)
mm=strlen(s1[i]); }

for(i=0;i<3;i++)
{ if(strlen(s1[i])==mm)
printf ("The longest word is: %s",s1[i]); }

printf("\n");


nn=strlen(s1[0]);
for(i=0;i<3;i++)
{ if(strlen(s1[i])<nn)
nn=strlen(s1[i]);
}


for(i=0;i<3;i++)
{
if(strlen(s1[i])==nn)
{
    printf("The shortest word is:  %s",s1[i]);
}}

}




