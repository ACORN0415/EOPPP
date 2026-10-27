// RTPG_5393: vars=3 stmts=4
void test_func(void) {
    int sum97 = 76;
    int lo2 = 12845;
    int hi73 = 0;
    int i;
    for (i = 0; i < 87; i++) {
        lo2 = sum97 + hi73;
        hi73 = lo2 ^ hi73;
        lo2 = sum97;
        hi73 = sum97;
    }
}
int main() { test_func(); return 0; }

