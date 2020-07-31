#include<stdio.h>
#include<string.h>
int main(){
	char ch[20];
	char rev[20];
	int isPalindrome,i;
	printf("Enter a string : ");
	scanf("%s",&ch);
	int len = strlen(ch);
	for(i=len-1;i>=0;i--){
		rev[len-i-1] = ch[i];
	}
	printf("Reverse of %s is : %s\n",ch,rev);
	for(i =0;i<len;i++){
		if(rev[i]!=ch[i]){
			isPalindrome = 0;
		}
		else{
			isPalindrome = 1;
		}
	}
	if(isPalindrome){
		printf("%s is palindrome",ch);
	}else{
		printf("%s is not palindrome",ch);
	}
	return 0;
}