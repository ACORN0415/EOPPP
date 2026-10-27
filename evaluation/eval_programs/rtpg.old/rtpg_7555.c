// RTPG_7555: vars=5 stmts=5
enum State { SLOW, GREEN, BLUE };
void test_func(void) {
    int c85 = 44775;
    int sum89 = 22;
    int z16 = 77;
    int lo35 = 8;
    int lo19 = 38772;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 14; i++) {
        lo35 = lo35 + sum89;
        lo19 = lo35 + c85;
        sum89 = sum89 + sum89;
        lo19 = c85 + 24;
        z16 = sum89 - c85;
    }
}
int main() { test_func(); return 0; }

