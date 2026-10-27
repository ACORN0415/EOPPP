// RTPG_6430: vars=8 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int cur9 = 9495;
    int prev10 = 13;
    int z30 = 3;
    int x42 = 66;
    int a39 = 12;
    int acc95 = 98;
    int dat36 = 4;
    int v58 = 47;
    int i;
    for (i = 0; i < 32; i++) {
        v58 = xn[i];
        acc95 = cur9 / a39;
        x42 = prev10 ^ cur9;
        z30 = z30 - 1;
        acc95 = acc95 + v58;
        cur9 = acc95;
        a39 = dat36 - prev10;
        prev10 = prev10 / cur9;
        dat36 = dat36 - 3;
        if (a39 == -42) {
        x42 = v58;
        }
        yo[i] = v58;
    }
}
int main() { test_func(); return 0; }

