// RTPG_728: vars=62 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int v0 = 47;
    int v1 = 45;
    int v2 = 15;
    int v3 = 50;
    int v4 = 55;
    int v5 = 0;
    int v6 = 60;
    int v7 = 22;
    int v8 = 68;
    int v9 = 72;
    int v10 = 84;
    int v11 = 68;
    int v12 = 82;
    int v13 = 49;
    int v14 = 41;
    int v15 = 65;
    int v16 = 29;
    int v17 = 6;
    int v18 = 75;
    int v19 = 65;
    int v20 = 28;
    int v21 = 55;
    int v22 = 53;
    int v23 = 83;
    int v24 = 38;
    int v25 = 94;
    int v26 = 11;
    int v27 = 53;
    int v28 = 47;
    int v29 = 2;
    int v30 = 60;
    int v31 = 91;
    int v32 = 49;
    int v33 = 46;
    int v34 = 50;
    int v35 = 61;
    int v36 = 30;
    int v37 = 68;
    int v38 = 99;
    int v39 = 44;
    int v40 = 58;
    int v41 = 47;
    int v42 = 8;
    int v43 = 57;
    int v44 = 11;
    int v45 = 36;
    int v46 = 45;
    int v47 = 21;
    int v48 = 21;
    int v49 = 39;
    int v50 = 8;
    int v51 = 34;
    int v52 = 95;
    int v53 = 85;
    int v54 = 75;
    int v55 = 14;
    int v56 = 82;
    int v57 = 92;
    int v58 = 7;
    int v59 = 73;
    int v60 = 100;
    int v61 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 9;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v13 = xn[i];
        v8 = xn[idx_arr[i]];
        v14 = v7 * 6;
        v3 = v14 + v10;
        v6 = v5 * 4;
        darr[i] = v14;
        if (v11 > 74) {
        v9 = v0 - 62500;
        }
        yo[i] = v9;
    }
    free(darr);
}
int main() { test_func(); return 0; }

