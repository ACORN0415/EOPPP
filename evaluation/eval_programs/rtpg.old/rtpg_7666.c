// RTPG_7666: vars=8 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int y98 = 66;
    int prev19 = -22;
    int v52 = 39774;
    int res52 = 3;
    int x59 = 47;
    int hi74 = 29057;
    int hi75 = 90;
    int res81 = -13;
    int h0 = 28;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi75 = xn[i];
        res52 = res52 + 6;
        res81 = res81 + hi74;
        hi74 = y98;
        yo[i] = hi75;
    }
}
int main() { test_func(); return 0; }

