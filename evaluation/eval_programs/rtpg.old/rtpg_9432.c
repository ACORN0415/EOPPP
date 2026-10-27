// RTPG_9432: vars=5 stmts=5
enum State { SLOW, BLUE, OFF };
void test_func(void) {
    int tmp61 = 41;
    int cnt56 = 62781;
    int sum45 = 5;
    int cur24 = -17;
    int hi42 = 13;
    enum State st = SLOW;
    int *ptr = &cnt56;
    int i;
    for (i = 0; i < 34; i++) {
        cnt56 = cur24 + 2;
        cnt56 = cnt56 - 3;
        sum45 = sum45 + 1;
        cnt56 = cnt56 + hi42;
        tmp61 = cnt56 - cur24;
        *ptr = *ptr + 3;
        if (sum45 != 69) {
        tmp61 = cnt56;
        }
    }
}
int main() { test_func(); return 0; }

