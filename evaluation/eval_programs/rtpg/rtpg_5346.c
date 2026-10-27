// RTPG_5346: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int y91 = 4;
    int a24 = 3;
    int cur83 = 37;
    int cnt83 = 3;
    int sum17 = 47;
    int y77 = 5;
    int prev16 = 1;
    int a25 = 13810;
    int *ptr = &y91;
    int i;
    for (i = 0; i < 64; i++) {
        y91 = xn[i];
        a25 = cur83 - 8;
        a25 = prev16 | y91;
        sum17 = sum17 + 5;
        cnt83 = a24 - cur83;
        cur83 = a25 | sum17;
        *ptr = *ptr + 2;
        yo[i] = a25;
    }
}
int main() { test_func(); return 0; }

