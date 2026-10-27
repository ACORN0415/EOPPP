// RTPG_1926: vars=3 stmts=3
void test_func(void) {
    int y50 = 6;
    int hi97 = 7;
    int y79 = 41;
    int i;
    for (i = 0; i < 49; i++) {
        hi97 = y50 / hi97;
        hi97 = y50 / y79;
        y79 = y79;
        if (y79 > 43) {
        hi97 = hi97 + y50;
        }
    }
}
int main() { test_func(); return 0; }

