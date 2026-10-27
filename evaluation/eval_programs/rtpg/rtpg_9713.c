// RTPG_9713: vars=10 stmts=4
enum State { RED, SLOW, FAST };
void test_func(void) {
    int res75 = 70;
    int c66 = 62321;
    int val3 = 6;
    int b64 = 10;
    int z40 = 6;
    int res28 = 57681;
    int z41 = 23;
    int cnt40 = 2;
    int acc41 = 98;
    int v24 = 24767;
    enum State st = RED;
    int h0 = 15;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int h2 = 10;
    int sv2 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        z41 = z40 ^ b64;
        acc41 = val3 ^ z40;
        v24 = v24 + 4;
        b64 = cnt40;
    }
}
int main() { test_func(); return 0; }

