// RTPG_4260: vars=3 stmts=4
enum State { ON, SLOW, BLUE };
void test_func(void) {
    int res81 = 4;
    int z15 = 6783;
    int a58 = 31114;
    enum State st = ON;
    int h0 = 57;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 48; i++) {
        res81 = res81 + 1;
        res81 = res81 * 51534;
        a58 = res81 * 35;
        res81 = res81 - z15;
        if (a58 == 92) {
        a58 = z15 + res81;
        }
    }
}
int main() { test_func(); return 0; }

