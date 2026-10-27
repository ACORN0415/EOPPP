// RTPG_7508: vars=7 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int x53 = 46;
    int tmp55 = -11;
    int cur95 = 7;
    int sum31 = 44393;
    int cnt45 = 1;
    int v47 = 2;
    int b58 = 49;
    int i;
    for (i = 0; i < 16; i++) {
        v47 = xn[i];
        x53 = cur95 | v47;
        b58 = v47;
        b58 = v47 + cnt45;
        sum31 = b58;
        sum31 = tmp55 + 12741;
        cur95 = cur95 & x53;
        yo[i] = x53;
    }
}
int main() { test_func(); return 0; }

