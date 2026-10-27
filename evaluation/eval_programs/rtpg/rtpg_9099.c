// RTPG_9099: vars=3 stmts=4
void test_func(void) {
    int prev34 = 35;
    int lo57 = -18;
    int a70 = 60342;
    int i;
    for (i = 0; i < 65; i++) {
        a70 = lo57 | a70;
        prev34 = lo57 | prev34;
        a70 = a70 + 1;
        lo57 = a70 / lo57;
    }
}
int main() { test_func(); return 0; }

