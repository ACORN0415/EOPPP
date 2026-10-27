// RTPG_9180: vars=4 stmts=7
void test_func(void) {
    int acc2 = 19;
    int acc72 = 30038;
    int res2 = 77;
    int cnt32 = 4986;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 36925;
    int sv1 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        cnt32 = cnt32 * 44006;
        acc2 = acc2 + 4;
        cnt32 = res2 * 10;
        acc2 = res2 + acc2;
        cnt32 = acc72 * 24;
        res2 = cnt32 - acc2;
        acc2 = res2;
    }
}
int main() { test_func(); return 0; }

