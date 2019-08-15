#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
struct student{
	char name[100],family[100],ID[15],age[3],gender[7];
	char course[100],phoneNum[20],address[100];
	student *next;
};
struct student *head;
student* create_node(student src) {
    student *t;
    t = (student *) malloc(sizeof(struct student));
    strcpy(t->address,src.address);
    strcpy(t->age,src.age);
    strcpy(t->family,src.family);
    strcpy(t->course,src.course);
    strcpy(t->gender,src.course);
    strcpy(t->ID,src.ID);
    strcpy(t->name,src.name);
    strcpy(t->phoneNum,src.phoneNum);
    t->next=src.next;
    return t;
}
void menu(){
	printf("Welcome to the phonebook!!\n");
	printf("......................................................................\n");
	printf("What do you want to do?\n\n");
	printf("1-Add\t2-Delete\t3-Display\t4-Search\t5-Modify\t6-Exit\n\nPlease Enter a number:\n");
}

//........................................................................................................................................
struct student input(){
	struct student t;
	printf("Enter name:\n");
	scanf("%s",t.name);
	printf("Enter LastName:\n");
	scanf("%s",t.family);
	printf("Enter ID:\n");
	scanf("%s",t.ID);
	printf("Enter age:\n");
	scanf("%s",t.age);
	printf("Enter gender:\n");
	scanf("%s",t.gender);
	printf("Enter course:\n");
	scanf("%s",t.course);
	printf("Enter phone no:\n");
	scanf("%s",t.phoneNum);
	printf("Enter address:\n");
	scanf("%s",t.address);
	t.next=NULL;
	return t;
}
//........................................................................................................................................
void search(){
	struct student p;
	int choice;
	int i=0;
	FILE *f;
	char name[100];

	f=fopen("data.b","rb");
	if(f==NULL)
	{
    	printf(" error in opening!\n");
    	exit(1);

	}
	printf("With which data do you want to search?\n");
	printf("\n1-Name 2-ID 3-Age 4-Gender 5-Course 6-PhoneNum 7-Address 8-LastName 9-Name and LastName\n");
	scanf("%d",&choice);
	printf("Please enter the requested info:\t\n");
	switch(choice){
		case 1:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.name,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//..................................................................
		case 2:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.ID,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;

//......................................................................................
		case 3:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.age,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//..........................................................................
		case 4:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.gender,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//....................................................
		case 5:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.course,name)==0)
    			{	
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}
			}
			if(i==0)
    			printf("Details not found!");	
		 fclose(f);
		break;
