// RTPG_4391: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int acc65 = 58419;
    int a46 = 21;
    int v66 = 53355;
    int i;
    for (i = 0; i < 64; i++) {
        v66 = xn[i];
        a46 = a46 + 5;
        v66 = acc65 - a46;
        if (v66 > 14) goto done;
        yo[i] = v66;
    }
done:
    acc65 = 0;
}
int main() { test_func(); return 0; }

