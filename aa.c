#include<stdio.h>
#include<string.h>
void main()
{
string a[500] = {"Vishnu","raju"};
int num = sizeof(a) / sizeof(a[0]);
string answer = commonPrefix(a, num);
if (answer.length())
printf ("The longest common prefix is - %s",answer.c_str());
else
printf("There is no common prefix");
}
