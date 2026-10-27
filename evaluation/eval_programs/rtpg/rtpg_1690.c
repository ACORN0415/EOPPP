// RTPG_1690: vars=4 stmts=6
void test_func(void) {
    int c71 = 76;
    int val89 = 13;
    int x47 = 15;
    int hi47 = 6;
    int i;
    for (i = 0; i < 30; i++) {
        hi47 = c71 - val89;
        val89 = c71 + 10;
        x47 = c71;
        hi47 = hi47 - 28;
        val89 = val89 - x47;
        val89 = hi47 - 51;
    }
}
int main() { test_func(); return 0; }

