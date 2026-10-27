// RTPG_8938: vars=5 stmts=4
enum State { RED, OFF, GREEN };
void test_func(void) {
    int tmp32 = 6;
    int x59 = 40;
    int prev14 = 5;
    int y92 = 7274;
    int out60 = 2;
    enum State st = RED;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 18281;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        out60 = y92 + 31028;
        x59 = out60 + tmp32;
        out60 = out60 + 1;
        tmp32 = x59 - prev14;
        if (out60 > 8647) goto done;
    }
done:
    out60 = 0;
}
int main() { test_func(); return 0; }

