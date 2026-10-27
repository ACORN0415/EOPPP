// RTPG_7258: vars=5 stmts=3
enum State { FAST, ON, RED };
void test_func(void) {
    int cnt19 = 9;
    int dat51 = -44;
    int z44 = 19578;
    int val18 = 12528;
    int a53 = 78;
    enum State st = FAST;
    int i;
    for (i = 0; i < 86; i++) {
        a53 = dat51 - z44;
        val18 = val18 - 2;
        z44 = z44 + 1;
    }
}
int main() { test_func(); return 0; }

