// RTPG_7350: vars=8 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int acc0 = 5;
    int a61 = 2;
    int hi24 = 94;
    int v13 = 8;
    int v82 = 50;
    int acc45 = 26088;
    int y70 = 61258;
    int lo16 = 39;
    int h0 = 45;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y70 = xn[i];
        a61 = acc0 - v13;
        y70 = a61 * 60181;
        hi24 = v13 + acc0;
        v13 = acc45 * 59;
        v82 = v82 * 8;
        acc45 = hi24;
        acc45 = acc45 - 8;
        v13 = v13 * 9;
        yo[i] = y70;
    }
}
int main() { test_func(); return 0; }

