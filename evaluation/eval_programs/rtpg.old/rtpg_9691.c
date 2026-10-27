// RTPG_9691: vars=8 stmts=2
void test_func(void) {
    int c78 = 16;
    int out21 = -28;
    int sum85 = 1;
    int sum52 = 9;
    int cur70 = -26;
    int b64 = -12;
    int x88 = 33;
    int v59 = 59348;
    int *ptr = &x88;
    int i;
    for (i = 0; i < 77; i++) {
        sum52 = sum85 - sum52;
        cur70 = cur70 - 4;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

