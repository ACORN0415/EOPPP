// RTPG_7283: vars=8 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int y70 = 5;
    int hi24 = 2;
    int acc0 = 94;
    int v13 = 8;
    int acc45 = 50;
    int lo16 = 26088;
    int a61 = 61258;
    int v82 = 39;
    int h0 = 45;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a61 = xn[i];
        hi24 = y70 - v13;
        a61 = hi24 * 60181;
        acc0 = v13 + y70;
        v13 = lo16 * 59;
        acc45 = acc45 * 8;
        lo16 = acc0;
        lo16 = lo16 - 8;
        v13 = v13 * 9;
        yo[i] = a61;
    }
}
int main() { test_func(); return 0; }

