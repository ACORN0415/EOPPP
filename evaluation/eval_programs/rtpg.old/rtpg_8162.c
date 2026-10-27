// RTPG_8162: vars=4 stmts=9
void test_func(void) {
    int hi58 = 89;
    int hi18 = -14;
    int x89 = 84;
    int hi14 = 50435;
    int i;
    for (i = 0; i < 86; i++) {
        hi58 = x89;
        hi14 = hi14 + 36;
        hi14 = hi14 - 1;
        hi18 = hi18;
        x89 = x89 - 38;
        hi14 = hi58 - x89;
        hi58 = hi18 + x89;
        x89 = hi18 - 55367;
        hi14 = x89 - hi14;
        if (hi14 > 11) {
        x89 = hi18 - hi18;
        }
    }
}
int main() { test_func(); return 0; }

