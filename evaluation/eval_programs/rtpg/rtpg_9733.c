// RTPG_9733: vars=3 stmts=2
void test_func(void) {
    int acc58 = 18;
    int sum98 = 4;
    int cnt69 = 2;
    int i;
    for (i = 0; i < 37; i++) {
        cnt69 = acc58 + sum98;
        sum98 = cnt69;
        if (acc58 == -18) {
        cnt69 = cnt69 - -50;
        }
    }
}
int main() { test_func(); return 0; }

