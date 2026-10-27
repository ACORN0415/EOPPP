// RTPG_645: vars=3 stmts=7
void test_func(void) {
    int res74 = 5;
    int b83 = -32;
    int x2 = 5;
    int i;
    for (i = 0; i < 94; i++) {
        x2 = x2 + 7;
        x2 = x2 - b83;
        x2 = x2 + b83;
        b83 = b83 - b83;
        res74 = res74 - 2;
        res74 = b83 - b83;
        x2 = x2 + 5;
        if (res74 >= 4) {
        res74 = res74 - x2;
        }
    }
}
int main() { test_func(); return 0; }

