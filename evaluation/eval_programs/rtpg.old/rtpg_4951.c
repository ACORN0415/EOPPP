// RTPG_4951: vars=6 stmts=5
enum State { BLUE, RED, ON };
void test_func(void) {
    int v17 = 0;
    int c10 = 59;
    int acc27 = 8;
    int v88 = 18070;
    int y83 = 40;
    int lo19 = 38516;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 32; i++) {
        v88 = v88 / v88;
        c10 = v17;
        v88 = lo19 + 73;
        c10 = c10 + 1;
        v17 = y83 ^ lo19;
        if (c10 > -39) {
        v17 = c10 + v88;
        }
    }
}
int main() { test_func(); return 0; }

