// RTPG_4359: vars=10 stmts=4
enum State { SLOW, GREEN, RED };
void test_func(void) {
    double x85 = 38.08;
    int y92 = 61641;
    double prev95 = 46.57;
    int v83 = 0;
    int cnt79 = 2;
    int x81 = 89;
    int lo88 = -37;
    double y41 = 29.75;
    double b85 = 93.97;
    int x75 = 62;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 31; i++) {
        cnt79 = x75 - x81;
        y92 = cnt79 - lo88;
        x81 = x75 + lo88;
        v83 = cnt79 - 0;
        if (y92 != -45) {
        x85 = b85 + prev95;
        }
    }
}
int main() { test_func(); return 0; }

