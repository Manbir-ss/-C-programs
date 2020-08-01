int main() {
	float numbers[5],total=0, avg;
	int j, pctr=0; 
	printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			pctr++;
			total += numbers[j];
            
		}	
    }
    avg = total/pctr;
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nAverage value of the said positive numbers: %.2f", avg);
	printf("\n");
}