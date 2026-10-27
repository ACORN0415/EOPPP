// RTPG_4987: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int tmp19 = 16;
    int res39 = 40;
    int prev89 = 29;
    int i;
    for (i = 0; i < 64; i++) {
        res39 = xn[i];
        res39 = prev89 - tmp19;
        tmp19 = res39 + 9;
        prev89 = tmp19;
        yo[i] = res39;
    }
}
int main() { test_func(); return 0; }

