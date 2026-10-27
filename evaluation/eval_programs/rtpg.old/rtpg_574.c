// RTPG_574: vars=3 stmts=5
int xn[16];
int yo[16];
enum State { RED, GREEN, BLUE };
void test_func(void) {
    int v50 = -10;
    int val19 = 16110;
    int x89 = 1;
    enum State st = RED;
    int i;
    for (i = 0; i < 16; i++) {
        x89 = xn[i];
        val19 = val19;
        val19 = v50 % val19;
        x89 = x89 - 5;
        v50 = x89 % v50;
        val19 = val19;
        if (x89 == 0) {
        v50 = x89 + v50;
        }
        yo[i] = x89;
    }
}
int main() { test_func(); return 0; }

