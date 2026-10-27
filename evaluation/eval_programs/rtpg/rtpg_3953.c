// RTPG_3953: vars=9 stmts=7
enum State { RED, BLUE, ON };
void test_func(void) {
    int tmp16 = 8;
    int b66 = 33;
    int val68 = 1;
    int out37 = 1;
    int sum18 = 24;
    int dat82 = 41137;
    int cnt62 = 16531;
    int tmp96 = 3;
    int y90 = 56640;
    enum State st = RED;
    int i;
    for (i = 0; i < 94; i++) {
        out37 = cnt62 - dat82;
        dat82 = dat82 - 4;
        val68 = val68 - 2;
        val68 = val68 - 1;
        cnt62 = dat82;
        sum18 = dat82 + out37;
        dat82 = b66 - 29;
        if (sum18 > 31) {
        dat82 = sum18 - tmp16;
        }
    }
}
int main() { test_func(); return 0; }

