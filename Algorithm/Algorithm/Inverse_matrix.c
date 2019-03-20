//#include <stdio.h>
//void main() {
//	double h1[4][4] = { {0, 0, 0, 0}, {0, 1, -1, 2}, {0, 3, 0, 1}, {0, 1, 0, 2} };
//	double h2[4][7] = {0};
//	double temp;
//	int i, j, k, l;
//
//	for (i = 1; i <= 3; i++) {
//		for (j = 1; j <= 3; j++) {
//			h2[i][j] = h1[i][j];
//			if (i == j)
//				h2[i][j + 3] = 1;
//		}
//	}
//
//	
//
//	for (i = 1; i <= 3; i++) {
//		temp = h2[i][i];
//		for (j = 1; j <= 6; j++) {
//			h2[i][j] /=temp;
//			
//		}
//		for (k = 1; k <= 3; k++) {
//			if (i != k) {
//				temp = h2[k][i];
//				for (l = 1; l <= 6; l++) {
//					h2[k][l] -= h2[i][l] * temp;
//				}
//			}
//
//		}
//	}
//	for (i = 1; i <= 3; i++) {
//		for (j = 1; j <= 6; j++) {
//			printf("%5.1f   ", h2[i][j]);
//		}
//		puts("");
//	}
//}