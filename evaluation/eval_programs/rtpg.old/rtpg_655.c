// RTPG_655: vars=3 stmts=7
void test_func(void) {
    int x2 = 5;
    int b83 = -32;
    int res74 = 5;
    int i;
    for (i = 0; i < 94; i++) {
        res74 = res74 + 7;
        res74 = res74 - b83;
        res74 = res74 + b83;
        b83 = b83 - b83;
        x2 = x2 - 2;
        x2 = b83 - b83;
        res74 = res74 + 5;
        if (x2 >= 4) {
        x2 = x2 - res74;
        }
    }
}
int main() { test_func(); return 0; }

