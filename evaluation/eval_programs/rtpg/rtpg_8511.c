// RTPG_8511: vars=6 stmts=8
void test_func(void) {
    int out43 = 44866;
    int cur20 = 51686;
    int res39 = 9;
    int v30 = 19;
    int cnt39 = 3;
    int acc19 = 1;
    int *ptr = &cnt39;
    int i;
    for (i = 0; i < 17; i++) {
        acc19 = out43;
        out43 = out43 + 1;
        cnt39 = cnt39 + 2;
        res39 = v30 - cnt39;
        v30 = out43 - cnt39;
        acc19 = out43;
        cur20 = out43 + cur20;
        out43 = acc19 + res39;
        *ptr = *ptr + 3;
        if (out43 < -5) {
        cur20 = cnt39;
        }
    }
}
int main() { test_func(); return 0; }

