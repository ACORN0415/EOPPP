// RTPG_1338: vars=9 stmts=7
void test_func(void) {
    int sum14 = 1;
    int out42 = 8525;
    int x39 = 32;
    int cur80 = 39;
    int sum70 = 33809;
    int hi17 = -40;
    int y35 = 35;
    int b92 = 14;
    int cur75 = 35495;
    int i;
    for (i = 0; i < 16; i++) {
        x39 = cur75 & hi17;
        cur75 = x39;
        cur80 = cur80 + 2;
        sum14 = x39 ^ out42;
        b92 = sum14 | y35;
        out42 = cur80 + hi17;
        y35 = sum14 - sum70;
    }
}
int main() { test_func(); return 0; }

