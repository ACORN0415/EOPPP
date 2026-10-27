// RTPG_5970: vars=3 stmts=2
void test_func(void) {
    int val40 = 3;
    int hi20 = 32;
    int z58 = 0;
    int i;
    for (i = 0; i < 45; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        hi20 = hi20;
        val40 = hi20 - val40;
        }
    }
}
int main() { test_func(); return 0; }

