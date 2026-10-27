// RTPG_8983: vars=8 stmts=6
void test_func(void) {
    int tmp35 = 30;
    int res88 = -30;
    int prev76 = 3;
    int tmp90 = 39606;
    int hi63 = 57326;
    int x49 = 57568;
    int tmp95 = -12;
    int cur27 = 48;
    int *ptr = &x49;
    int i;
    for (i = 0; i < 86; i++) {
        tmp95 = res88 + prev76;
        tmp90 = tmp35 + res88;
        prev76 = tmp95 + prev76;
        res88 = x49 + 18;
        cur27 = x49 - res88;
        cur27 = hi63 - prev76;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

