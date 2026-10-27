// RTPG_3297: vars=7 stmts=5
void test_func(void) {
    int prev85 = 35;
    int val11 = 93;
    int z16 = 10805;
    int v6 = 7329;
    int val73 = 12581;
    int dat25 = 44629;
    int val75 = 62708;
    int i;
    for (i = 0; i < 24; i++) {
        z16 = v6 + z16;
        v6 = val73 | v6;
        val73 = v6 + z16;
        prev85 = v6 + 4;
        val75 = val75;
    }
}
int main() { test_func(); return 0; }

