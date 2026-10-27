// RTPG_2485: vars=5 stmts=5
void test_func(void) {
    int prev89 = 11;
    int dat19 = 87;
    int val57 = -38;
    int res26 = 35;
    int prev45 = 53059;
    int i;
    for (i = 0; i < 46; i++) {
        prev89 = val57 - prev45;
        dat19 = val57 + dat19;
        dat19 = val57;
        res26 = res26 + 5;
        val57 = res26 - val57;
    }
}
int main() { test_func(); return 0; }

