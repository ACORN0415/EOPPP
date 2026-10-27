// RTPG_687: vars=8 stmts=6
void test_func(void) {
    int val62 = 29;
    int b61 = 10;
    int z80 = 3641;
    int z21 = 4;
    int tmp41 = 21304;
    int prev75 = -45;
    int lo18 = 1632;
    int lo11 = -30;
    int i;
    for (i = 0; i < 44; i++) {
        val62 = prev75 + z21;
        z21 = z21;
        lo18 = lo18 - 2;
        val62 = tmp41 + 5;
        z21 = tmp41 + lo18;
        z21 = lo18 - prev75;
    }
}
int main() { test_func(); return 0; }

