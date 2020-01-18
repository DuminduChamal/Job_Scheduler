#include <bits/stdc++.h> 
using namespace std;

// struct job with jobid,deadline,profit 
struct Job { 
    string jobid; 
    int deadline; 
    int profit; 
}; 

bool compareTwoStudents(Job a, Job b) 
{ 
    return (a.profit > b.profit); 
}

int main()
{
	int n,i;
	printf("Enter the number of jobs : ");
	scanf("%d",&n);
	struct Job jobArr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the job id of job %d : ",i+1);
		scanf("%s",&jobArr[i].jobid);
		printf("Enter the deadline of job %d : ",i+1);
		scanf("%d",&jobArr[i].deadline);
		printf("Enter the profit of job %d : ",i+1);
		scanf("%d",&jobArr[i].profit);
	}
}
