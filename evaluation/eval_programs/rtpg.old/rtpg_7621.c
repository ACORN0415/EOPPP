// RTPG_7621: vars=7 stmts=5
void test_func(void) {
    int v55 = 10;
    int hi33 = 10;
    int tmp66 = 3;
    int cur34 = 44;
    int acc92 = 54196;
    int x94 = 15423;
    int out93 = 31749;
    int h0 = 31;
    int sv0 = 0;
    int h1 = 90;
    int sv1 = 0;
    int h2 = 38254;
    int sv2 = 0;
    int i;
    for (i = 0; i < 65; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        tmp66 = acc92 - hi33;
        tmp66 = hi33 + out93;
        x94 = out93 - cur34;
        v55 = v55 - x94;
        acc92 = x94 - hi33;
        }
    }
}
int main() { test_func(); return 0; }

