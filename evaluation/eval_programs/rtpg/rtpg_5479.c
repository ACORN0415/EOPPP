// RTPG_5479: vars=3 stmts=4
void test_func(void) {
    int hi73 = 76;
    int sum97 = 12845;
    int lo2 = 0;
    int i;
    for (i = 0; i < 87; i++) {
        sum97 = hi73 + lo2;
        sum97 = sum97 & lo2;
        lo2 = hi73;
        lo2 = hi73;
    }
}
int main() { test_func(); return 0; }

