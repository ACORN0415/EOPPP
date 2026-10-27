// RTPG_2898: vars=3 stmts=10
void test_func(void) {
    int y47 = 45;
    int sum78 = 92;
    int hi17 = 85;
    int i;
    for (i = 0; i < 70; i++) {
        y47 = y47 + 5;
        y47 = sum78 + hi17;
        hi17 = sum78;
        y47 = hi17 - 8;
        sum78 = hi17 - sum78;
        hi17 = y47 + -40;
        hi17 = hi17;
        hi17 = hi17 - 3;
        hi17 = hi17 - 5;
        hi17 = hi17;
        if (y47 <= 42) {
        y47 = y47 - hi17;
        }
    }
}
int main() { test_func(); return 0; }

