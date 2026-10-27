// RTPG_5816: vars=10 stmts=7
enum State { ON, SLOW, OFF };
void test_func(void) {
    int b47 = 46895;
    int prev89 = -22;
    int res2 = 9;
    int b27 = 39;
    int v53 = 1;
    int val25 = 0;
    int z34 = 46;
    int tmp5 = 48;
    int a88 = 4631;
    int cnt13 = -31;
    enum State st = ON;
    int h0 = 54792;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int h2 = 16;
    int sv2 = 0;
    int h3 = 9;
    int sv3 = 0;
    int i;
    for (i = 0; i < 9; i++) {
        a88 = z34 | a88;
        a88 = b27 | cnt13;
        prev89 = b47 & prev89;
        b47 = b47 + 3;
        res2 = v53 & prev89;
        cnt13 = cnt13 - a88;
        b47 = b47 - 3;
    }
}
int main() { test_func(); return 0; }

