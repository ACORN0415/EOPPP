// RTPG_2651: vars=6 stmts=3
void test_func(void) {
    int v18 = 10;
    int x39 = 23;
    int hi67 = -35;
    int tmp94 = 54;
    int hi29 = 6;
    int hi36 = 5;
    int i;
    for (i = 0; i < 80; i++) {
        x39 = hi29 + hi29;
        tmp94 = tmp94 + hi67;
        tmp94 = tmp94 + hi36;
        if (tmp94 > 30307) goto done;
        if (x39 < 72) {
        hi29 = x39 - v18;
        }
    }
done:
    x39 = 0;
}
int main() { test_func(); return 0; }

