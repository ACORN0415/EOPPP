// RTPG_8201: vars=8 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int cur37 = 58;
    int a27 = 8;
    int v42 = 7;
    int prev32 = 8;
    int out55 = 78;
    int cur70 = 70;
    int v40 = 55652;
    int val14 = 9;
    int i;
    for (i = 0; i < 32; i++) {
        a27 = xn[i];
        v42 = v42 + 5;
        v40 = cur37 + v42;
        v40 = val14;
        val14 = v40 + val14;
        v40 = v42;
        out55 = out55 + 2;
        cur70 = v42;
        out55 = a27 + a27;
        yo[i] = cur37;
    }
}
int main() { test_func(); return 0; }

