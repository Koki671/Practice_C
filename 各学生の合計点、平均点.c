#include <stdio.h>

void main()
{
	int i;
    int j;
	int sum0=0, sum1=0;
	int seiseki[6][2]={ {65, 71 } ,
                    {84, 83 } ,
                    {74, 74 } ,
                    {90, 90 } ,
                    {87, 78 } ,
                    {93, 95 }  };

/* (1) 各人の合計点 */
	for(i=0; i<6; i++){
        for(i = 0; i< 6; i++){
		printf("%d番目の合計点:%d点¥n", i, seiseki[i][j]+seiseki[i][j]);
	}
    }

/* (2) 各科目の平均点 */
	for(i=0; i<6; i++){
		sum0+=seiseki[i][0];
		sum1+=seiseki[i][1];
	}
		printf("語学の平均点：%.1f点¥n", (float)sum0/6);
		printf("力学の平均点：%.1f点¥n", (float)sum1/6);
}
