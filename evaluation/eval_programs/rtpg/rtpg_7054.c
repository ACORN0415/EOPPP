// RTPG_7054: vars=9 stmts=3
void test_func(void) {
    int prev0 = 5;
    int tmp61 = 3;
    int out54 = 1;
    int b24 = 59;
    int lo58 = 45;
    int dat44 = 63333;
    int tmp88 = 5965;
    int cur0 = 2;
    int hi96 = 55431;
    int *ptr = &dat44;
    int i;
    for (i = 0; i < 65; i++) {
        hi96 = prev0 + hi96;
        cur0 = cur0 - hi96;
        cur0 = b24;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

