// RTPG_9557: vars=4 stmts=6
void test_func(void) {
    int c81 = 44876;
    int z79 = 44867;
    int tmp82 = 4715;
    int a88 = 26412;
    int i;
    for (i = 0; i < 100; i++) {
        tmp82 = c81 + tmp82;
        a88 = a88 - 4;
        tmp82 = a88 + tmp82;
        a88 = a88;
        tmp82 = tmp82 + 5;
        a88 = c81 - -26;
    }
}
int main() { test_func(); return 0; }

