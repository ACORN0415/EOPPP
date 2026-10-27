// RTPG_9661: vars=8 stmts=5
int xn[64];
int yo[64];
enum State { GREEN, OFF, SLOW };
void test_func(void) {
    int c33 = 21200;
    int hi50 = 9;
    int tmp42 = -47;
    int lo75 = 62516;
    int out64 = 9;
    int sum76 = 66;
    int z70 = 2812;
    int a62 = 100;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 64; i++) {
        hi50 = xn[i];
        hi50 = out64 ^ c33;
        hi50 = a62 / lo75;
        a62 = tmp42 ^ hi50;
        a62 = out64 + lo75;
        out64 = c33 - lo75;
        yo[i] = sum76;
    }
done:
    out64 = 0;
}
int main() { test_func(); return 0; }

