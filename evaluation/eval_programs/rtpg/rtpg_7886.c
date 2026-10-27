// RTPG_7886: vars=8 stmts=5
void test_func(void) {
    int hi46 = 21;
    int prev76 = 0;
    int out49 = 19;
    int prev29 = 22034;
    int out60 = 6;
    int val38 = -25;
    int lo83 = 37;
    int prev90 = 27038;
    int i;
    for (i = 0; i < 33; i++) {
        out60 = prev90 - out60;
        lo83 = prev29 - out60;
        prev90 = prev90 - 5;
        prev29 = hi46 - prev29;
        out49 = lo83 - 57464;
    }
}
int main() { test_func(); return 0; }

