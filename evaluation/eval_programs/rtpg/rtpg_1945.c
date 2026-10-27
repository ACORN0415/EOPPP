// RTPG_1945: vars=6 stmts=12
void test_func(void) {
    int lo40 = 50790;
    int v92 = 28348;
    int tmp23 = -4;
    int acc64 = 8;
    int dat42 = 17;
    int res48 = 34;
    int i;
    for (i = 0; i < 42; i++) {
        v92 = acc64 - dat42;
        tmp23 = tmp23 & acc64;
        acc64 = v92;
        v92 = tmp23 - acc64;
        lo40 = lo40 + 4;
        lo40 = acc64;
        tmp23 = tmp23 + 5;
        res48 = v92;
        acc64 = v92 - 38259;
        lo40 = lo40 - -40;
        lo40 = lo40 + dat42;
        res48 = v92 | dat42;
    }
}
int main() { test_func(); return 0; }

