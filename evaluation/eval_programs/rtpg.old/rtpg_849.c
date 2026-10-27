// RTPG_849: vars=3 stmts=9
void test_func(void) {
    int res46 = 33;
    int v59 = 7;
    float y49 = 14.05;
    int i;
    for (i = 0; i < 74; i++) {
        y49 = y49 - 1;
        res46 = res46 - 4;
        v59 = v59 - 40443;
        y49 = y49 + res46;
        y49 = v59 + y49;
        y49 = y49 - 10;
        y49 = res46 - v59;
        res46 = v59 + y49;
        v59 = y49 - res46;
    }
}
int main() { test_func(); return 0; }

