/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col

typedef long long ll;
typedef unsigned int ui;

struct SLL
{
	int data;
	SLL *next;
};

SLL* append(SLL *head,int n)
{
   SLL *temp = new SLL();
   temp->data = n;
   temp->next = NULL;
   if(head == NULL)
   {
       return temp;
   }
   SLL *temp1;
   for(temp1 = head;temp1->next!=NULL;temp1= temp1->next);
   temp1->next = temp;return head;
}

SLL* mergelists(SLL *headA, SLL* headB)
{
  if(headA == NULL) return headB;
  else if(headB == NULL) return headA;
  else {
      if(headA->data < headB->data) {
          SLL * restA = headA->next;
          headA->next = mergelists(restA,headB);
          return headA;
      }
      else {
          SLL * restB = headB->next;
          headB->next = mergelists(headA,restB);
          return headB;
      }
  }
}
void display(SLL *head)
{
	bool ok = false;
	while(head != NULL)
	{
		if(ok)cout<<" ";
		else ok = true;
		cout<<head->data;
		head = head->next;
	}
    cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		SLL *A = NULL;
		SLL *B = NULL;
		int n;
        cin>>n;
		while(n--){
			int x; cin>>x;
			A = append(A,x);
        }
		cin>>n;
        while(n--){
			int y;
            cin>>y;
			B = append(B,y);
		}
		A = mergelists(A,B);
		display(A);
	}
}
