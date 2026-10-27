// RTPG_4924: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int lo79 = 28433;
    int lo70 = 36621;
    int prev55 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        lo79 = xn[i];
        lo79 = lo70;
        lo70 = lo70 - lo79;
        yo[i] = lo79;
    }
}
int main() { test_func(); return 0; }

