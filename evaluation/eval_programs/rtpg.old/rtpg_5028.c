// RTPG_5028: vars=6 stmts=9
enum State { FAST, ON, BLUE };
void test_func(void) {
    int c24 = 26;
    int a89 = 30074;
    int v46 = 2;
    int acc77 = 50298;
    int acc87 = 10;
    int hi46 = 46716;
    enum State st = FAST;
    int i;
    for (i = 0; i < 17; i++) {
        a89 = hi46 - 44009;
        c24 = a89 - v46;
        a89 = v46 + v46;
        hi46 = v46 - acc87;
        hi46 = hi46 + 5;
        a89 = v46;
        acc87 = hi46 - acc77;
        acc77 = a89;
        acc87 = c24 + a89;
        if (a89 > 22) {
        hi46 = hi46 + 5;
        }
    }
}
int main() { test_func(); return 0; }

