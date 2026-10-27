// RTPG_2096: vars=3 stmts=2
void test_func(void) {
    int cnt60 = 29;
    int sum76 = 7;
    int y45 = 42;
    int *ptr = &sum76;
    int i;
    for (i = 0; i < 40; i++) {
        cnt60 = sum76 + y45;
        cnt60 = y45 - 37121;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

