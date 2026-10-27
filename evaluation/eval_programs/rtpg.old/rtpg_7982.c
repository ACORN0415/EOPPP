// RTPG_7982: vars=4 stmts=12
enum State { SLOW, GREEN, RED };
void test_func(void) {
    int acc46 = 45;
    int a56 = -29;
    int prev49 = 15;
    int val89 = -8;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 5; i++) {
        a56 = acc46;
        a56 = val89;
        a56 = a56;
        prev49 = a56 - prev49;
        a56 = val89 - a56;
        prev49 = prev49 + acc46;
        acc46 = acc46 - a56;
        val89 = prev49 - acc46;
        acc46 = acc46 - 4;
        a56 = prev49 + val89;
        val89 = val89 - 5;
        val89 = prev49 + val89;
        if (acc46 > -10) {
        prev49 = acc46 - 48187;
        }
    }
}
int main() { test_func(); return 0; }

