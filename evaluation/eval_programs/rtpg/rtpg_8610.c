// RTPG_8610: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int y48 = 30;
    float lo88 = 60.03;
    int sum45 = 53151;
    int v51 = 7;
    int tmp63 = -36;
    int i;
    for (i = 0; i < 32; i++) {
        sum45 = xn[i];
        sum45 = lo88;
        lo88 = y48 - sum45;
        y48 = sum45 - y48;
        sum45 = lo88 - 6;
        sum45 = sum45;
        lo88 = lo88 & sum45;
        tmp63 = v51 / sum45;
        lo88 = lo88 - 2;
        yo[i] = v51;
    }
}
int main() { test_func(); return 0; }

