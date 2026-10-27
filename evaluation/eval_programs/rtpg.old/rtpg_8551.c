// RTPG_8551: vars=4 stmts=2
enum State { OFF, RED, BLUE };
void test_func(void) {
    int lo20 = -43;
    float sum16 = 69.35;
    int acc54 = 28;
    int val94 = -28;
    enum State st = OFF;
    int *ptr = &acc54;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 93;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        sum16 = lo20 * 65152;
        acc54 = val94 - lo20;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

