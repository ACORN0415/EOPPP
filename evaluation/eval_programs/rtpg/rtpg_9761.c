// RTPG_9761: vars=10 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int acc84 = 18;
    int cnt35 = 56714;
    int cnt53 = 35872;
    int tmp22 = 55360;
    int res10 = 93;
    int cur74 = 9740;
    int tmp27 = 35;
    int c3 = 0;
    int prev22 = 10608;
    int tmp42 = 53189;
    int i;
    for (i = 0; i < 16; i++) {
        cnt35 = xn[i];
        cnt53 = prev22;
        acc84 = tmp22;
        prev22 = c3;
        tmp42 = tmp42 - cnt53;
        c3 = tmp22 - res10;
        yo[i] = cnt53;
    }
}
int main() { test_func(); return 0; }

