// RTPG_3811: vars=6 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int acc17 = 98;
    int c99 = 1;
    int v36 = 10;
    int hi29 = 69;
    int res13 = 57445;
    int cur39 = 68;
    int i;
    for (i = 0; i < 16; i++) {
        acc17 = xn[i];
        c99 = acc17 - 9876;
        c99 = acc17;
        cur39 = v36 + res13;
        res13 = cur39;
        res13 = res13 - 5;
        cur39 = acc17 + acc17;
        c99 = res13;
        v36 = v36 - acc17;
        hi29 = v36 - cur39;
        acc17 = acc17 + 34;
        res13 = v36 - 56;
        if (v36 != -24) {
        c99 = acc17 - -10;
        }
        yo[i] = hi29;
    }
}
int main() { test_func(); return 0; }

