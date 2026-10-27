// RTPG_8506: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int y13 = 0;
    int v60 = 27355;
    int b46 = -32;
    int sum32 = 18;
    int lo21 = 23986;
    int i;
    for (i = 0; i < 64; i++) {
        lo21 = xn[i];
        y13 = lo21 + v60;
        lo21 = lo21 - 5;
        v60 = v60 + y13;
        y13 = sum32 + v60;
        sum32 = lo21;
        yo[i] = sum32;
    }
}
int main() { test_func(); return 0; }

