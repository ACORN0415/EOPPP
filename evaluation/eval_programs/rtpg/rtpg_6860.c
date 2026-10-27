// RTPG_6860: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    float tmp2 = 1.54;
    float out17 = 36.17;
    int prev62 = 26331;
    int c5 = 45455;
    int x62 = 45810;
    int i;
    for (i = 0; i < 32; i++) {
        out17 = xn[i];
        x62 = c5 - tmp2;
        x62 = c5 - x62;
        tmp2 = tmp2 + 1;
        x62 = out17 + prev62;
        prev62 = x62 - 45561;
        if (tmp2 > 35) {
        x62 = out17;
        }
        yo[i] = out17;
    }
}
int main() { test_func(); return 0; }

