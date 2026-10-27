// RTPG_1851: vars=4 stmts=4
void test_func(void) {
    int lo82 = 87;
    int cnt65 = -24;
    int cur60 = 39;
    int z47 = 3;
    int i;
    for (i = 0; i < 61; i++) {
        lo82 = cur60 - lo82;
        z47 = cnt65 + cur60;
        cnt65 = cnt65 - 32;
        cur60 = z47 + cnt65;
    }
}
int main() { test_func(); return 0; }

