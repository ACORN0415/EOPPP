// RTPG_1658: vars=5 stmts=11
struct Point { int a; int b; };
void test_func(void) {
    int val90 = 10;
    int out83 = 56237;
    int acc76 = 11;
    int tmp13 = 1;
    int z49 = 37;
    struct Point s; s.a = -26; s.b = -7;
    int h0 = 11234;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 89; i++) {
        val90 = out83 ^ acc76;
        val90 = val90 / tmp13;
        out83 = out83 | out83;
        acc76 = out83 | z49;
        z49 = z49 / acc76;
        out83 = out83 | acc76;
        z49 = val90 % out83;
        out83 = tmp13 - val90;
        acc76 = z49 + 54981;
        z49 = tmp13 * 43;
        out83 = val90 * 55;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

