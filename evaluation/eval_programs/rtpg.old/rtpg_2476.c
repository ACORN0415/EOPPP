// RTPG_2476: vars=3 stmts=6
void test_func(void) {
    int sum75 = 54907;
    int cur50 = 56479;
    int dat85 = 4;
    int i;
    for (i = 0; i < 51; i++) {
        dat85 = dat85 - cur50;
        cur50 = sum75 - -39;
        sum75 = dat85 + dat85;
        sum75 = sum75 - sum75;
        sum75 = cur50 - dat85;
        sum75 = sum75 - cur50;
    }
}
int main() { test_func(); return 0; }

