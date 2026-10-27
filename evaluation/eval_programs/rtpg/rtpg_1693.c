// RTPG_1693: vars=4 stmts=4
void test_func(void) {
    int hi13 = 0;
    int b23 = 64337;
    int cur26 = 3;
    int a97 = 10;
    int i;
    for (i = 0; i < 29; i++) {
        a97 = cur26;
        a97 = a97 - 3;
        hi13 = a97 + cur26;
        b23 = cur26 - 12;
    }
}
int main() { test_func(); return 0; }

