typedef struct {
	char GroupID[4];
	char TeamName[4];
	int Points[4];
	int Goals[4];
	int Goal_difference[4];
} group;
group a[8];
int n;

void Add_groups() {
	int i,j,total;
	while (total<1 || total>8) {
		printf("Enter total: ");
		scanf("%d", &total);
	}
	n=total;	
	for (i=1;i<=n;i++) {
		do {
			printf("Enter groupID: ");
		    scanf("%s", &a[i].GroupID[i]);
		} while (a[i].GroupID[i]<'A' || a[i].GroupID[i]>'Z');
		
		for (j=0;j<4;j++) {
			printf("Enter team name: ");
			scanf("%s", &a[i].TeamName[j]);
			do {
				printf("Enter points: ");
			    scanf("%d", &a[i].Points[j]);  
			} while (a[i].Points[j]<0);
			printf("Enter the goal difference: ");
			scanf("%d", &a[i].Goal_difference[j]);
		}
	}
}

void Print() {
	int i,j;
	for (i=1;i<=n;i++) {
		printf("Group %s\n", a[i].GroupID[i]);
		for(j=0;j<4;j++) {
			printf("%s\t%d\t%d\n", a[i].TeamName[j], a[i].Points[j], a[i].Goal_difference[j]);	
		}
	}
}

void Find() {
	char name[20];
	int i,j,no_result;
	printf("Enter a team name: ");
	scanf("%s", &name);
	for (i=1;i<=n;i++) {
		for (j=0;j<4;j++) {
			if (strcmp(name,a[i].TeamName[j])==0) printf("Group %s, %d Point, %d Goal difference\n", a[i].GroupID[i], a[i].Points[j], a[i].Goal_difference[j]);
			else no_result+=1;
		}
	}
	if (no_result==(n*4)) printf("No result\n");
}

void Match_result() {
	char team1[20], team2[20];
	int goal1, goal2;
	int i,j,k;
	while(goal1<0 || goal2<0) {
		printf("Enter match result in format team_1 team_2 goal_1 goal_2\n");
	    scanf("%s %s %d %d", &team1, &team2, &goal1, &goal2);
	}
	for (i=1;i<=n;i++) {
		for (j=0;j<4;j++) {
			for (k=0;k<4;k++) {
				if (strcmp(team1,a[i].TeamName[j])==0 && strcmp(team2,a[i].TeamName[k])==0) {
					if (goal1>goal2) {
						a[i].Points[j] = 3;
						a[i].Points[k] = 0;
					}
					else if (goal1==goal2) {
						a[i].Points[j] = 1;
						a[i].Points[k] = 1;
					}
					else {
						a[i].Points[j] = 0;
						a[i].Points[k] = 3;
					}
					a[i].Goal_difference[j] = goal1 - goal2;
					a[i].Goal_difference[k] = goal2 - goal1;
					printf("%s\t%d\t%d\n", a[i].TeamName[j], a[i].Points[j], a[i].Goal_difference[j]);
					printf("%s\t%d\t%d\n", a[i].TeamName[k], a[i].Points[k], a[i].Goal_difference[k]);
				}
				else printf("Different group\n");
			}	 
		}
	}
}

void Sort() {
	int x,y;
	char z;
	int i,j;
	for (i=1;i<=n;i++) {
		for (j=0;j<3;j++) {
			if (a[i].Points[j] < a[i].Points[j+1]) {
				x = a[i].Points[j];
				a[i].Points[j] = a[i].Points[j+1];
				a[i].Points[j+1] = x;
			}
			else if (a[i].Points[j] == a[i].Points[j+1]) {
				y = a[i].Goal_difference[j];
				a[i].Goal_difference[j] = a[i].Goal_difference[j+1];
				a[i].Goal_difference[j+1] = y;
			}
			else if (a[i].Points[j]==a[i].Points[j+1] && a[i].Goal_difference[j]==a[i].Goal_difference[j+1]) {
				if (strcmp(a[i].TeamName[j],a[i].TeamName[j+1])>0) {
					z = a[i].TeamName[j];
					a[i].TeamName[j] = a[i].TeamName[j+1];
					a[i].TeamName[j+1] = z;
				}
			}
		}
	}
	for (i=1;i<=n;i++) {
		printf("Group %s\n", a[i].GroupID[i]);
		for(j=0;j<4;j++) {
			printf("%s\t%d\t%d\n", a[i].TeamName[j], a[i].Points[j], a[i].Goal_difference[j]);
		}
	}
}

#include<stdio.h>
#include<string.h>
int main () {
	int opt;
	do {
		printf("Menu\n");
	    printf("1.Add group\n");
	    printf("2.Print\n");
	    printf("3.Find information\n");
	    printf("4.Input match result\n");
	    printf("5.Sort\n");
	    printf("6.Exit\n");
	    printf("Enter an option: ");
	    scanf("%d", &opt);
	   	if(opt==1) Add_groups();
	   	if(opt==2) Print();
        if(opt==3) Find();
        if(opt==4) Match_result();
        if(opt==5) Sort();
	    if(opt==6) printf("Exit\n");
	}while(opt!=6);      
}
