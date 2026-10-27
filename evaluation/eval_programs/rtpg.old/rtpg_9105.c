// RTPG_9105: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int y51 = 15;
    int tmp60 = 19;
    int sum83 = 49;
    int res78 = 9;
    int cur63 = -5;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 41;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res78 = xn[i];
        tmp60 = tmp60 - 2;
        cur63 = y51;
        tmp60 = sum83 - tmp60;
        tmp60 = cur63 * 65;
        sum83 = y51 * 47;
        yo[i] = res78;
    }
}
int main() { test_func(); return 0; }

