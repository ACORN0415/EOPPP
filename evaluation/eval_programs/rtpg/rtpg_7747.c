// RTPG_7747: vars=5 stmts=4
int xn[32];
int yo[32];
enum State { ON, OFF, SLOW };
void test_func(void) {
    int hi75 = 14;
    int lo75 = 39774;
    int b67 = 3;
    int cnt75 = 47;
    int res69 = 29057;
    enum State st = ON;
    int i;
    for (i = 0; i < 32; i++) {
        res69 = xn[i];
        cnt75 = b67 + 8;
        b67 = b67 + 2;
        hi75 = cnt75 + 43;
        lo75 = cnt75 - 44231;
        yo[i] = hi75;
    }
}
int main() { test_func(); return 0; }

