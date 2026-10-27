// RTPG_6733: vars=4 stmts=8
void test_func(void) {
    int cur85 = 6;
    int cnt58 = 32966;
    int dat40 = 0;
    int v90 = -14;
    int h0 = 41;
    int sv0 = 0;
    int h1 = 12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 14; i++) {
        dat40 = cur85;
        v90 = cur85 - cnt58;
        cnt58 = cnt58 + 4;
        cnt58 = cur85 - dat40;
        cnt58 = cur85 - 41;
        dat40 = dat40 + 1;
        v90 = dat40 - cnt58;
        cnt58 = cnt58 - v90;
    }
}
int main() { test_func(); return 0; }

