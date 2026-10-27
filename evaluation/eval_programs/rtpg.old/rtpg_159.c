// RTPG_159: vars=3 stmts=3
void test_func(void) {
    int c25 = 41;
    int res96 = 23;
    int x64 = 22062;
    int *ptr = &c25;
    int i;
    for (i = 0; i < 17; i++) {
        x64 = x64;
        x64 = x64 + res96;
        res96 = res96 + x64;
        *ptr = *ptr + 1;
        if (res96 > -50) {
        res96 = c25 + x64;
        }
    }
}
int main() { test_func(); return 0; }

