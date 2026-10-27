// RTPG_165: vars=5 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
struct Data { int a; int b; };
void test_func(void) {
    int a24 = -36;
    int tmp82 = 43;
    int c66 = -34;
    int tmp73 = 39053;
    int c46 = 34565;
    struct Data s; s.a = 6; s.b = 57314;
    int h0 = -19;
    int sv0 = 0;
    int h1 = 46690;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a24 = xn[i];
        c66 = xn[idx_arr[i]];
        tmp73 = c66 + c46;
        tmp73 = tmp82 * 7941;
        s.a = s.a + s.b;
        yo[i] = tmp73;
    }
}
int main() { test_func(); return 0; }

