// RTPG_665: vars=9 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int b19 = -2;
    int sum11 = 97;
    int cur81 = 35;
    int hi14 = -9;
    int c68 = 4;
    int v15 = 8;
    int a41 = -35;
    int c58 = 35;
    int b13 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        a41 = xn[i];
        c58 = b19 + 39214;
        sum11 = b13 - cur81;
        cur81 = v15 - sum11;
        b19 = a41 + c68;
        if (b19 > 19945) goto done;
        yo[i] = v15;
    }
done:
    v15 = 0;
}
int main() { test_func(); return 0; }

