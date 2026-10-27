// RTPG_1271: vars=10 stmts=7
enum State { FAST, GREEN, SLOW };
void test_func(void) {
    int out97 = 35799;
    int z40 = 12934;
    int z99 = 6;
    int y35 = 51;
    int b91 = -24;
    float z80 = 22.96;
    int b11 = 29;
    int out13 = 9;
    int b64 = 92;
    int v89 = 45;
    enum State st = FAST;
    int i;
    for (i = 0; i < 59; i++) {
        z40 = y35;
        y35 = y35 - 1;
        out97 = out97;
        out13 = out13 + 1;
        out97 = out97 + b11;
        b64 = out13 + v89;
        z80 = out97 + b11;
        if (out13 < 40) {
        b64 = z80;
        }
    }
}
int main() { test_func(); return 0; }

