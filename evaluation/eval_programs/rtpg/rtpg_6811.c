// RTPG_6811: vars=3 stmts=8
void test_func(void) {
    int cur81 = 36;
    int cur29 = 42;
    int x4 = 20;
    int i;
    for (i = 0; i < 25; i++) {
        x4 = cur81;
        x4 = x4 + cur29;
        x4 = x4 + x4;
        x4 = cur29 - cur81;
        cur81 = cur81;
        cur81 = cur81 - 1;
        cur29 = cur29 + 4;
        x4 = cur81;
    }
}
int main() { test_func(); return 0; }

