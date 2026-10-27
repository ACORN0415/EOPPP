// RTPG_1007: vars=3 stmts=4
void test_func(void) {
    int cnt84 = -4;
    int v7 = 4;
    int x33 = 5;
    int *ptr = &x33;
    int i;
    for (i = 0; i < 46; i++) {
        cnt84 = v7 + 20257;
        cnt84 = cnt84 + x33;
        v7 = x33 + v7;
        x33 = cnt84 - 4;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

