// RTPG_742: vars=8 stmts=8
int xn[32];
int yo[32];
enum State { FAST, SLOW, BLUE };
void test_func(void) {
    int prev16 = 40519;
    int b74 = 5512;
    int z76 = 1;
    int val73 = 46715;
    int a24 = 33444;
    int y16 = 79;
    int out74 = 7;
    int sum47 = 4027;
    enum State st = FAST;
    int h0 = 54877;
    int sv0 = 0;
    int h1 = -26;
    int sv1 = 0;
    int h2 = 42;
    int sv2 = 0;
    int h3 = 5;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev16 = xn[i];
        val73 = sum47;
        sum47 = z76 * 23;
        b74 = val73 - 15180;
        z76 = b74 * 96;
        val73 = prev16 * 50;
        b74 = a24;
        z76 = sum47 * 33;
        out74 = val73 + 7;
        if (y16 > 51081) goto done;
        yo[i] = b74;
    }
done:
    a24 = 0;
}
int main() { test_func(); return 0; }

