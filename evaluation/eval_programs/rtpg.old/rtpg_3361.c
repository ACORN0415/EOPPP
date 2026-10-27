// RTPG_3361: vars=82 stmts=7
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int v0 = 100;
    int v1 = 78;
    int v2 = 27;
    int v3 = 57;
    int v4 = 38;
    int v5 = 93;
    int v6 = 25;
    int v7 = 96;
    int v8 = 72;
    int v9 = 28;
    int v10 = 59;
    int v11 = 5;
    int v12 = 40;
    int v13 = 92;
    int v14 = 4;
    int v15 = 37;
    int v16 = 32;
    int v17 = 72;
    int v18 = 90;
    int v19 = 38;
    int v20 = 34;
    int v21 = 94;
    int v22 = 65;
    int v23 = 82;
    int v24 = 94;
    int v25 = 99;
    int v26 = 49;
    int v27 = 89;
    int v28 = 95;
    int v29 = 75;
    int v30 = 81;
    int v31 = 1;
    int v32 = 83;
    int v33 = 91;
    int v34 = 26;
    int v35 = 35;
    int v36 = 33;
    int v37 = 44;
    int v38 = 25;
    int v39 = 46;
    int v40 = 65;
    int v41 = 81;
    int v42 = 29;
    int v43 = 50;
    int v44 = 100;
    int v45 = 65;
    int v46 = 6;
    int v47 = 7;
    int v48 = 65;
    int v49 = 58;
    int v50 = 86;
    int v51 = 21;
    int v52 = 84;
    int v53 = 58;
    int v54 = 33;
    int v55 = 72;
    int v56 = 49;
    int v57 = 58;
    int v58 = 57;
    int v59 = 29;
    int v60 = 59;
    int v61 = 42;
    int v62 = 52;
    int v63 = 50;
    int v64 = 51;
    int v65 = 55;
    int v66 = 54;
    int v67 = 61;
    int v68 = 2;
    int v69 = 32;
    int v70 = 96;
    int v71 = 15;
    int v72 = 55;
    int v73 = 49;
    int v74 = 12;
    int v75 = 44;
    int v76 = 74;
    int v77 = 75;
    int v78 = 39;
    int v79 = 44;
    int v80 = 33;
    int v81 = 59;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        v12 = xn[i];
        v9 = v2 - v6;
        v8 = v5;
        v11 = v2;
        v10 = v10 - 1;
        v5 = v1 + v13;
        v2 = v2 - 1;
        v1 = v4 + v7;
        darr[i] = v2;
        if (v10 <= 16) {
        v9 = v5 + v9;
        }
        yo[i] = v2;
    }
    free(darr);
}
int main() { test_func(); return 0; }

