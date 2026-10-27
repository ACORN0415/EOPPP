// RTPG_5552: vars=4 stmts=8
int idx_arr[64];
struct Data { int a; int b; };
void test_func(void) {
    int hi90 = 24789;
    int out76 = 25853;
    int c76 = 2;
    int c89 = 23;
    struct Data s; s.a = 48; s.b = 52;
    int i;
    for (i = 0; i < 40; i++) {
        c89 = xn[idx_arr[i]];
        c76 = c76 + c76;
        out76 = out76 + 16;
        out76 = hi90 - 28;
        out76 = hi90 / c76;
        hi90 = c89 + c89;
        out76 = c89 + hi90;
        out76 = out76 - 1;
        hi90 = hi90 + c76;
        s.a = s.a + s.b;
        if (out76 < 66) {
        out76 = c89 - c76;
        }
    }
}
int main() { test_func(); return 0; }

