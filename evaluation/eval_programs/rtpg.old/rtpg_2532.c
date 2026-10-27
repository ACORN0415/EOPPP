// RTPG_2532: vars=5 stmts=12
void test_func(void) {
    int v48 = 9502;
    int y71 = 44;
    int dat7 = 24669;
    int b77 = 5;
    int y12 = 7;
    int i;
    for (i = 0; i < 19; i++) {
        dat7 = b77;
        v48 = y12 + y71;
        b77 = y71 - y12;
        v48 = b77 - v48;
        dat7 = y12 + dat7;
        y12 = v48 - y12;
        dat7 = dat7 + 3;
        dat7 = b77 - dat7;
        y71 = v48 + y12;
        y71 = y12 + 35;
        y12 = y12 + 5;
        b77 = b77 - y12;
    }
}
int main() { test_func(); return 0; }

