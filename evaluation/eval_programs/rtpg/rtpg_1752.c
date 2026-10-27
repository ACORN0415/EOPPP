// RTPG_1752: vars=5 stmts=4
void test_func(void) {
    int out4 = 61;
    int prev41 = 65;
    int z91 = 12;
    int a82 = 33;
    int tmp89 = 7;
    int i;
    for (i = 0; i < 75; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        tmp89 = z91 - a82;
        a82 = z91;
        tmp89 = a82 - prev41;
        a82 = z91 - z91;
        }
    }
}
int main() { test_func(); return 0; }

