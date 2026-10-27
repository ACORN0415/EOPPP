// RTPG_7955: vars=6 stmts=5
enum State { RED, FAST, BLUE };
void test_func(void) {
    int cnt19 = 33094;
    int val62 = 2;
    int v61 = 20108;
    float b70 = 9.97;
    int z22 = 7575;
    int x29 = 9;
    enum State st = RED;
    int i;
    for (i = 0; i < 62; i++) {
        val62 = cnt19 % v61;
        x29 = val62 | cnt19;
        b70 = val62 - -26;
        cnt19 = b70 - x29;
        v61 = b70 + x29;
        if (val62 >= 59) {
        b70 = z22 - val62;
        }
    }
}
int main() { test_func(); return 0; }

