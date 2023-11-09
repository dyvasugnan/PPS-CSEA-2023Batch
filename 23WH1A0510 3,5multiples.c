int main()
{
	int i,sum =0,sum1=0;
		
	 for (i=1; i<1000; i++)
	{
     if (i%3 == 0)
		  sum += i;
     if (i%5== 0)
		 sum += i;
     if (i%15 ==0)
           sum1 += i;
	}
	printf(" %i", sum-sum1);
	return 0;
}