// RTPG_9403: vars=9 stmts=6
enum State { BLUE, SLOW, ON };
void test_func(void) {
    int val98 = 66;
    int acc14 = 18659;
    double dat62 = 88.05;
    int val65 = 52;
    int v51 = -25;
    float res65 = 86.57;
    int tmp31 = -11;
    int acc22 = 16;
    double a93 = 89.31;
    enum State st = BLUE;
    int *ptr = &val98;
    int i;
    for (i = 0; i < 84; i++) {
        val98 = res65 - a93;
        acc22 = v51 + res65;
        val98 = res65 - 47;
        tmp31 = v51 - a93;
        acc14 = a93 + res65;
        res65 = res65 + 1;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

