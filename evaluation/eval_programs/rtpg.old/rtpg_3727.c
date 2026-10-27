// RTPG_3727: vars=7 stmts=8
void test_func(void) {
    int val77 = 4;
    int v64 = 32;
    int hi14 = -16;
    int lo22 = 60;
    int sum48 = 1;
    int acc76 = -46;
    int a3 = -49;
    int i;
    for (i = 0; i < 8; i++) {
        hi14 = lo22 - v64;
        lo22 = val77 + hi14;
        a3 = a3 - 1;
        v64 = lo22 + sum48;
        hi14 = acc76 + 5;
        sum48 = acc76 + 25;
        v64 = acc76;
        a3 = lo22 - acc76;
    }
}
int main() { test_func(); return 0; }

