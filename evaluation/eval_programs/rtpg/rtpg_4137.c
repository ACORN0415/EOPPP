// RTPG_4137: vars=7 stmts=2
void test_func(void) {
    int v83 = 38516;
    int lo9 = 10;
    int v97 = 6;
    int a17 = -42;
    int z21 = 31;
    int cnt65 = 13;
    int res92 = -36;
    int *ptr = &a17;
    int i;
    for (i = 0; i < 42; i++) {
        z21 = z21;
        v83 = v97 - lo9;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

