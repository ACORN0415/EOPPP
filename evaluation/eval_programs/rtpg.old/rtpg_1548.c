// RTPG_1548: vars=3 stmts=5
void test_func(void) {
    int lo32 = 73;
    int hi31 = 0;
    int y41 = -35;
    int i;
    for (i = 0; i < 44; i++) {
        y41 = y41 + lo32;
        hi31 = lo32 - y41;
        hi31 = hi31 + 1;
        hi31 = hi31 - 5;
        lo32 = y41;
    }
}
int main() { test_func(); return 0; }

