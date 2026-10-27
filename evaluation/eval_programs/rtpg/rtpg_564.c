// RTPG_564: vars=3 stmts=5
int xn[16];
int yo[16];
enum State { RED, GREEN, BLUE };
void test_func(void) {
    int x89 = -10;
    int v50 = 16110;
    int val19 = 1;
    enum State st = RED;
    int i;
    for (i = 0; i < 16; i++) {
        val19 = xn[i];
        v50 = v50;
        v50 = x89 % val19;
        val19 = val19 - 5;
        x89 = val19 % x89;
        v50 = v50;
        if (val19 == 0) {
        x89 = val19 + x89;
        }
        yo[i] = val19;
    }
}
int main() { test_func(); return 0; }

