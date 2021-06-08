#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library{
	int b_no;
	char b_title[100];
	char b_author[30];
	char b_issue[30];
}l[100];

int main(){
	int ch,n,i, count=0, count1=0, choice, ref_no;
	char title[100], author[100];
	
	while(1){
		printf("\n------------------------------------------------------------------\n");
		printf("\t\t\t MENU\n");
		printf("\n------------------------------------------------------------------\n");
		printf("\nPress 1 to add the details of book");
		printf("\nPress 2 to display the details of a book");
		printf("\nPress 3 to display all the books of the particular author");
		printf("\nPress 4 to display the no of the books of the same title");
		printf("\nPress 5 to display the total books in the library");
		printf("\nPress 6 to issue a book");
		printf("\n------------------------------------------------------------------\n");
		
		printf("Enter your Choice: ");
		scanf("%d", &ch);
		
		switch(ch){
			case 1:
				printf("Enter the no of books: ");
	            scanf("%d", &n);
				for(i=0;i<n;i++){
					printf("Enter the book ref. no. ");
					scanf("%d", &l[i].b_no);
					printf("Enter the book title. ");
					scanf("%s", &l[i].b_title);
					printf("Enter the book author. ");
					scanf("%s", &l[i].b_author);
					printf("Enter the book option. ");
					scanf("%s", &l[i].b_issue);
				}
				break;
				
			case 2:
			   for(i=0;i<n;i++){
					printf("\nEnter the book ref. no. ");
					printf("\n%d", l[i].b_no);
					printf("\nEnter the book title. ");
					printf("\n%s", l[i].b_title);
					printf("\nEnter the book author. ");
					printf("\n%s", l[i].b_author);
					printf("\nEnter the book option. ");
					printf("\n%s", l[i].b_issue);
				}
				break;
				
			case 3:
				printf("Enter book name: ");
				scanf("%s", &title);
				for(i=0;i<n;i++){
					if(strcmp(l[i].b_title,title)==0){
						printf("\n%d\n%s\n%s\n%s\n", l[i].b_no, l[i].b_title, l[i].b_author, l[i].b_issue);
						count++;
					}
					
				}
				printf("Total No of books with this title are %d", count);
				break;
				
			case 4: 
			printf("Enter the author: ");
			scanf("%s", &author);
			for(i=0;i<n;i++){
				if(strcmp(l[i].b_author,author)==0){
					printf("\n%d\n%s\n%s\n%s\n", l[i].b_no, l[i].b_title, l[i].b_author, l[i].b_issue);
					count1++;
				}
			}
			printf("Total No of books with this author are %d", count1);
			break;
			
			case 5:
				printf("The total no of books in library are %d", n);
				break;
				
			case 6:
				printf("Enter reference no: ");
				scanf("%d", &ref_no);
				printf("\n------------------------------------------------------------------\n");
				printf("\nPress 1 to issue the book");
				printf("\nPress 2 to return the book");
				printf("\n------------------------------------------------------------------\n");
				printf("Enter your choice: ");
				scanf("%d", &choice);
				switch(choice){
					case 1:
						for(i=0;i<n;i++){
							if(l[i].b_no==ref_no){
								n--;
							}
							printf("The total no of books after issuing are %d",n);
							break;
							
					case 2: 
					    for(i=0;i<n;i++){
							if(l[i].b_no==ref_no){
								n++;
							}
							
						}
						printf("The total no of books after returning are %d",n);
						break;
				}
				break;
				
			default:
				exit(0);
				break;
			
				
		}
	}
}

}

