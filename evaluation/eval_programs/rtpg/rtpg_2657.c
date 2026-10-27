// RTPG_2657: vars=4 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int cur48 = 50217;
    float b82 = 65.44;
    int res29 = 43;
    int hi66 = 7069;
    int i;
    for (i = 0; i < 64; i++) {
        res29 = xn[i];
        cur48 = b82 + 34;
        cur48 = b82 + cur48;
        b82 = cur48;
        res29 = res29 - 5;
        cur48 = hi66 + cur48;
        hi66 = hi66 + 4;
        b82 = hi66 - b82;
        cur48 = b82;
        yo[i] = res29;
    }
}
int main() { test_func(); return 0; }

