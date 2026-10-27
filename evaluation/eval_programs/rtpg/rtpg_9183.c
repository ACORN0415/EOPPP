// RTPG_9183: vars=5 stmts=6
enum State { SLOW, RED, ON };
void test_func(void) {
    int v63 = -45;
    int prev34 = 3;
    int lo63 = 0;
    int dat99 = 2087;
    int b45 = 7;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 77; i++) {
        v63 = v63 + dat99;
        b45 = b45 + 1;
        lo63 = lo63 + 4;
        prev34 = prev34 + 3;
        prev34 = prev34 + 11514;
        b45 = dat99 + dat99;
    }
}
int main() { test_func(); return 0; }

