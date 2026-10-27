// RTPG_4729: vars=7 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int sum90 = 5;
    int cnt85 = 48313;
    int v42 = 83;
    int y78 = 68;
    int a94 = 91;
    int val28 = 1;
    int val27 = 8;
    int *ptr = &val27;
    int i;
    for (i = 0; i < 16; i++) {
        a94 = xn[i];
        cnt85 = v42 - 74;
        sum90 = cnt85;
        cnt85 = cnt85 - a94;
        v42 = val28 + val28;
        val27 = a94 - sum90;
        sum90 = cnt85;
        val27 = v42;
        sum90 = val27;
        *ptr = *ptr + 2;
        if (a94 > 43) goto done;
        yo[i] = v42;
    }
done:
    y78 = 0;
}
int main() { test_func(); return 0; }

