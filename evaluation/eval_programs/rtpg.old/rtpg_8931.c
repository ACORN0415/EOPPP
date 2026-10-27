// RTPG_8931: vars=8 stmts=5
int xn[16];
int yo[16];
enum State { RED, SLOW, BLUE };
void test_func(void) {
    int acc93 = 4;
    int sum25 = 2;
    int dat72 = 4;
    int res52 = 7;
    int cur57 = 38416;
    int b27 = 2;
    int sum88 = 23;
    int c71 = 47;
    enum State st = RED;
    int i;
    for (i = 0; i < 16; i++) {
        cur57 = xn[i];
        res52 = dat72;
        acc93 = acc93 - 6;
        dat72 = acc93;
        dat72 = c71 + b27;
        res52 = sum25 - dat72;
        if (dat72 > 99) goto done;
        if (b27 >= -21) {
        sum88 = dat72 - 85;
        }
        yo[i] = dat72;
    }
done:
    dat72 = 0;
}
int main() { test_func(); return 0; }

