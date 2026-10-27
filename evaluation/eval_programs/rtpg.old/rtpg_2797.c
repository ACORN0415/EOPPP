// RTPG_2797: vars=9 stmts=11
enum State { BLUE, RED, SLOW };
void test_func(void) {
    int dat68 = 1959;
    int y85 = 10;
    int v15 = 96;
    int prev57 = 0;
    int v42 = 31;
    int b4 = 27657;
    int cnt36 = 3;
    int v70 = 2;
    int lo8 = -45;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 61; i++) {
        b4 = v15 + v70;
        dat68 = prev57 + v70;
        prev57 = cnt36 + 2;
        v70 = v70 + 4;
        lo8 = v15 - b4;
        v70 = v70 - 1;
        dat68 = v70;
        v15 = y85 + 44619;
        lo8 = lo8 - 58;
        dat68 = v42 - 31;
        v70 = prev57 + v70;
        if (prev57 != 66) {
        lo8 = b4 + 6;
        }
    }
}
int main() { test_func(); return 0; }

