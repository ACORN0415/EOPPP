// RTPG_4378: vars=7 stmts=5
void test_func(void) {
    int hi33 = 28088;
    int hi20 = 31327;
    int prev73 = 27;
    int a4 = 6;
    int cnt82 = 40366;
    int cnt95 = 54735;
    int cnt14 = 10;
    int i;
    for (i = 0; i < 38; i++) {
        cnt95 = prev73 + 4;
        cnt14 = cnt14 - a4;
        prev73 = prev73 - cnt82;
        prev73 = prev73 + 3;
        cnt95 = a4 - hi33;
    }
}
int main() { test_func(); return 0; }

