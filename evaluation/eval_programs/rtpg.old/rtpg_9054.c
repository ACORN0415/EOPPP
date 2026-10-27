// RTPG_9054: vars=7 stmts=9
struct Point { int a; int b; };
void test_func(void) {
    int b0 = 10;
    int acc55 = 19;
    int prev24 = 45;
    int v35 = -36;
    int prev32 = 26;
    int x64 = 67;
    int out94 = 46;
    struct Point s; s.a = 95; s.b = 24;
    int h0 = 46;
    int sv0 = 0;
    int h1 = 63321;
    int sv1 = 0;
    int i;
    for (i = 0; i < 52; i++) {
        out94 = prev32 - prev24;
        b0 = x64 + acc55;
        acc55 = acc55 + 5;
        out94 = v35;
        x64 = acc55 * -37;
        b0 = b0 - 1;
        x64 = x64 - 1;
        acc55 = acc55 - b0;
        acc55 = b0 - -25;
        s.a = s.a + s.b;
        if (prev24 < 9) {
        out94 = b0 - prev32;
        }
    }
}
int main() { test_func(); return 0; }

