// RTPG_6727: vars=70 stmts=3
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int v0 = 83;
    int v1 = 30;
    int v2 = 44;
    int v3 = 5;
    int v4 = 62;
    int v5 = 47;
    int v6 = 99;
    int v7 = 43;
    int v8 = 93;
    int v9 = 63;
    int v10 = 61;
    int v11 = 57;
    int v12 = 72;
    int v13 = 57;
    int v14 = 80;
    int v15 = 8;
    int v16 = 12;
    int v17 = 53;
    int v18 = 67;
    int v19 = 64;
    int v20 = 61;
    int v21 = 20;
    int v22 = 48;
    int v23 = 0;
    int v24 = 43;
    int v25 = 4;
    int v26 = 95;
    int v27 = 78;
    int v28 = 76;
    int v29 = 74;
    int v30 = 81;
    int v31 = 46;
    int v32 = 21;
    int v33 = 34;
    int v34 = 64;
    int v35 = 54;
    int v36 = 31;
    int v37 = 93;
    int v38 = 82;
    int v39 = 89;
    int v40 = 59;
    int v41 = 11;
    int v42 = 88;
    int v43 = 95;
    int v44 = 90;
    int v45 = 38;
    int v46 = 90;
    int v47 = 51;
    int v48 = 79;
    int v49 = 51;
    int v50 = 3;
    int v51 = 51;
    int v52 = 35;
    int v53 = 53;
    int v54 = 15;
    int v55 = 24;
    int v56 = 100;
    int v57 = 2;
    int v58 = 66;
    int v59 = 56;
    int v60 = 82;
    int v61 = 69;
    int v62 = 65;
    int v63 = 63;
    int v64 = 56;
    int v65 = 95;
    int v66 = 76;
    int v67 = 53;
    int v68 = 47;
    int v69 = 61;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        v8 = xn[i];
        v3 = v3 - 4;
        v0 = v4 | v6;
        v2 = v3 & v6;
        darr[i] = v11;
        yo[i] = v14;
    }
    free(darr);
}
int main() { test_func(); return 0; }

