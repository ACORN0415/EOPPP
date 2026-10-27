// RTPG_1257: vars=10 stmts=7
enum State { FAST, GREEN, SLOW };
void test_func(void) {
    int z99 = 35799;
    int b91 = 12934;
    int y35 = 6;
    int out13 = 51;
    int b64 = -24;
    float z80 = 22.96;
    int z40 = 29;
    int b11 = 9;
    int out97 = 92;
    int v89 = 45;
    enum State st = FAST;
    int i;
    for (i = 0; i < 59; i++) {
        b91 = out13;
        out13 = out13 - 1;
        z99 = z99;
        b11 = b11 + 1;
        z99 = z99 + z40;
        out97 = b11 + v89;
        z80 = z99 + z40;
        if (b11 < 40) {
        out97 = z80;
        }
    }
}
int main() { test_func(); return 0; }

