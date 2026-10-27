// RTPG_6970: vars=5 stmts=4
void test_func(void) {
    int prev44 = 6;
    int lo1 = 74;
    int lo62 = 17;
    int acc17 = 43988;
    int val23 = 43;
    int *ptr = &val23;
    int i;
    for (i = 0; i < 33; i++) {
        acc17 = val23 + lo1;
        acc17 = lo1 + val23;
        prev44 = lo62 + lo1;
        val23 = lo1 - lo1;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

