// RTPG_5091: vars=6 stmts=9
enum State { FAST, ON, BLUE };
void test_func(void) {
    int c24 = 26;
    int hi46 = 30074;
    int acc77 = 2;
    int acc87 = 50298;
    int v46 = 10;
    int a89 = 46716;
    enum State st = FAST;
    int i;
    for (i = 0; i < 17; i++) {
        hi46 = a89 - 44009;
        c24 = hi46 - acc77;
        hi46 = acc77 + acc77;
        a89 = acc77 - v46;
        a89 = a89 + 5;
        hi46 = acc77;
        v46 = a89 - acc87;
        acc87 = hi46;
        v46 = c24 + hi46;
        if (hi46 > 22) {
        a89 = a89 + 5;
        }
    }
}
int main() { test_func(); return 0; }

