// RTPG_6549: vars=8 stmts=6
enum State { BLUE, FAST, GREEN };
void test_func(void) {
    int x82 = 14;
    int v51 = 8;
    int y72 = 4;
    int val54 = 20;
    int v54 = 32303;
    int res56 = -43;
    int v41 = 1;
    int v94 = 8;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 18; i++) {
        v54 = v54 - 1;
        v51 = v51 - 2;
        res56 = res56 + y72;
        v41 = v51 - v41;
        x82 = x82 + 5;
        res56 = res56 - 2;
        if (v51 >= -2) {
        y72 = v94 + val54;
        }
    }
}
int main() { test_func(); return 0; }

