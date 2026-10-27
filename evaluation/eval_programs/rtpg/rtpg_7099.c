// RTPG_7099: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int val49 = 2;
    int c44 = 30;
    int val17 = 8;
    int b9 = 87;
    int z49 = 16;
    int res42 = 37;
    int i;
    for (i = 0; i < 32; i++) {
        c44 = xn[i];
        res42 = res42 - 4;
        res42 = val49;
        yo[i] = b9;
    }
}
int main() { test_func(); return 0; }

