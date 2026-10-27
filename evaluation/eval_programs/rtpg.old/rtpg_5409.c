// RTPG_5409: vars=6 stmts=6
void test_func(void) {
    int v64 = 56050;
    int cnt65 = 3;
    int c80 = 46;
    int y73 = 1;
    int y64 = 4;
    int v92 = 9246;
    int i;
    for (i = 0; i < 28; i++) {
        y64 = v92 - y73;
        v64 = v64 - 1;
        v92 = cnt65 + v92;
        cnt65 = cnt65 - 2;
        y73 = y73 - 4;
        y73 = y73 + 4;
    }
}
int main() { test_func(); return 0; }

