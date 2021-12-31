#include <stdio.h>
#include <stdlib.h>

struct personscore {
	int num;
	char nme;
	float scr;
	float scr2;
};

typedef struct personscore psc;

psc ps;
psc* pps = &ps;

int main()
{
	FILE* fp, * fp2;

	char fn[] = "list.txt", fn2[] = "output.txt";

	if ((fp = fopen(fn, "r")) == NULL) {
		printf("can't open the file\n");
		exit(1);
	}
	if ((fp2 = fopen(fn2, "w")) == NULL) {
		printf("can't open the file\n");
		exit(1);
	}

	while (!feof(fp)) {
		fscanf(fp, "%d%s%f%f\n", &ps.num, &ps.nme, &ps.scr, &ps.scr2);
		fprintf(stdout, "%5d%10s%8.1f%8.1f%8.1f\n",
			pps->num, pps->nme, pps->scr, pps->scr2, pps->scr + pps->scr2);

		fprintf(fp2, "%5d%10s%8.1f%8.1f%8.1f\n",
			pps->num, pps->nme, pps->scr, pps->scr2, pps->scr + pps->scr2);
	}

	fclose(fp2);
	fclose(fp);
	return 0;
}
