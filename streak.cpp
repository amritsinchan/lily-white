#include<iostream>
using namespace std;
int main ()
{
  char box[]={'R','R','R','B','R','X','M'};
  int box2[7];
  int sum=0;
  int i=0;
  int n=0;
  int bonus=0;
  int sum2=0;
  while(box[i]!='\0') //counting no.of elements
  {
    n++;
    i++;
  }
  cout<<"array is"<<endl;
  for(i=0;i<n;i++){
    if(box[i]=='R')  //converting array alphabets to numbers
        box2[i]=10;
    else if(box[i]=='B')
        box2[i]=20;
    else
        box2[i]=0;
    cout<<box2[i]<<',';
  }
  cout<<endl;
  if(box2[0]==10)
  sum=10;
  else if(box2[0]==20)// finding the first element
    sum=20;
  else if(box[0]==0)
    sum=0;
    else
        sum=0;
for(i=1;i<n;i++)
  {
    if(box2[i]==box2[i-1]){
    bonus=bonus+box2[i];
    sum2=sum2+bonus;} //finding sum index 1 onwards
    else
    sum2=sum2+box2[i];

  }
  sum2= sum2+sum;
  cout << "\nSum of array elements : " << sum2;//adding the zero index element to the sum
  return 0;
}
