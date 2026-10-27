// RTPG_2996: vars=9 stmts=12
enum State { FAST, BLUE, RED };
void test_func(void) {
    int acc96 = 0;
    int a91 = 35;
    int dat90 = 0;
    int c45 = 9;
    int z1 = 24;
    int v29 = 29;
    int a4 = 7;
    int val7 = -32;
    int v19 = 48;
    enum State st = FAST;
    int i;
    for (i = 0; i < 23; i++) {
        v29 = v29 + 4;
        dat90 = v29 - a91;
        c45 = v19;
        a91 = c45;
        v19 = c45;
        val7 = val7 - 1;
        c45 = c45 + 2;
        val7 = a4 - c45;
        acc96 = c45 - a91;
        val7 = z1 + dat90;
        c45 = acc96;
        a4 = v19 + val7;
    }
}
int main() { test_func(); return 0; }

