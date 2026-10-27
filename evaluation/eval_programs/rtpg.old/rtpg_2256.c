// RTPG_2256: vars=4 stmts=2
enum State { OFF, BLUE, FAST };
void test_func(void) {
    float z0 = 60.62;
    int c31 = 84;
    int hi9 = 14;
    int tmp9 = 6;
    enum State st = OFF;
    int h0 = 52126;
    int sv0 = 0;
    int h1 = 46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 80; i++) {
        c31 = hi9 | c31;
        c31 = hi9 + 93;
        if (c31 > 52) goto done;
    }
done:
    hi9 = 0;
}
int main() { test_func(); return 0; }