//........................................................................
		case 6:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.phoneNum,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//...........................................................
		case 7:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.address,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//................................................................
		case 8:
			scanf("%s",name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.family,name)==0)
    			{
        			printf("\n\tDetail Information About %s\n",name);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//..................................................................
		case 9:
			char family[100];
			printf("Enter Name:\n");
			scanf("%s",name);
			printf("Enter LastName:\n");
			scanf("%s",family);
			while(fread(&p,sizeof(p),1,f)==1)
			{
    			if(strcmp(p.family,family)==0&&strcmp(p.name,name)==0)
    			{
        			printf("\n\tDetail Information About %s %s\n",name,family);
        			printf("...........................................\n");
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
 			fclose(f);
			break;
//..................................................................	
		default :
			printf("invalid choice!\n");
			break;			
	}
}
//.........................................................................................................
int searchadd(struct student *tmp){
    int i=0;
    FILE *f=fopen("data.b","rb");
    struct student p;
    while(fread(&p,sizeof(p),1,f)==1)
    {
        if(strcmp(p.name,tmp->name)==0)
        {
            i++;
        }
		if(strcmp(p.family,tmp->family)==0)
        {
            i++;
        }
        if(strcmp(p.ID,tmp->ID)==0)
        {
            i++;
        }
        if(strcmp(p.age,tmp->age)==0)
        {
            i++;
        }
        if(strcmp(p.gender,tmp->gender)==0)
        {
            i++;
        }
        if(strcmp(p.course,tmp->course)==0)
        {
            i++;
        }
        if(strcmp(p.phoneNum,tmp->phoneNum)==0)
        {
            i++;
        }
        if(strcmp(p.address,tmp->address)==0)
        {
            i++;
        }
        if(i)
            return i;
    }
    fclose(f);
    return 0;
}
//.......................................................................................................................................
void save(){
	FILE *fp=fopen("data.b","wb");
	struct student *t=head;
	while(t!=NULL){
		fwrite (t, sizeof(struct student), 1, fp); 
		t=t->next;
	}
	fclose(fp);
}
//.......................................................................................................................................

void add(struct student *prev, struct student *new_node){
	if(prev==NULL){
		new_node->next=head;
		head=new_node;
	//	save();
	}
	else{
		new_node->next=prev->next;
		prev->next=new_node;
	//	save();
	}
}
int compare(struct student *a,struct student *b){
	if(strcmp(a->name,b->name)==0) return 1;
	if(strcmp(a->family,b->family)==0) return 1;
	if(strcmp(a->ID,b->ID)==0) return 1;
	if(strcmp(a->age,b->age)==0) return 1;
	if(strcmp(a->gender,b->gender)==0) return 1;
	if(strcmp(a->course,b->course)==0) return 1;
	if(strcmp(a->phoneNum,b->phoneNum)==0) return 1;
	if(strcmp(a->address,b->address)==0) return 1;
	return 0;
}
struct student *find(struct student *obj){
	struct student *t=head;
	while(t!=NULL){
	if(compare(t,obj)){
		return t;
	}
	t=t->next;
	}
	return NULL;
}
void load(){
	FILE *fp=fopen("data.b","rb");
	struct student cur;
	struct student *prev=NULL;
	while(1){
		int m=fread(&cur,sizeof(struct student), 1, fp);
		if(m<1) break;
		
		struct student *ptr = create_node(cur);
		add(prev,ptr);
		prev=ptr;
	}
	fclose(fp);
}
void del(){
	char name[100];
	struct student *it=head;
	int choice;
	int c;
	int i=0;
	struct student cur,p;
	FILE *f=fopen("data.b","rb");
	if(f==NULL)
	{
    	printf(" error in opening!\n");
    	exit(1);

	}
	printf("With which data do you want to delete?\n\n");
	printf("1-Name 2-LastName 3-Age 4-Gender 5-Course 6-PhoneNum 7-Address 8-ID\n9-All Details\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.name,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.name,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->name,cur.name)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->name,cur.name)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else
			{
			printf("Details not found!");
			break;
			}
			}
			}
			break;
		case 2:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.family,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.family,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->family,cur.family)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->family,cur.family)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else {
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 3:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.age,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.age,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->age,cur.age)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->age,cur.age)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else{
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 4:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.gender,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.gender,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->gender,cur.gender)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->gender,cur.gender)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else{
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 5:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.course,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.course,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->course,cur.course)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->course,cur.course)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else{
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 6:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.phoneNum,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
			if(strcmp(p.phoneNum,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->phoneNum,cur.phoneNum)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->phoneNum,cur.phoneNum)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else{
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 7:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.address,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.address,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->address,cur.address)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->address,cur.address)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else{
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 8:
			printf("which contact do you want to delete?\n");
			scanf("%s",name);
			strcpy(cur.ID,name);
			while(fread(&p,sizeof(p),1,f)==1)
			{
			if(strcmp(p.ID,name)==0)
    			{
        			printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s \n",p.name,p.family,p.address,p.age,p.course,p.gender,p.ID,p.phoneNum);
        			printf("...........................................\n");
   					i=1;
    			}	
			}
			if(i==0)
    			printf("Details not found!");
    			printf("Do you want to delete?\n1-yes\t2-no\n");
    			scanf("%d",&c);
    			if(c==1){
			if(head==NULL) return;
			if(strcmp(head->ID,cur.ID)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}
			while(it->next!=NULL){
			while(it->next!=NULL){
				if(strcmp(it->next->ID,cur.ID)==0) break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else{
				printf("Details not found!");
				break;
			}
			}
			}
			break;
		case 9:
			struct student A;
			printf("which contact do you want to delete?\n");
			A=input();
			if(head==NULL) return;
			if(strcmp(head->name,A.name)==0&&strcmp(head->family,A.family)==0&&strcmp(head->gender,A.gender)==0&&strcmp(head->age,A.age)==0&&strcmp(head->phoneNum,A.phoneNum)==0&&strcmp(head->address,A.address)==0&&strcmp(head->course,A.course)==0&&strcmp(head->ID,A.ID)==0){
				struct student *tmp=head;
				head=head->next;
				free(tmp);
				save();
				return;
			}

			while(it->next!=NULL){
				if(strcmp(head->name,A.name)==0&&strcmp(head->family,A.family)==0&&strcmp(head->gender,A.gender)==0&&strcmp(head->age,A.age)==0&&strcmp(head->phoneNum,A.phoneNum)==0&&strcmp(head->address,A.address)==0&&strcmp(head->course,A.course)==0&&strcmp(head->ID,A.ID)==0)
					break;
				it=it->next;
			}
			if(it->next!=NULL){
				struct student *tmp=it->next;
				it->next=it->next->next;
				save();
				free(tmp);
			}
			else printf("Details not found!");
			break;	
	}
}
//................................................................................................................		
void display(){
	FILE *f;
	f=fopen("data.b","rb");
	if(f==NULL)
	{
    	printf(" error in opening!\n");
    	return;
	}
	struct student t;
	while(fread(&t,sizeof(t),1,f)==1)
	{
		printf("\nName:%s\nLastName:%s\nAddress:%s\nAge:%s\nCourse:%s\nGender:%s\nID:%s\nPhone no:%s\n",t.name,t.family,t.address,t.age,t.course,t.gender,t.ID,t.phoneNum);
	}
}
//.........................................................................................................................................................
void modify()
{
    int c;
    FILE *f;
    int flag=0;
    struct student p,s;
	char  name[50];
	f=fopen("data.b","rb+");
	if(f==NULL)
		{
			printf("CONTACT'S DATA NOT ADDED YET.");
			return;
		}
	else
	{
	    system("cls");
		printf("Enter CONTACT'S NAME TO MODIFY:\n");
            scanf("%s",name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {
					s=input();
                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&s,sizeof(p),1,f);
                    flag=1;
                    break;



                }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("Contact is successfully modified!\n");

            }
            else
            {
                    printf("Detail not found\n");

            }
            fclose(f);
	}
}
//.........................................................................................................................................................	

