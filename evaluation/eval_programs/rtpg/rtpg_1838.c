// RTPG_1838: vars=4 stmts=5
void test_func(void) {
    int cur81 = 37324;
    int res5 = 61;
    int prev63 = -38;
    int tmp44 = 9;
    int i;
    for (i = 0; i < 5; i++) {
        cur81 = res5;
        res5 = prev63 - -5;
        res5 = res5 + 3;
        cur81 = res5 + prev63;
        tmp44 = tmp44 - 3;
    }
}
int main() { test_func(); return 0; }

