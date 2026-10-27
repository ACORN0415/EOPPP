// RTPG_3286: vars=3 stmts=4
void test_func(void) {
    int dat20 = 4;
    int cnt45 = 85;
    int sum61 = -12;
    int i;
    for (i = 0; i < 97; i++) {
        cnt45 = dat20 ^ sum61;
        sum61 = cnt45 + 96;
        cnt45 = sum61 - dat20;
        sum61 = sum61 + 5;
        if (cnt45 >= 60) {
        dat20 = dat20 + 5;
        }
    }
}
int main() { test_func(); return 0; }

