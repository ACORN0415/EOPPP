// RTPG_7833: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int out47 = -48;
    int cnt95 = 9661;
    int lo68 = -32;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        lo68 = xn[i];
        lo68 = lo68 - cnt95;
        out47 = out47 + 1;
        out47 = cnt95 - out47;
        out47 = out47 * 72;
        out47 = lo68;
        if (out47 == 43) {
        cnt95 = lo68;
        }
        yo[i] = lo68;
    }
}
int main() { test_func(); return 0; }

