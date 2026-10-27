// RTPG_865: vars=3 stmts=6
void test_func(void) {
    int lo86 = 25029;
    int res13 = -20;
    int hi55 = -20;
    int i;
    for (i = 0; i < 93; i++) {
        hi55 = lo86 ^ hi55;
        res13 = hi55;
        res13 = lo86 - lo86;
        res13 = lo86 ^ hi55;
        lo86 = hi55 % res13;
        res13 = res13 - 4;
    }
}
int main() { test_func(); return 0; }

