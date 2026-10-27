// RTPG_9382: vars=10 stmts=5
int xn[64];
int yo[64];
enum State { FAST, GREEN, SLOW };
void test_func(void) {
    int acc80 = 50;
    int lo47 = 93;
    int sum61 = 17478;
    int hi25 = 62055;
    int z81 = 52722;
    int cnt91 = 0;
    int sum28 = 1;
    int res22 = 98;
    int b48 = 57279;
    int x81 = 0;
    enum State st = FAST;
    int i;
    for (i = 0; i < 64; i++) {
        acc80 = xn[i];
        hi25 = b48;
        sum61 = sum61 - 2;
        lo47 = hi25 + cnt91;
        sum61 = sum61 + 2;
        res22 = res22 + 3;
        if (x81 <= -41) {
        x81 = lo47 - 30;
        }
        yo[i] = acc80;
    }
}
int main() { test_func(); return 0; }

