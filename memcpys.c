#include <stdio.h>
#include <string.h>

int main(){
	
	int a[10],b[5];
	int ret_val;
	
	for (int i = 0; i<5; i++){
		
		b[i] = (i+1) * (i+1);
	}
	
	// using memcpy_s for safer copying of memory
	
	ret_val = memcpy_s(a,20,b,sizeof(b));	// here we are copying the data from b to a.
	
	printf("After copying using memcpy_s : ret_val : %d\n\n",ret_val);
	for (int i = 0; i<10; i++){
		printf("%d ",a[i]);
	}
	// Last five will be garbage values of a
	
}