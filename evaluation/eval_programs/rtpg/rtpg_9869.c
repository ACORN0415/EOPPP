// RTPG_9869: vars=8 stmts=5
int xn[64];
int yo[64];
enum State { GREEN, OFF, SLOW };
void test_func(void) {
    int hi50 = 21200;
    int out64 = 9;
    int lo75 = -47;
    int a62 = 62516;
    int sum76 = 9;
    int c33 = 66;
    int z70 = 2812;
    int tmp42 = 100;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 64; i++) {
        out64 = xn[i];
        c33 = sum76 / tmp42;
        a62 = lo75 & sum76;
        lo75 = out64 | lo75;
        tmp42 = tmp42 & z70;
        sum76 = hi50 + c33;
        yo[i] = sum76;
    }
}
int main() { test_func(); return 0; }

