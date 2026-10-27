// RTPG_2465: vars=5 stmts=5
void test_func(void) {
    int prev89 = 11;
    int res26 = 87;
    int dat19 = -38;
    int prev45 = 35;
    int val57 = 53059;
    int i;
    for (i = 0; i < 46; i++) {
        prev89 = dat19 - val57;
        res26 = dat19 + res26;
        res26 = dat19;
        prev45 = prev45 + 5;
        dat19 = prev45 - dat19;
    }
}
int main() { test_func(); return 0; }

