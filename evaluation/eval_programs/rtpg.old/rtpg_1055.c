// RTPG_1055: vars=4 stmts=5
enum State { BLUE, RED, ON };
void test_func(void) {
    int sum6 = 41;
    int c22 = 4;
    int b69 = 23;
    int val43 = 53389;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 74; i++) {
        switch (val43) {
            case 0: c22 = 65; break;
            case 1: val43 = 93; break;
            case 2: c22 = 5; break;
            case 3: val43 = 30; break;
            default: break;
        }
        val43 = val43 + 1;
    }
}
int main() { test_func(); return 0; }

