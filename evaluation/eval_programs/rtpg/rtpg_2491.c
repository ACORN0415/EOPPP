// RTPG_2491: vars=9 stmts=5
void test_func(void) {
    int prev82 = 4;
    int prev35 = 16;
    int out49 = 82;
    int v14 = 50;
    int val51 = 10;
    int prev90 = 99;
    int tmp56 = 6;
    int lo71 = 6;
    int prev21 = 9;
    int i;
    for (i = 0; i < 84; i++) {
        prev35 = prev35 + 4;
        out49 = prev90 - prev35;
        tmp56 = prev21 - prev35;
        v14 = val51 + v14;
        prev35 = val51 - lo71;
    }
}
int main() { test_func(); return 0; }

