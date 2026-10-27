// RTPG_9358: vars=5 stmts=5
enum State { BLUE, GREEN, SLOW };
void test_func(void) {
    int out74 = 18;
    int acc14 = 37;
    int dat40 = -6;
    int a52 = 50452;
    int cur78 = 16;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 72; i++) {
        acc14 = out74 - cur78;
        a52 = cur78 + 49980;
        out74 = dat40 + out74;
        cur78 = dat40 + 8;
        dat40 = a52;
    }
}
int main() { test_func(); return 0; }

