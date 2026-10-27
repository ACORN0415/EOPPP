// RTPG_9087: vars=6 stmts=7
void test_func(void) {
    int b44 = 28;
    int tmp82 = -41;
    int prev60 = 8;
    int prev38 = 56;
    int val73 = 34595;
    int c78 = 56;
    int i;
    for (i = 0; i < 27; i++) {
        b44 = b44 - 4;
        b44 = b44 - 2;
        c78 = c78 + 5;
        c78 = prev60 + tmp82;
        b44 = tmp82 - prev60;
        c78 = c78 - 3;
        prev38 = c78;
    }
}
int main() { test_func(); return 0; }

