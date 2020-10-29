#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[])
{
	int total_threads, thread_ID;

	#pragma omp parallel
	{
		total_threads = omp_get_num_threads();
		thread_ID = omp_get_thread_num();
		printf("hello world from %d of %d\n",thread_ID,total_threads);
	}
	return 0;

}
