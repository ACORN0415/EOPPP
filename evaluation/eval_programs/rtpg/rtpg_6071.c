// RTPG_6071: vars=3 stmts=2
void test_func(void) {
    int hi20 = 3;
    int val40 = 32;
    int z58 = 0;
    int i;
    for (i = 0; i < 45; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        val40 = val40;
        hi20 = val40 - hi20;
        }
    }
}
int main() { test_func(); return 0; }

