// 各人の2科目の合計点を計算し，画面に表示する。
//（2）各科目の平均点を計算し，画面に表示する。（配列に格納する必要はない）

#include <stdio.h>

int main()
{
	int i;
	int sum0=0, sum1=0;
	int seiseki[6][2]={ {65, 71 } ,
                    {84, 83 } ,
                    {74, 74 } ,
                    {90, 90 } ,
                    {87, 78 } ,
                    {93, 95 }  };

/* (1) 各人の合計点 */
	for(i=0; i<6; i++){
		printf("%d番目の合計点:%d点\n", i, seiseki[i][0]+seiseki[i][1]);
	}

/* (2) 各科目の平均点 */
	for(i=0; i<6; i++){
		sum0+=seiseki[i][0];
		sum1+=seiseki[i][1];
	}
		printf("語学の平均点：%.1f点\n", (float)sum0/6);
		printf("力学の平均点：%.1f点\n", (float)sum1/6);
}
