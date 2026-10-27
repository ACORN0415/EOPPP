// RTPG_9621: vars=5 stmts=5
void test_func(void) {
    int c77 = 23;
    int acc91 = -39;
    int res71 = 20;
    int cnt62 = 100;
    int v82 = 42;
    int *ptr = &res71;
    int i;
    for (i = 0; i < 98; i++) {
        res71 = res71 + 4;
        v82 = v82 + 2;
        c77 = cnt62 - c77;
        cnt62 = cnt62 - 1;
        cnt62 = c77 - v82;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

