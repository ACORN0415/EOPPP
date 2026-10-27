// RTPG_6185: vars=6 stmts=12
void test_func(void) {
    int c36 = 0;
    int hi38 = 4;
    int lo3 = 19105;
    int y74 = 4;
    int prev79 = 4561;
    int res69 = 16219;
    int i;
    for (i = 0; i < 16; i++) {
        hi38 = lo3 - hi38;
        prev79 = res69;
        prev79 = c36 - res69;
        c36 = res69;
        c36 = y74 + c36;
        res69 = hi38 + 70;
        y74 = y74 + 5;
        prev79 = y74 + res69;
        y74 = res69;
        hi38 = c36 + prev79;
        lo3 = lo3 - lo3;
        prev79 = hi38;
        if (c36 <= 33) {
        prev79 = prev79 - 5;
        }
    }
}
int main() { test_func(); return 0; }

