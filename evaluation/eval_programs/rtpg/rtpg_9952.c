// RTPG_9952: vars=5 stmts=5
void test_func(void) {
    int v80 = 80;
    int v82 = 40;
    int c4 = 49;
    int res78 = 10;
    int a93 = 1;
    int i;
    for (i = 0; i < 46; i++) {
        c4 = v80 + 72;
        v82 = c4 + v80;
        a93 = a93 - 3;
        c4 = v80 - c4;
        c4 = c4 - 5;
    }
}
int main() { test_func(); return 0; }

