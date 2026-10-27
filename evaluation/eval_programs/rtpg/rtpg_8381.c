// RTPG_8381: vars=3 stmts=3
int xn[32];
int yo[32];
enum State { SLOW, FAST, ON };
void test_func(void) {
    int z18 = 4;
    int cur66 = -12;
    int cur27 = 69;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 32; i++) {
        z18 = xn[i];
        cur27 = cur66 - 62853;
        cur66 = cur66 + z18;
        cur27 = cur27;
        if (cur66 != -14) {
        cur27 = z18 + cur66;
        }
        yo[i] = z18;
    }
}
int main() { test_func(); return 0; }

