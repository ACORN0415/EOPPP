// RTPG_7629: vars=8 stmts=4
int idx_arr[16];
struct Data { int a; int b; };
void test_func(void) {
    int y7 = 9;
    int dat34 = 65;
    int val76 = 61595;
    int y74 = -3;
    int y30 = 61344;
    int lo61 = 15;
    int x35 = 8941;
    int z46 = 7;
    struct Data s; s.a = 98; s.b = 13;
    int i;
    for (i = 0; i < 36; i++) {
        y30 = xn[idx_arr[i]];
        y30 = y30 - 4;
        y74 = lo61;
        y7 = x35 - dat34;
        lo61 = dat34 - val76;
        s.a = s.a + s.b;
        if (lo61 != -19) {
        y7 = val76;
        }
    }
}
int main() { test_func(); return 0; }

