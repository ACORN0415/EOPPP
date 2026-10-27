// RTPG_5363: vars=3 stmts=2
enum State { FAST, ON, RED };
void test_func(void) {
    int prev59 = 55130;
    int tmp95 = 9;
    int c52 = 43;
    enum State st = FAST;
    int i;
    for (i = 0; i < 8; i++) {
        c52 = tmp95 | c52;
        c52 = c52 & prev59;
        if (tmp95 >= 67) {
        prev59 = prev59 - 2;
        }
    }
}
int main() { test_func(); return 0; }

