// RTPG_2031: vars=8 stmts=6
void test_func(void) {
    float hi53 = 85.27;
    int cur1 = 17;
    int lo91 = 2870;
    int hi84 = -19;
    int sum45 = 3;
    int hi78 = 15419;
    int res25 = -9;
    int out72 = 1888;
    int i;
    for (i = 0; i < 67; i++) {
        hi53 = cur1 - 3;
        sum45 = sum45 + 5;
        hi84 = hi78 + cur1;
        sum45 = sum45 - 4;
        hi84 = hi78 - sum45;
        sum45 = hi53 + sum45;
    }
}
int main() { test_func(); return 0; }

