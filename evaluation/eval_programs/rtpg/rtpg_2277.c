// RTPG_2277: vars=4 stmts=3
void test_func(void) {
    int cur1 = 28;
    int cur90 = 35;
    int y37 = 67;
    int b12 = -39;
    int *ptr = &b12;
    int i;
    for (i = 0; i < 45; i++) {
        cur90 = y37 - cur1;
        b12 = b12 + y37;
        y37 = b12 - y37;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

