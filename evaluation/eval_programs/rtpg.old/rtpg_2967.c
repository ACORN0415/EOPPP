// RTPG_2967: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int val71 = 0;
    int prev36 = 732;
    int lo30 = 68;
    int b25 = 37777;
    int i;
    for (i = 0; i < 64; i++) {
        b25 = xn[i];
        lo30 = lo30 - 4;
        lo30 = prev36 - lo30;
        b25 = b25 - 39044;
        lo30 = b25 - 2;
        lo30 = lo30 - 2;
        yo[i] = prev36;
    }
}
int main() { test_func(); return 0; }

