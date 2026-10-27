// RTPG_2294: vars=4 stmts=6
void test_func(void) {
    int hi39 = 81;
    int dat31 = 60;
    int lo73 = 24;
    int c4 = 39386;
    int i;
    for (i = 0; i < 85; i++) {
        dat31 = hi39 + lo73;
        c4 = c4 - 5;
        c4 = lo73 - dat31;
        c4 = c4 - 2012;
        lo73 = lo73;
        hi39 = c4;
    }
}
int main() { test_func(); return 0; }

