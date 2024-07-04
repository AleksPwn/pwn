#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	getInfo();
}
void getInfo(){
	char name[50];
	char age[60];
	printf("Hello! \n");
	printf("How old are you: \n");
	gets(age);
	printf("Enter your name: ");
	gets(name);
	printf("\n////////////////////////\n");
	printf("Your name: %s\n", name);
	printf("Your age: %s\n", age);
	printf("////////////////////////\n");
}
void admin() {
	printf("You have got admin access 😎️\n");
	system("/bin/sh");
}
