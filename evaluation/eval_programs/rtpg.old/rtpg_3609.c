// RTPG_3609: vars=5 stmts=4
void test_func(void) {
    int x27 = 73;
    int res14 = 61;
    int z20 = 87;
    int sum82 = 23613;
    int val75 = -28;
    int i;
    for (i = 0; i < 65; i++) {
        z20 = x27 - z20;
        res14 = res14 + 1;
        res14 = res14 + z20;
        sum82 = sum82 - z20;
    }
}
int main() { test_func(); return 0; }

