// RTPG_9908: vars=5 stmts=8
int idx_arr[16];
struct Data { int a; int b; };
void test_func(void) {
    int val76 = -15;
    int acc54 = 99;
    int tmp44 = -48;
    int y83 = -14;
    int v99 = 65;
    struct Data s; s.a = 7; s.b = 12856;
    int i;
    for (i = 0; i < 43; i++) {
        val76 = xn[idx_arr[i]];
        acc54 = tmp44 - val76;
        y83 = y83 + 2;
        tmp44 = v99 - y83;
        y83 = y83 - 2;
        y83 = acc54;
        v99 = val76 - 14254;
        acc54 = v99;
        tmp44 = tmp44 + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

