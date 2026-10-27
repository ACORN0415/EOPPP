// RTPG_2791: vars=7 stmts=11
void test_func(void) {
    int y35 = 1;
    int c74 = -50;
    int hi52 = 33;
    int hi53 = 41933;
    int y67 = 6;
    int v64 = 79;
    int c19 = 98;
    int i;
    for (i = 0; i < 16; i++) {
        y35 = c74 + c74;
        v64 = c19;
        hi52 = y67 + v64;
        v64 = c74 + y35;
        hi52 = hi53 - y67;
        y35 = c19;
        c74 = c19 - hi53;
        y35 = y35 - 4;
        hi52 = hi52 - 3;
        v64 = c19 - 3;
        y67 = y67 + 4;
    }
}
int main() { test_func(); return 0; }

