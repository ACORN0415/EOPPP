// RTPG_390: vars=4 stmts=6
void test_func(void) {
    int b3 = -13;
    int val74 = 3;
    int cnt0 = 51167;
    int dat9 = -2;
    int *ptr = &b3;
    int i;
    for (i = 0; i < 22; i++) {
        cnt0 = cnt0 + 3;
        cnt0 = cnt0 - b3;
        cnt0 = b3 - dat9;
        cnt0 = cnt0 - val74;
        b3 = cnt0 - val74;
        dat9 = b3 - val74;
        *ptr = *ptr + 1;
        if (b3 < -15) {
        b3 = b3 + dat9;
        }
    }
}
int main() { test_func(); return 0; }

