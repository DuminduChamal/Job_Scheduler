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
	int n,i,j;
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
	
	int days = 0;
	for(i = 0;i < n-1; i++)
    {
       if(days < jobArr[i].deadline)
           days = jobArr[i].deadline;
    }
    
	sort(jobArr,jobArr+n,compareJobProfits);
	
	string order[days];
	for(i=0;i<days;i++)
	{
		order[i]="-1";
//		cout<<"order array : "<<order[i]<<"\n";
	}
	
	cout<<"\nJobs order after sorting according to maximum profit\n";
	cout<<"Job ID\tProfit\tDeadline\n";
	for(i=0;i<n;i++)
	{
		cout<<i+1<<"."<< jobArr[i].jobid<<"\t"<<jobArr[i].profit<<"\t"<<jobArr[i].deadline<<"\n";
	}

	for(i=0;i<n;i++)
	{
		for(j=(jobArr[i].deadline)-1;j>=0;j--)
		{
			if((order[j])=="-1")
			{
				order[j]=jobArr[i].jobid;
				break;
			}
		}
	}
		
	int no=0;
	cout << "\nNumber of units of time to work : " << days<<"\n\n";
	cout << "Order of jobs to earn maximum profit\n";
	for(i=0;i<days;i++)
	{
		if(order[i]=="-1")
			continue;
		no++;
		cout << no << "." << order[i]<<"\n";
	}
}
