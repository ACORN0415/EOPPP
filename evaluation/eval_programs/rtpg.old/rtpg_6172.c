// RTPG_6172: vars=6 stmts=8
enum State { RED, GREEN, BLUE };
void test_func(void) {
    int cur43 = -2;
    int x79 = 1;
    int sum2 = -24;
    int v52 = 4;
    int b15 = 10;
    int res81 = 3;
    enum State st = RED;
    int i;
    for (i = 0; i < 64; i++) {
        x79 = x79 + 1;
        x79 = v52;
        b15 = cur43 - x79;
        res81 = cur43;
        cur43 = res81 + x79;
        cur43 = sum2;
        sum2 = sum2;
        b15 = res81 - v52;
        if (sum2 >= 9) {
        v52 = sum2 + sum2;
        }
    }
}
int main() { test_func(); return 0; }

