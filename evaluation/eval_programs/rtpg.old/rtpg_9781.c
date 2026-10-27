// RTPG_9781: vars=3 stmts=7
void test_func(void) {
    int v70 = 23;
    int dat22 = 4;
    int tmp59 = -3;
    int i;
    for (i = 0; i < 64; i++) {
        tmp59 = tmp59 - dat22;
        v70 = dat22 - dat22;
        tmp59 = v70 - tmp59;
        v70 = v70;
        dat22 = tmp59 + dat22;
        v70 = dat22 - v70;
        tmp59 = tmp59;
        if (v70 > 2) goto done;
    }
done:
    v70 = 0;
}
int main() { test_func(); return 0; }

