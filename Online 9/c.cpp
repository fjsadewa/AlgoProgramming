#include <stdio.h>

int qw[8][8] = { 0 };

int abs(int q) {
	if(q<0) {
		return q * -1;
	} else {
		return q;
	}
}

int min(int q, int w) {
	if(q<w) {
		return q;
	} else {
		return w;
	}
}

int getsteps(int q, int w, int tq, int tw) {
	if (q == tq && w == tw)
		return qw[0][0];
	else {

		if (qw[abs(q - tq)][abs(w - tw)] != 0)
			return qw[abs(q - tq)][abs(w - tw)];

		else {


			int x1, y1, x2, y2;

			if (q <= tq) {
				if (w <= tw) {
					x1 = q + 2;
					y1 = w + 1;
					x2 = q + 1;
					y2 = w + 2;
				} else {
					x1 = q + 2;
					y1 = w - 1;
					x2 = q + 1;
					y2 = w - 2;
				}
			} else {
				if (w <= tw) {
					x1 = q - 2;
					y1 = w + 1;
					x2 = q - 1;
					y2 = w + 2;
				} else {
					x1 = q - 2;
					y1 = w - 1;
					x2 = q - 1;
					y2 = w - 2;
				}
			}

			qw[abs(q - tq)][abs(w - tw)] =
			    min(getsteps(x1, y1, tq, tw),
			        getsteps(x2, y2, tq, tw)) + 1;

			qw[abs(w - tw)][abs(q - tq)] =
			    qw[abs(q - tq)][abs(w - tw)];
			return qw[abs(q - tq)][abs(w - tw)];
		}
	}
}

int main() {
	int i, n, q, w, tq, tw, ans, t;
	char tempE, tempT;
	scanf("%d", &t);
	for(int i=1; i<=t; i++) {
		scanf(" %c%d %c%d", &tempE, &w, &tempT, &tw);
		if(tempE=='A') {
			q = 1;
		} else if(tempE=='B') {
			q = 2;
		} else if(tempE=='C') {
			q = 3;
		} else if(tempE=='D') {
			q = 4;
		} else if(tempE=='E') {
			q = 5;
		} else if(tempE=='F') {
			q = 6;
		} else if(tempE=='G') {
			q = 7;
		} else if(tempE=='H') {
			q = 8;
		}
		if(tempT=='A') {
			tq = 1;
		} else if(tempT=='B') {
			tq = 2;
		} else if(tempT=='C') {
			tq = 3;
		} else if(tempT=='D') {
			tq = 4;
		} else if(tempT=='E') {
			tq = 5;
		} else if(tempT=='F') {
			tq = 6;
		} else if(tempT=='G') {
			tq = 7;
		} else if(tempT=='H') {
			tq = 8;
		}
		n = 100;
		if ((q == 1 && w == 1 && tq == 2 && tw == 2) ||
		        (q == 2 && w == 2 && tq == 1 && tw == 1))
			ans = 4;
		else if ((q == 1 && w == n && tq == 2 && tw == n - 1) ||
		         (q == 2 && w == n - 1 && tq == 1 && tw == n))
			ans = 4;
		else if ((q == n && w == 1 && tq == n - 1 && tw == 2) ||
		         (q == n - 1 && w == 2 && tq == n && tw == 1))
			ans = 4;
		else if ((q == n && w == n && tq == n - 1 && tw == n - 1) ||
		         (q == n - 1 && w == n - 1 && tq == n && tw == n))
			ans = 4;
		else {

			qw[1][0] = 3;
			qw[0][1] = 3;
			qw[1][1] = 2;
			qw[2][0] = 2;
			qw[0][2] = 2;
			qw[2][1] = 1;
			qw[1][2] = 1;
			ans = getsteps(q, w, tq, tw);
		}
		printf("Case #%d: %d\n", i, ans);
	}
	return 0;
}
