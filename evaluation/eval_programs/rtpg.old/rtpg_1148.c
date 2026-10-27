// RTPG_1148: vars=63 stmts=2
#include <stdlib.h>
void test_func(void) {
    int v0 = 71;
    int v1 = 36;
    int v2 = 8;
    int v3 = 37;
    int v4 = 63;
    int v5 = 56;
    int v6 = 7;
    int v7 = 55;
    int v8 = 90;
    int v9 = 21;
    int v10 = 53;
    int v11 = 9;
    int v12 = 42;
    int v13 = 66;
    int v14 = 15;
    int v15 = 85;
    int v16 = 14;
    int v17 = 19;
    int v18 = 27;
    int v19 = 22;
    int v20 = 17;
    int v21 = 29;
    int v22 = 55;
    int v23 = 34;
    int v24 = 32;
    int v25 = 43;
    int v26 = 34;
    int v27 = 79;
    int v28 = 80;
    int v29 = 95;
    int v30 = 57;
    int v31 = 57;
    int v32 = 67;
    int v33 = 23;
    int v34 = 26;
    int v35 = 1;
    int v36 = 13;
    int v37 = 19;
    int v38 = 30;
    int v39 = 42;
    int v40 = 27;
    int v41 = 76;
    int v42 = 45;
    int v43 = 21;
    int v44 = 35;
    int v45 = 76;
    int v46 = 16;
    int v47 = 11;
    int v48 = 32;
    int v49 = 75;
    int v50 = 96;
    int v51 = 42;
    int v52 = 8;
    int v53 = 32;
    int v54 = 66;
    int v55 = 81;
    int v56 = 88;
    int v57 = 81;
    int v58 = 17;
    int v59 = 83;
    int v60 = 61;
    int v61 = 97;
    int v62 = 44;
    int *ptr = &v12;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 49; i++) {
        v4 = v13 + v11;
        v6 = v3;
        *ptr = *ptr + 1;
        darr[i] = v4;
    }
    free(darr);
}
int main() { test_func(); return 0; }

