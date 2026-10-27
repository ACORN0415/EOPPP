// RTPG_3311: vars=3 stmts=6
void test_func(void) {
    int a59 = 44629;
    int hi67 = 62708;
    int hi23 = 51;
    int h0 = 56190;
    int sv0 = 0;
    int h1 = 10424;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        hi67 = a59;
        a59 = hi67 + 4;
        hi67 = hi67;
        hi23 = a59 + hi67;
        hi23 = hi23 + hi67;
        hi23 = a59 - hi23;
        }
    }
}
int main() { test_func(); return 0; }

