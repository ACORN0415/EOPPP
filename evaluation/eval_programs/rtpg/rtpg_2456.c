// RTPG_2456: vars=3 stmts=6
void test_func(void) {
    int dat85 = 54907;
    int sum75 = 56479;
    int cur50 = 4;
    int i;
    for (i = 0; i < 51; i++) {
        cur50 = cur50 - sum75;
        sum75 = dat85 - -39;
        dat85 = cur50 + cur50;
        dat85 = dat85 - dat85;
        dat85 = sum75 - cur50;
        dat85 = dat85 - sum75;
    }
}
int main() { test_func(); return 0; }

