// RTPG_8286: vars=9 stmts=7
enum State { ON, FAST, SLOW };
void test_func(void) {
    int v86 = 38;
    int prev89 = -26;
    int v98 = 22906;
    int acc27 = 72;
    int c34 = 48;
    int x18 = 65487;
    int acc38 = 7192;
    int y36 = 32;
    int res21 = 7;
    enum State st = ON;
    int i;
    for (i = 0; i < 69; i++) {
        c34 = c34 + 4;
        acc27 = prev89 - y36;
        acc38 = v86 + x18;
        acc38 = v98 - x18;
        prev89 = y36 - res21;
        v98 = prev89 - 37;
        acc27 = v86;
    }
}
int main() { test_func(); return 0; }

