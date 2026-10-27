// RTPG_3783: vars=6 stmts=3
int idx_arr[32];
struct Node { int a; int b; };
void test_func(void) {
    int res64 = 64178;
    int sum8 = 4;
    int cur97 = 5;
    int z20 = 64053;
    int out79 = 9;
    int v63 = 5;
    struct Node s; s.a = 27; s.b = 55603;
    int h0 = 1059;
    int sv0 = 0;
    int h1 = 37;
    int sv1 = 0;
    int i;
    for (i = 0; i < 25; i++) {
        v63 = xn[idx_arr[i]];
        res64 = v63 | res64;
        cur97 = z20 / cur97;
        v63 = out79 + cur97;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

