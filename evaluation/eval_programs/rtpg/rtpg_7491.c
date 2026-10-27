// RTPG_7491: vars=4 stmts=3
void test_func(void) {
    int c24 = 39982;
    int tmp73 = 8;
    int prev8 = 4;
    int lo8 = 13779;
    int i;
    for (i = 0; i < 76; i++) {
        tmp73 = tmp73 + 4;
        prev8 = prev8 + 4;
        lo8 = lo8 + 2;
    }
}
int main() { test_func(); return 0; }

