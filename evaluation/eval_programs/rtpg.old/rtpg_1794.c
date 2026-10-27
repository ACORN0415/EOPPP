// RTPG_1794: vars=3 stmts=3
void test_func(void) {
    int out43 = 57;
    int res62 = 7;
    int out42 = 2;
    int *ptr = &res62;
    int i;
    for (i = 0; i < 6; i++) {
        res62 = out43;
        res62 = out42 + res62;
        out42 = out42 - out43;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

