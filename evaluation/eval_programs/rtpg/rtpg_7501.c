// RTPG_7501: vars=63 stmts=4
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int v0 = 33;
    int v1 = 12;
    int v2 = 91;
    int v3 = 1;
    int v4 = 49;
    int v5 = 46;
    int v6 = 84;
    int v7 = 24;
    int v8 = 7;
    int v9 = 38;
    int v10 = 17;
    int v11 = 2;
    int v12 = 58;
    int v13 = 88;
    int v14 = 4;
    int v15 = 16;
    int v16 = 10;
    int v17 = 84;
    int v18 = 74;
    int v19 = 6;
    int v20 = 2;
    int v21 = 66;
    int v22 = 5;
    int v23 = 43;
    int v24 = 6;
    int v25 = 99;
    int v26 = 37;
    int v27 = 34;
    int v28 = 38;
    int v29 = 88;
    int v30 = 54;
    int v31 = 33;
    int v32 = 80;
    int v33 = 94;
    int v34 = 94;
    int v35 = 12;
    int v36 = 30;
    int v37 = 52;
    int v38 = 71;
    int v39 = 93;
    int v40 = 25;
    int v41 = 17;
    int v42 = 23;
    int v43 = 71;
    int v44 = 73;
    int v45 = 28;
    int v46 = 49;
    int v47 = 5;
    int v48 = 19;
    int v49 = 66;
    int v50 = 91;
    int v51 = 15;
    int v52 = 50;
    int v53 = 85;
    int v54 = 53;
    int v55 = 59;
    int v56 = 75;
    int v57 = 36;
    int v58 = 0;
    int v59 = 51;
    int v60 = 0;
    int v61 = 65;
    int v62 = 20;
    struct Data s; s.a = 11007; s.b = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 75; i++) {
        v9 = v5;
        v13 = v0 + v12;
        v14 = v3;
        v10 = v8 + v13;
        s.a = s.a + s.b;
        darr[i] = v11;
    }
    free(darr);
}
int main() { test_func(); return 0; }

