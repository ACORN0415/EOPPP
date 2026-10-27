// RTPG_2233: vars=6 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int tmp60 = 40;
    int acc27 = 5;
    int lo70 = 0;
    int lo33 = 49;
    int tmp23 = 68;
    int res61 = 19044;
    int i;
    for (i = 0; i < 32; i++) {
        tmp60 = xn[i];
        lo70 = lo70 - 5;
        tmp60 = tmp23 + 16909;
        lo33 = tmp23;
        tmp60 = lo33 + 41;
        lo33 = lo33 - 1;
        lo70 = lo70 - 3;
        lo70 = tmp60 + lo70;
        yo[i] = lo70;
    }
}
int main() { test_func(); return 0; }

