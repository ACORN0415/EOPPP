// RTPG_7787: vars=5 stmts=3
void test_func(void) {
    int b66 = 6;
    int lo32 = 1;
    int prev31 = 74;
    int y34 = 8;
    int dat96 = 7;
    int i;
    for (i = 0; i < 13; i++) {
        dat96 = prev31 + dat96;
        y34 = prev31 - lo32;
        b66 = b66 + y34;
        if (lo32 <= 10) {
        prev31 = b66 - 28;
        }
    }
}
int main() { test_func(); return 0; }

