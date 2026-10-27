// RTPG_2141: vars=5 stmts=3
void test_func(void) {
    int dat33 = 57777;
    int cur55 = 55;
    int sum85 = 49259;
    int prev57 = 57;
    int v45 = 55;
    int *ptr = &prev57;
    int i;
    for (i = 0; i < 66; i++) {
        v45 = dat33;
        sum85 = sum85 + v45;
        cur55 = dat33 - prev57;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

