// RTPG_7837: vars=3 stmts=5
void test_func(void) {
    double dat74 = 65.80;
    int val82 = 44;
    int z64 = 38;
    int i;
    for (i = 0; i < 58; i++) {
        z64 = z64 + 3;
        val82 = z64 - 2;
        dat74 = z64;
        val82 = val82 - 4;
        val82 = val82 + 1;
    }
}
int main() { test_func(); return 0; }

