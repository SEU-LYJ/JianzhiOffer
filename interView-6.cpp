#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) :val(x),next(nullptr) {};
	void AddList(int NodeVal)
	{
		ListNode *temp;
		temp=this;
		while (temp->next != nullptr) temp = temp->next;
		ListNode *pNew=new ListNode(NodeVal);
		temp->next = pNew;

	}
};
vector<int> printListFromTailToHead(ListNode* head)
{
	vector<int> PrintValues;
	stack<int> TempValues;
	while (head != nullptr)
	{
		TempValues.push(head->val);
		head = head->next;
	}
	while (!TempValues.empty())
	{
		PrintValues.push_back(TempValues.top());
		TempValues.pop();
	}
	return PrintValues;
}
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) 
	{
		vector<int> PrintValues;
		stack<int> TempValues;
		while (head != nullptr)
		{
			TempValues.push(head->val);
			head = head->next;
		}
		while (!TempValues.empty())
		{
			PrintValues.push_back(TempValues.top());
			TempValues.pop();
		}
		return PrintValues;
	}
};
int main()
{
	ListNode A(1);
	A.AddList(2);
	A.AddList(3);//自己写的测试集
	vector<int> OutPutList = printListFromTailToHead(&A);
	for (auto tempNode = OutPutList.begin(); tempNode < OutPutList.end(); tempNode++) cout << (*tempNode) << endl;
	return 0;
}

