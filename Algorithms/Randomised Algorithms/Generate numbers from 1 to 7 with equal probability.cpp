#include <bits/stdc++.h>
using namespace std;

int probab1to7()
{
int val=5*(foo()-1)+foo;
if(val<22)
{
return val%7+1;
}
else
return probab1to7();
}
