// RTPG_8445: vars=16 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
struct Node { int a; int b; };
void test_func(void) {
    int prev40 = -45;
    int cnt61 = 32924;
    float out25 = 2.86;
    int v52 = 7;
    int sum65 = 0;
    int z39 = -41;
    int prev6 = 0;
    int x38 = -19;
    int v95 = 44;
    int dat98 = 2;
    int res41 = 78;
    float z54 = 93.68;
    int a59 = -38;
    int c6 = 54454;
    int out27 = 10;
    int cur47 = 3;
    struct Node s; s.a = 58223; s.b = 7;
    int *ptr = &cnt61;
    int i;
    for (i = 0; i < 64; i++) {
        z54 = xn[i];
        a59 = xn[idx_arr[i]];
        dat98 = dat98 + 1;
        sum65 = out25 - prev40;
        v95 = res41 & v52;
        x38 = out27 - z39;
        cnt61 = prev40;
        prev40 = prev6 + cur47;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        yo[i] = cur47;
    }
}
int main() { test_func(); return 0; }

