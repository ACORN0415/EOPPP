// RTPG_463: vars=3 stmts=3
void test_func(void) {
    int b19 = 5;
    int val70 = 27151;
    int cur32 = 87;
    int i;
    for (i = 0; i < 30; i++) {
        cur32 = val70 - cur32;
        cur32 = cur32 + 3;
        b19 = val70 - 31677;
    }
}
int main() { test_func(); return 0; }

