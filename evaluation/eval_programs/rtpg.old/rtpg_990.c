// RTPG_990: vars=13 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int b97 = 94;
    int x41 = 1;
    int dat87 = 11;
    int a81 = 9;
    int prev0 = 35;
    int c59 = -17;
    int a59 = 39004;
    int v57 = 35;
    int val29 = 44855;
    int x64 = 9971;
    int prev12 = 2;
    int c7 = 21;
    int res63 = 33255;
    int i;
    for (i = 0; i < 32; i++) {
        dat87 = xn[i];
        b97 = c7;
        val29 = c7 + b97;
        x64 = b97 + a81;
        x64 = x64 & c59;
        a59 = v57 / val29;
        x64 = val29 + res63;
        b97 = res63 / dat87;
        prev0 = c7 + prev0;
        if (dat87 >= 12) {
        res63 = prev0;
        }
        yo[i] = prev0;
    }
}
int main() { test_func(); return 0; }

