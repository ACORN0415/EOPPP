// RTPG_5921: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    float hi88 = 60.35;
    int a67 = -24;
    float acc69 = 14.85;
    int v36 = 7;
    int c58 = 7545;
    float tmp83 = 35.42;
    int *ptr = &c58;
    int i;
    for (i = 0; i < 32; i++) {
        acc69 = xn[i];
        tmp83 = acc69;
        hi88 = tmp83 ^ tmp83;
        c58 = v36 % c58;
        *ptr = *ptr + 4;
        yo[i] = a67;
    }
}
int main() { test_func(); return 0; }

