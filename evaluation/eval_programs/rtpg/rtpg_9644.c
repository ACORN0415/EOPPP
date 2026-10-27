// RTPG_9644: vars=3 stmts=2
void test_func(void) {
    int a40 = 10140;
    int v0 = 7;
    int tmp71 = 12;
    int *ptr = &v0;
    int i;
    for (i = 0; i < 64; i++) {
        v0 = a40 + v0;
        tmp71 = tmp71 - 1;
        *ptr = *ptr + 4;
        if (a40 <= -41) {
        a40 = v0 - tmp71;
        }
    }
}
int main() { test_func(); return 0; }

