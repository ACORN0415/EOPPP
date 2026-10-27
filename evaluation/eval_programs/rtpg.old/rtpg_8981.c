// RTPG_8981: vars=5 stmts=2
enum State { FAST, ON, GREEN };
void test_func(void) {
    int out43 = 22;
    int val97 = 5;
    int val21 = 8512;
    int tmp34 = 18693;
    int hi3 = 84;
    enum State st = FAST;
    int i;
    for (i = 0; i < 87; i++) {
        tmp34 = out43 + hi3;
        val21 = val97 + val21;
    }
}
int main() { test_func(); return 0; }

