// RTPG_5991: vars=3 stmts=8
int xn[64];
int yo[64];
int idx_arr[64];
enum State { BLUE, FAST, OFF };
void test_func(void) {
    int v98 = 26;
    float dat67 = 55.11;
    int lo89 = 9;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 64; i++) {
        v98 = xn[i];
        v98 = xn[idx_arr[i]];
        dat67 = dat67 - 4;
        v98 = lo89;
        v98 = lo89 + dat67;
        v98 = lo89 - v98;
        v98 = v98 - dat67;
        lo89 = dat67 - dat67;
        v98 = v98;
        lo89 = lo89 + 5;
        if (v98 != 36) {
        lo89 = lo89 + 1;
        }
        yo[i] = lo89;
    }
}
int main() { test_func(); return 0; }

