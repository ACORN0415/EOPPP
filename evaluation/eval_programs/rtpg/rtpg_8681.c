// RTPG_8681: vars=4 stmts=2
enum State { OFF, RED, BLUE };
void test_func(void) {
    int acc54 = -43;
    float lo20 = 69.35;
    int sum16 = 28;
    int val94 = -28;
    enum State st = OFF;
    int *ptr = &sum16;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 93;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo20 = acc54 * 65152;
        sum16 = val94 - acc54;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

