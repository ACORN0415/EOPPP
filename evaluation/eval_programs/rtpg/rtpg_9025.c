// RTPG_9025: vars=3 stmts=10
void test_func(void) {
    int z4 = 3;
    int hi40 = 1;
    int out3 = 2;
    int i;
    for (i = 0; i < 67; i++) {
        out3 = z4 - hi40;
        hi40 = z4 - 78;
        hi40 = hi40 - 3;
        hi40 = out3 + out3;
        out3 = z4 - z4;
        hi40 = hi40 + 4;
        hi40 = z4 + out3;
        z4 = out3;
        z4 = z4 + 63591;
        hi40 = out3 - z4;
        if (hi40 > -7) {
        z4 = z4 + out3;
        }
    }
}
int main() { test_func(); return 0; }

