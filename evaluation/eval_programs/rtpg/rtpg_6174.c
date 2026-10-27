// RTPG_6174: vars=8 stmts=4
void test_func(void) {
    float prev42 = 38.08;
    int c26 = 37384;
    int val73 = 64;
    int cnt67 = 29;
    int cnt31 = 16;
    int res63 = 8;
    float res7 = 87.62;
    int val84 = 2;
    int i;
    for (i = 0; i < 100; i++) {
        prev42 = c26 - res63;
        c26 = val73 + c26;
        cnt67 = cnt67;
        res63 = prev42 - cnt31;
    }
}
int main() { test_func(); return 0; }

