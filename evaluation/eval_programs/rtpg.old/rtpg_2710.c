// RTPG_2710: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int cur96 = 6;
    int cur43 = 78;
    int v96 = 26;
    int a77 = 62231;
    int a11 = 6;
    int sum12 = 10;
    int c63 = 62;
    int tmp4 = 61;
    int i;
    for (i = 0; i < 64; i++) {
        tmp4 = xn[i];
        cur43 = c63 + cur43;
        tmp4 = tmp4 - 2;
        a77 = tmp4 - 50;
        sum12 = a11 - 43330;
        v96 = v96 + 1;
        if (cur96 > 61454) goto done;
        yo[i] = cur96;
    }
done:
    tmp4 = 0;
}
int main() { test_func(); return 0; }

