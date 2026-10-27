// RTPG_1593: vars=4 stmts=7
void test_func(void) {
    int dat78 = 45;
    int cur31 = -14;
    int x15 = 4;
    int prev4 = 64534;
    int i;
    for (i = 0; i < 89; i++) {
        x15 = x15 + 1;
        cur31 = cur31 + 5;
        dat78 = cur31 - prev4;
        x15 = x15 + 4;
        dat78 = prev4 - x15;
        dat78 = x15;
        cur31 = x15;
        if (prev4 <= -35) {
        cur31 = prev4;
        }
    }
}
int main() { test_func(); return 0; }

