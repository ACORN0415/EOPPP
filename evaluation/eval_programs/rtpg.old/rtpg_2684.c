// RTPG_2684: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int x48 = 65;
    int lo77 = 18;
    int tmp74 = 39651;
    int val81 = 37188;
    int z94 = 2;
    int v82 = -42;
    int *ptr = &tmp74;
    int h0 = 42;
    int sv0 = 0;
    int h1 = 13359;
    int sv1 = 0;
    int h2 = 7;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        val81 = xn[i];
        z94 = v82 + 724;
        v82 = lo77 * 9;
        val81 = z94 + lo77;
        *ptr = *ptr + 4;
        yo[i] = tmp74;
    }
}
int main() { test_func(); return 0; }

