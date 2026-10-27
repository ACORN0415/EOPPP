// RTPG_4546: vars=3 stmts=4
void test_func(void) {
    int y38 = 20407;
    int hi91 = -7;
    int out69 = 7;
    int *ptr = &y38;
    int i;
    for (i = 0; i < 27; i++) {
        y38 = y38 - hi91;
        y38 = hi91 & out69;
        out69 = hi91 + y38;
        y38 = y38 + 1;
        *ptr = *ptr + 2;
        if (y38 == 93) {
        hi91 = hi91 + 3;
        }
    }
}
int main() { test_func(); return 0; }

