/*Assume that we have a demand-paged memory. The page table is held in registers. It takes 8 milliseconds to service a page
fault if an empty frame is available or if the replaced page is not modified and 20 milliseconds if the replaced page is modified.
Memory-access time is 100 nanoseconds. Assume that the page to be replaced is modified 70 percent of the time.
What is the maximum acceptable page-fault rate for an effective access time of no more than 200 nanoseconds?*/

/*Let p be the page fault rate (the probability that a memory access results in a page fault).
Then (1 − p) is the probability that a memory access costs 100 nsec.
The probability that a page fault costs 20 msec is 0.7 ¤ p and the probability that a page fault costs 8 msec is 0.3 ¤ p.
Since 1 nsec = 1000000 msec,
(1 − p) * 100 + 0.7 * p * 20000000 + 0.3 * p * 8000000 = 200
(14000000 + 2400000 − 100)p = 100
p = 100/(16400100) = 6.1 * 10−6 = .0000061 = .00061%*/
//using namespace std;
#include<stdio.h>
int main()
{
	float p;//the probability that a memory access results in a page fault; (1 − p) is the probability that a memory access costs 100 nsec.
	float twenty=0.7;//probability that a page fault costs 20 msec
	float eight=0.3;//probability that a page fault costs 8 msec
	p=(200-100)/(twenty*20000000+eight*8000000-100);
	printf("%f %%",p*100);//*100 for percentage
	//printf("%%");
}
//using namespace std;
//#include
