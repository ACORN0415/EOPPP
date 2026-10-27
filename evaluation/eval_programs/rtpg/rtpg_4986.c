// RTPG_4986: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int lo70 = 28433;
    int prev55 = 36621;
    int lo79 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        lo70 = xn[i];
        lo70 = prev55;
        prev55 = prev55 - lo70;
        yo[i] = lo70;
    }
}
int main() { test_func(); return 0; }