int main(){
	system("color 61");
	FILE *fp;
	load();
	int choice;
struct student t;
char name[100];
bool flag=true;
while(flag){
	menu();
	scanf("%d",&choice);
	system("cls");
	switch(choice){
		case 1:
			t=input();
			if(searchadd(&t)){
				struct student *cur;
				cur=head;
				while(cur->next!=NULL)
				cur=cur->next;
				add(cur,create_node(t));
			}
			else{
				if(head==NULL) add(head, create_node(t));
				else{
				struct student cur;
				printf("where do you want to add?\nPlease note that if the requested data is not found the contact will be saved at the begining of the list!\n ");
				scanf("%s",name);
				strcpy(cur.name,name);
				struct student *ptr = find(&cur);
				add(ptr, create_node(t));
			}
			}
			save();
			printf("Enter any key");
	 		getch();
    		system("cls");
			break;
		case 2:
			del();
			printf("Enter any key");
	 		getch();
    		system("cls");
			break;
		case 3:
			display();
			printf("Enter any key");
	 		getch();
    		system("cls");
			break;
		case 4:
			search();
			printf("Enter any key");
	 		getch();
    		system("cls");
			break;
		case 5:
			modify();
			printf("Enter any key");
	 		getch();
    		system("cls");
			break;
		case 6:
			flag=false;
			break;
		default: 
		printf("Invalid choice!\n");
		printf("Enter any key");
	 		getch();
    		system("cls");
		break;	
}
}
}
