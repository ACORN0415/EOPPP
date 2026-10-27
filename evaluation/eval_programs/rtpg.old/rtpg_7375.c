// RTPG_7375: vars=6 stmts=9
void test_func(void) {
    int hi16 = -39;
    int c3 = 16;
    int val8 = 6406;
    int y74 = 3;
    int z1 = 18919;
    int y2 = 1;
    int i;
    for (i = 0; i < 13; i++) {
        c3 = c3 + 2;
        hi16 = y74 + c3;
        val8 = z1;
        y74 = y2;
        z1 = hi16;
        val8 = hi16;
        hi16 = hi16;
        c3 = y2;
        hi16 = y74 + hi16;
    }
}
int main() { test_func(); return 0; }

