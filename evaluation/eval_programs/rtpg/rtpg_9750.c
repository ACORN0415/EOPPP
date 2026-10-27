// RTPG_9750: vars=7 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
struct Point { int a; int b; };
void test_func(void) {
    int out98 = 3;
    int v63 = 53010;
    int tmp60 = 53489;
    int x16 = 64366;
    float out86 = 85.87;
    float acc93 = 55.26;
    int a33 = 50827;
    struct Point s; s.a = 43; s.b = 21654;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 23;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out98 = xn[i];
        acc93 = xn[idx_arr[i]];
        out86 = acc93;
        x16 = a33 * -19;
        a33 = out86 + x16;
        tmp60 = out86 * 23905;
        s.a = s.a + s.b;
        yo[i] = out98;
    }
}
int main() { test_func(); return 0; }

