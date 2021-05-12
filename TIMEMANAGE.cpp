#include <iostream>
using namespace std;
struct node
{
	int priority;
	string info;
	struct node *link;
};
class Priority_Queue
{
    private:
        node *front;
    public:
        Priority_Queue()
        {
            front = NULL;
        }
  
    void insert(string item, int priority)
        {
            node *tmp, *q;
            tmp = new node;
            tmp->info = item;
            tmp->priority = priority;
            if (front == NULL || priority < front->priority)
            {
                tmp->link = front;
                front = tmp;
            }
            else
            {
                q = front;
                while (q->link != NULL && q->link->priority <= priority)
                    q=q->link;
                tmp->link = q->link;
                q->link = tmp;
            }
        }
       void display()
        {
            node *ptr;
            ptr = front;
            if (front == NULL)
                cout<<"Queue is empty\n";
            else
            {	cout<<"Queue is :\n";
                cout<<"Time Priority       Activity\n";
                while(ptr != NULL)
                {
                    cout<<ptr->priority<<"                 "<<ptr->info<<endl;
                    ptr = ptr->link;
                }
                cout<<"*************THANK YOU**************";
            }
        }
};

    

int main()
{ 
  int choice,  priority;
	
	 string item="";
    Priority_Queue pq; 
    cout<<"********WELCOME TO THE TIME MANAGEMENT POTRAL SYSTEM********\n";
	cout<<"PLEASE LOGIN TO THE TIME MANAGEMENT SYSTEM\n";
	int login;
    cout<<"PLEASE ENTER YOUR NAME:\n";
 	string name="";
    cin>>name;
    cout<<"PLEASE ENTER YOUR LOGIN PASSWORD IN DIGITS:\n";
     cin>>login;
    	cout<<name<<"\n";
    	cout<<login<<"\n";
    int t,no,k;
	k=0;
  
	char str[100];
	int num[100];
	cout<<"ENTER THE TIME FORMAT  FOR THE JOB:\n";
	cin>>t;
	if(t==24)
	{
		while(k<24)
		{
			cout<<"ENTER YOUR DAILY ACTIVITY PLEASE:\n";
			cin>>str;
		item=str;
		
			cout<<"ENTER THE STIPULATED TIME FOR THIS ACTIVITY :\n";
			cin>>no;
			priority=no;
			k=no+k;
			
			pq.insert(item, priority);
			
		}
		
			
		    cout<<"!!!!!!! DAILY ACTIVITY EXCEEDING THE TIME LIMIT!!!!!!\n";
			cout<<"SORRY! YOU CAN'T MANAGE ANYMORE ACTIVIY WHITIN THIS TIME FORMAT\n";
			cout<<"PLEASE SHEDULE YOUR ACTIVITY ON THE NEXT DAY OR IN NEXT DAY TIME FORMAT\n";
			cout<<"YOUR TOTAL TIME IS:"<<k<<"\n";
			cout<<"NAME OF THE USER:"<<name<<"\n";
			pq.display();
			
		
		
	}
	else 
	{
	
		while(k<12)
		{
			cout<<"ENTER YOUR DAILY ACTIVITY PLEASE:\n";
			cin>>str;
		    item=str;
		
			cout<<"ENTER THE STIPULATED TIME FOR THIS ACTIVITY :\n";
			cin>>no;
			priority=no;
			k=no+k;
			
			pq.insert(item, priority);
			
		}
		
			
		    cout<<"!!!!!!! DAILY ACTIVITY EXCEEDING THE TIME LIMIT!!!!!!\n";
			cout<<"SORRY! YOU CAN'T MANAGE ANYMORE ACTIVIY WHITIN THIS TIME FORMAT\n";
			cout<<"PLEASE SHEDULE YOUR ACTIVITY ON THE NEXT DAY OR IN NEXT DAY TIME FORMAT\n";
			cout<<"YOUR TOTAL TIME IS:"<<k<<"\n";
			cout<<"NAME OF THE USER:"<<name<<"\n";
			pq.display();
			
		
		
	}	 
	return 0;
}
	

