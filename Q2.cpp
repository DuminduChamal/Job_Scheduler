#include <bits/stdc++.h> 
using namespace std;

// struct job with jobid,deadline,profit 
struct Job { 
    string jobid; 
    int deadline; 
    int profit; 
}; 

bool compareJobProfits(Job a, Job b) 
{ 
    if(a.profit > b.profit)		
		return 1;
	else
		return 0;
}

int main()
{
	int n,i;
	cout<<"Enter the number of jobs : ";
	cin>>n;
	struct Job jobArr[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the job id of job "<<i+1<<": ";
		cin>>jobArr[i].jobid;
		cout<<"Enter the deadline of job "<<i+1<<": ";
		cin>>jobArr[i].deadline;
		cout<<"Enter the profit of job "<<i+1<<": ";
		cin>>jobArr[i].profit;
		cout<<"Job Successfully Added!\n";
	}
	sort(jobArr,jobArr+n,compareJobProfits);
	
	for(i=0;i<n;i++)
	{
		cout << "job id : " << jobArr[i].jobid<<"\n";
	}
}
