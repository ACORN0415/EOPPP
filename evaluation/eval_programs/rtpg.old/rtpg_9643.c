// RTPG_9643: vars=3 stmts=3
void test_func(void) {
    int cur6 = -27;
    int cur52 = 21;
    int y28 = 40;
    int i;
    for (i = 0; i < 94; i++) {
        cur6 = cur6 + cur52;
        cur52 = cur6;
        y28 = cur6;
        if (cur52 > -34) {
        cur52 = cur6 + 26;
        }
    }
}
int main() { test_func(); return 0; }

