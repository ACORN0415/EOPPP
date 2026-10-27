// RTPG_1127: vars=4 stmts=5
struct Point { int a; int b; };
void test_func(void) {
    int dat71 = 47;
    int res31 = 46005;
    int lo33 = 50;
    int a57 = 16;
    struct Point s; s.a = -30; s.b = 9259;
    int h0 = 99;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        a57 = a57 + 3;
        dat71 = res31 + 19;
        res31 = lo33 * 7;
        a57 = dat71 * 4;
        dat71 = lo33 * -33;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

