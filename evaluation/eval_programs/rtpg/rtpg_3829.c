// RTPG_3829: vars=6 stmts=6
enum State { RED, ON, OFF };
void test_func(void) {
    int z73 = 59030;
    int out21 = 7;
    double a23 = 22.86;
    int val56 = 45;
    int a75 = 23;
    int cnt41 = 47347;
    enum State st = RED;
    int i;
    for (i = 0; i < 74; i++) {
        a23 = cnt41 + z73;
        a75 = cnt41 - -32;
        a75 = val56 - cnt41;
        cnt41 = val56 - a75;
        val56 = cnt41;
        cnt41 = cnt41;
    }
}
int main() { test_func(); return 0; }

