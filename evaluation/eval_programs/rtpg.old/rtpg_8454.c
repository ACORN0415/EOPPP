// RTPG_8454: vars=6 stmts=5
void test_func(void) {
    int hi1 = 8;
    int lo94 = 25200;
    int dat5 = 65098;
    int prev94 = 14;
    int out10 = 2;
    int b77 = 93;
    int *ptr = &dat5;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 43;
    int sv1 = 0;
    int i;
    for (i = 0; i < 28; i++) {
        out10 = dat5 * 2;
        out10 = dat5 * 20;
        dat5 = dat5 * 30103;
        b77 = lo94 * 8;
        out10 = out10 - 4;
        *ptr = *ptr + 2;
        if (dat5 > 20) {
        b77 = prev94 - lo94;
        }
    }
}
int main() { test_func(); return 0; }

