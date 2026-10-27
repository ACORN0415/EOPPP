// RTPG_3030: vars=4 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int cur99 = 7;
    int z70 = 40;
    int dat58 = 9;
    int val87 = 0;
    struct Point s; s.a = 65; s.b = 4;
    int i;
    for (i = 0; i < 11; i++) {
        dat58 = dat58 - 1;
        z70 = val87;
        z70 = cur99 + val87;
        dat58 = z70 & val87;
        cur99 = val87 - 7;
        val87 = cur99 | dat58;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

