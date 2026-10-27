// RTPG_9420: vars=4 stmts=8
void test_func(void) {
    int z16 = 0;
    int v52 = 3;
    int cnt4 = 7;
    int lo12 = -42;
    int h0 = -17;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 37; i++) {
        lo12 = v52 - cnt4;
        z16 = z16 + 1;
        v52 = v52 + 4;
        v52 = cnt4 + v52;
        v52 = v52 * 10;
        lo12 = lo12 + 490;
        v52 = v52 + 22;
        z16 = cnt4 + lo12;
    }
}
int main() { test_func(); return 0; }

