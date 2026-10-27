// RTPG_194: vars=10 stmts=7
int xn[64];
int yo[64];
int idx_arr[64];
enum State { ON, OFF, BLUE };
void test_func(void) {
    int c83 = 49098;
    int lo56 = 26886;
    int v66 = 65144;
    int cnt48 = 9;
    int cnt8 = 7232;
    int out60 = 17042;
    int b52 = 4258;
    int dat93 = 33;
    int y79 = 2;
    int cnt1 = 79;
    enum State st = ON;
    int i;
    for (i = 0; i < 64; i++) {
        cnt8 = xn[i];
        b52 = xn[idx_arr[i]];
        cnt1 = b52 | c83;
        cnt8 = c83 - -6;
        y79 = out60 - v66;
        dat93 = y79 % out60;
        c83 = b52 - cnt8;
        y79 = cnt8;
        out60 = lo56 + 97;
        yo[i] = v66;
    }
}
int main() { test_func(); return 0; }

