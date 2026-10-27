// RTPG_2127: vars=5 stmts=3
void test_func(void) {
    int v45 = 57777;
    int sum85 = 55;
    int dat33 = 49259;
    int prev57 = 57;
    int cur55 = 55;
    int *ptr = &prev57;
    int i;
    for (i = 0; i < 66; i++) {
        cur55 = v45;
        dat33 = dat33 + cur55;
        sum85 = v45 - prev57;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

