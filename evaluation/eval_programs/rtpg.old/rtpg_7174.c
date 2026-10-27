// RTPG_7174: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int y37 = 14277;
    int val93 = -28;
    int sum36 = 1;
    int val76 = 10969;
    int i;
    for (i = 0; i < 21; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        y37 = val93 - sum36;
        val76 = val93 + y37;
        y37 = y37 - 3;
        sum36 = val93;
        val76 = y37 - -3;
        val93 = val93 - 3;
        val76 = val76;
        sum36 = val76 - 48;
        }
    }
}
int main() { test_func(); return 0; }

