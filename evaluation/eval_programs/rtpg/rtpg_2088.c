// RTPG_2088: vars=4 stmts=3
void test_func(void) {
    int dat53 = 5;
    int out55 = -6;
    int y21 = 10;
    int y43 = 38;
    int i;
    for (i = 0; i < 27; i++) {
        y21 = y43 + 8;
        dat53 = y43 + dat53;
        y21 = out55 | dat53;
        if (out55 >= 32) {
        y43 = dat53 - 71;
        }
    }
}
int main() { test_func(); return 0; }

