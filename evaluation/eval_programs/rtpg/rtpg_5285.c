// RTPG_5285: vars=8 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int tmp16 = 4;
    int v94 = 13;
    int val25 = 19280;
    int prev18 = 4;
    int b74 = 86;
    int acc33 = 91;
    int y60 = 6;
    int b3 = 24;
    int i;
    for (i = 0; i < 32; i++) {
        tmp16 = xn[i];
        val25 = v94;
        b3 = v94 - 44;
        tmp16 = y60;
        yo[i] = tmp16;
    }
}
int main() { test_func(); return 0; }

