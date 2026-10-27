// RTPG_8141: vars=7 stmts=12
struct Pair { int a; int b; };
void test_func(void) {
    int val31 = 49104;
    int b46 = 41;
    int b35 = 24;
    int cnt86 = 28;
    int lo47 = 53234;
    float lo40 = 79.72;
    float out19 = 56.27;
    struct Pair s; s.a = 59; s.b = 14342;
    int h0 = 30;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        b46 = out19;
        out19 = out19 * 5;
        cnt86 = val31 + out19;
        cnt86 = cnt86 - 2;
        b35 = b35 - 3;
        val31 = out19 + 59726;
        out19 = lo40;
        lo40 = lo40 + 2;
        b46 = lo40 - cnt86;
        cnt86 = lo40 - val31;
        val31 = val31 - 4;
        lo47 = val31 * 32;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

