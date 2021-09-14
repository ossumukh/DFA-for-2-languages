#include <bits/stdc++.h>
using namespace std;
int d=1,dfa=1;

// This function is for the first state (Q1) of DFA
void s1(char ca)
{
    if (ca == 'a') {
        d = 2;
    }
    else if (ca == 'b') {
        d = 3;
    }
    else {
        d = -1;
    }
}

// This function is for the second state (Q2) of DFA
void s2(char ca)
{
    if (ca == 'b') {
        d = 4;
    }
    else if (ca == 'a') {
        d = 1;
    }
    else {
        d = -1;
    }
}

// This function is for the third state (Q3)of DFA
void s3(char ca)
{
    if (ca == 'b') {
        d = 1;
    }
    else if (ca == 'a') {
        d = 4;
    }
    else {
        d = -1;
    }
}

// This function is for the fourth state (Q4) of DFA
void s4(char ca)
{
    if (ca == 'b') {
        d = 2;
    }
    else if (ca == 'a') {
        d = 3;
    }
    else {
        d = -1;
    }
}

int isAcceptor(char str1[])
{
    // store length of string
    int i, len = strlen(str1);

    for (i = 0; i < len; i++)
    {
    	int z=d;
        if (d == 1)
            s1(str1[i]);

        else if (d == 2)
            s2(str1[i]);

        else if (d == 3)
            s3(str1[i]);

        else if (d == 4)
            s4(str1[i]);
        else
            return 0;
        cout<<z<<"\t\t"<<str1[i]<<"\t\t"<<d<<endl;
    }
    if (d == 3)
        return 1;
    else
        return 0;
}
void state1(char c)
{
    if (c == '1') {
        dfa = 2;
    }
    else if (c == '2') {
        dfa = 3;
    }
    else if (c == '3') {
        dfa = 1;
    }
    else if (c == '4') {
        dfa = 2;
    }
    else if (c == '5') {
        dfa = 3;
    }
    else if (c == '6') {
        dfa = 1;
    }
    else if (c == '7') {
        dfa = 2;
    }
    else if (c == '8') {
        dfa = 3;
    }
    else if (c == '9') {
        dfa = 1;
    }
    else if (c == '0') {
        dfa = 1;
    }
    else {
        dfa = -1;
    }
}
// This function is for the second state (Q2) of DFA
void state2(char c)
{
    if (c == '1') {
        dfa = 3;
    }
    else if (c == '2') {
        dfa = 1;
    }
    else if (c == '3') {
        dfa = 2;
    }
    else if (c == '4') {
        dfa = 3;
    }
    else if (c == '5') {
        dfa = 1;
    }
    else if (c == '6') {
        dfa = 2;
    }
    else if (c == '7') {
        dfa = 3;
    }
    else if (c == '8') {
        dfa = 1;
    }
    else if (c == '9') {
        dfa = 2;
    }
    else if (c == '0') {
        dfa = 2;
    }
    else {
        dfa = -1;
    }
}
// This function is for the third state (Q3)of DFA
void state3(char c)
{
    if (c == '1') {
        dfa = 1;
    }
    else if (c == '2') {
        dfa = 2;
    }
    else if (c == '3') {
        dfa = 3;
    }
    else if (c == '4') {
        dfa = 1;
    }
    else if (c == '5') {
        dfa = 2;
    }
    else if (c == '6') {
        dfa = 3;
    }
    else if (c == '7') {
        dfa = 1;
    }
    else if (c == '8') {
        dfa = 2;
    }
    else if (c == '9') {
        dfa = 3;
    }
    else if (c == '0') {
        dfa = 3;
    }
    else {
        dfa = -1;
    }
}
// This function is for the fourth state (Q4) of DFA
int isAccepted(char str[])
{
    // store length of string
    int i, len = strlen(str);

    for (i = 0; i < len; i++)
    {
    	int z=dfa;
        if (dfa == 1)
            state1(str[i]);

        else if (dfa == 2)
            state2(str[i]);

        else if (dfa == 3)
            state3(str[i]);
        else
            return 0;
        cout<<z<<"\t\t"<<str[i]<<"\t\t"<<dfa<<endl;
    }
    if (dfa == 1)
        return 1;
    else
        return 0;
}
void display()
{
	cout<<"TRANSITION TABLE OF DFA TO ACCEPT STRINGS OF A's AND B's HAVING EVEN A AND ODD B\n";
	cout<<"INITIAL STATE IS 1\nFINAL STATE IS 3\n";
	cout<<"STATES\ta\tb\n";
	cout<<"1\t2\t3\n";
	cout<<"2\t1\t4\n";
	cout<<"3\t4\t1\n";
	cout<<"4\t3\t1\n";
}
void display2()
{
	cout<<"TRANSITION TABLE OF DFA TO ACCEPT DECIMAL STRINGS DIVISIBLE BY 3\n";
	cout<<"INITIAL STATE IS 1\nFINAL STATE IS 1\n";
	cout<<"STATES\t0,3,6,9\t1,4,7\t2,5,8\n";
	cout<<"1\t1\t2\t3\n";
	cout<<"2\t2\t3\t1\n";
	cout<<"3\t3\t1\t2\n";
}
bool isvalid(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!='a'&&str[i]!='b')
		return false;
	}
	return true;
}
bool isvalid1(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]<'0'||str[i]>'9')
		return false;
	}
	return true;
}
int main()
{
	display();
	cout<<"\n";
	display2();
    while(1)
    {
    	cout<<"\nMENU\n";
    	printf("1-Dfa to accept string of a's and b's having even a and odd b\n");
    	printf("2-Dfa to accept decimal string divisible by 3\n");
    	printf("3-Exit the code\n");
        printf("Enter a choice\n");
        int p;
        scanf("%d",&p);
        switch(p)
        {
            case 1:	char str1[100];
            		x:
                    printf("Enter a string containing a's and b's: ");
                    d=1;
                    scanf("%s",str1);
                    if(!isvalid(str1))
                    {
                    	cout<<"ENTER AGAIN!!!\n";
                    	cout<<"INPUT STRING SHOULD ONLY CONTAIN A's AND B's\n";
                    	goto x;
					}
                    cout<<"INITIAL STATE\tCHARACTER\tFINAL STATE\n";
                    if (isAcceptor(str1))
                        printf("STRING %s is ACCEPTED BY DFA\n",str1);
                    else
                        printf("STRING %s is NOT ACCEPTED BY DFA\n",str1);
            		break;

            case 2:	char str[100];
            		y:
                    printf("Enter a string containing digits from 0 to 9: ");
                    dfa=1;
                    scanf("%s",str);
                    if(!isvalid1(str))
                    {
                    	cout<<"ENTER AGAIN!!!\n";
                    	cout<<"INPUT STRING SHOULD ONLY NUMBERS FROM 0 TO 9\n";
                    	goto y;
					}
                    cout<<"INITIAL STATE\tCHARACTER\tFINAL STATE\n";
                    if (isAccepted(str))
                        printf("STRING %s is ACCEPTED BY DFA\n",str);
                    else
                        printf("STRING %s is NOT ACCEPTED BY DFA\n",str);
            		break;
            case 3: cout<<"EXITTING THE CODE\n";
					exit(0);
            default:cout<<"INVALID CHOICE!!!\n";

        }
    }
}
