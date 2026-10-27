// RTPG_7060: vars=9 stmts=3
int xn[64];
int yo[64];
enum State { FAST, BLUE, RED };
void test_func(void) {
    int b70 = 16;
    int lo69 = 95;
    int y93 = 62652;
    int x57 = 36094;
    int y18 = 8;
    int cnt12 = 8;
    int b12 = -13;
    int cur48 = 5;
    int tmp22 = 62;
    enum State st = FAST;
    int i;
    for (i = 0; i < 64; i++) {
        cnt12 = xn[i];
        tmp22 = lo69 + cnt12;
        x57 = b70 & lo69;
        cnt12 = y93 + b70;
        yo[i] = cur48;
    }
}
int main() { test_func(); return 0; }

