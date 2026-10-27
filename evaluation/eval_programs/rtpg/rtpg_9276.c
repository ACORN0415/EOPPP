// RTPG_9276: vars=6 stmts=11
struct Data { int a; int b; };
void test_func(void) {
    int cur18 = 1;
    int x90 = 15936;
    int val93 = 1;
    int dat86 = 47904;
    int dat58 = 77;
    int z10 = 9;
    struct Data s; s.a = 38824; s.b = 33;
    int i;
    for (i = 0; i < 70; i++) {
        val93 = z10 - x90;
        cur18 = x90 - 2;
        z10 = dat58 + 65;
        dat58 = dat58 - 1;
        z10 = dat58 - val93;
        val93 = dat86 + dat86;
        dat86 = dat58;
        val93 = x90 - 3;
        z10 = dat58;
        x90 = dat86 + 16;
        x90 = z10;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

