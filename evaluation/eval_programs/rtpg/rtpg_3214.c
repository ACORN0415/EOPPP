// RTPG_3214: vars=5 stmts=8
void test_func(void) {
    int hi68 = 8;
    int lo90 = -23;
    int out8 = 44476;
    int acc32 = 15628;
    int acc56 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        acc32 = hi68 - 12;
        acc32 = hi68 - hi68;
        lo90 = acc32;
        acc32 = acc32 - out8;
        acc56 = acc56 - 4;
        lo90 = lo90 + acc56;
        lo90 = acc32 + acc32;
        acc32 = out8 + -20;
        if (acc56 >= -6) {
        lo90 = lo90 - 2;
        }
    }
}
int main() { test_func(); return 0; }

