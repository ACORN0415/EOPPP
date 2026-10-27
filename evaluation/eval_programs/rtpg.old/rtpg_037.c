// RTPG_37: vars=6 stmts=7
void test_func(void) {
    int x60 = 91;
    int prev6 = 10296;
    int out56 = 9;
    int z54 = 61001;
    int y16 = 19;
    int y13 = 90;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 60;
    int sv1 = 0;
    int h2 = 5;
    int sv2 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        x60 = y16;
        y16 = z54 - y16;
        z54 = prev6 % y16;
        y13 = y13 - 4;
        y13 = prev6 + 15;
        prev6 = z54;
        z54 = x60 & y13;
    }
}
int main() { test_func(); return 0; }

