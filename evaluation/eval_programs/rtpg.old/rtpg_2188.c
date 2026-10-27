// RTPG_2188: vars=3 stmts=5
enum State { ON, SLOW, BLUE };
void test_func(void) {
    int acc64 = 17;
    int x84 = -27;
    int val45 = 25;
    enum State st = ON;
    int h0 = 29931;
    int sv0 = 0;
    int h1 = 14448;
    int sv1 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        x84 = x84 + val45;
        acc64 = acc64 * 25;
        acc64 = x84 - -33;
        x84 = val45 - 50;
        val45 = acc64 + 10;
    }
}
int main() { test_func(); return 0; }

