# include <stdio.h>
void printline(int ncols,char pattern);
void printtriangle(int nlines,char pattern);
void printrectangle(int nlines,int ncols,char pattern);
int main(void){
	int ncols,nlines;
	char pattern;
	scanf("%d%d",&ncols,&nlines);
	printline(ncols,'X');
	printtriangle(nlines,'*');
	printf("\n");
	printrectangle(nlines,ncols,'#');
}

void printline(int ncols,char pattern){
	int i;
	for(i=0;i<ncols;i++){
		printf("%c",pattern);
	}
	printf("\n");
}	
void printtriangle(int nlines,char pattern){
	int j;
	int cols;
	for (j=0;j<nlines;j++){
		cols = j +1;
		printline(cols,pattern);
	}
}
void printrectangle(int nlines,int ncols,char pattern){
	int t;
	for(t=0;t<nlines;t++){
		printline(ncols,pattern);
	}
}
