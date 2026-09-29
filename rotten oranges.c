
#include <stdio.h>

#define MAX 500

int main() {


        int n, m;
        scanf("%d %d", &n, &m);

        int grid[MAX][MAX];
        int qr[MAX * MAX], qc[MAX * MAX];

        int front = 0, rear = 0;
        int fresh = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &grid[i][j]);

                if (grid[i][j] == 2) {
                    qr[rear] = i;
                    qc[rear] = j;
                    rear++;
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int time = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (front < rear && fresh > 0) {
            int size = rear - front;
            int rotted = 0;

            for (int k = 0; k < size; k++) {
                int r = qr[front];
                int c = qc[front];
                front++;

                for (int d = 0; d < 4; d++) {
                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    if (nr >= 0 && nr < n &&
                        nc >= 0 && nc < m &&
                        grid[nr][nc] == 1) {

                        grid[nr][nc] = 2;
                        fresh--;

                        qr[rear] = nr;
                        qc[rear] = nc;
                        rear++;

                        rotted = 1;
                    }
                }
            }

            if (rotted)
                time++;
        }

        if (fresh == 0)
            printf("%d\n", time);
        else
            printf("-1\n");
    

    return 0;
}
