// RTPG_2741: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int x41 = 5;
    int lo54 = 38;
    int prev23 = 21924;
    int cnt35 = 53;
    int tmp17 = 10;
    int h0 = 6;
    int sv0 = 0;
    int h1 = -24;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev23 = xn[i];
        lo54 = tmp17 + cnt35;
        prev23 = cnt35 * -48;
        tmp17 = x41 + tmp17;
        cnt35 = tmp17 + cnt35;
        yo[i] = tmp17;
    }
}
int main() { test_func(); return 0; }

