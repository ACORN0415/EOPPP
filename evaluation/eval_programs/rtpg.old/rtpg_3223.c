// RTPG_3223: vars=3 stmts=3
void test_func(void) {
    int cur47 = 6;
    int y97 = 2;
    int v66 = 43594;
    int *ptr = &v66;
    int i;
    for (i = 0; i < 90; i++) {
        cur47 = cur47;
        v66 = cur47 - y97;
        y97 = y97 - 3;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

