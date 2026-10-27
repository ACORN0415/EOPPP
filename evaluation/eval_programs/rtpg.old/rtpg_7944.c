// RTPG_7944: vars=10 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int a66 = 60007;
    int out60 = -43;
    int cnt40 = 59694;
    int out82 = -15;
    int v13 = 14;
    int sum7 = 3620;
    int b94 = 9;
    int y40 = -13;
    int cur68 = 36;
    int lo38 = 43;
    int i;
    for (i = 0; i < 16; i++) {
        y40 = xn[i];
        sum7 = sum7 + b94;
        b94 = b94 + 1;
        y40 = y40 + out82;
        sum7 = sum7 - 3;
        cnt40 = y40 + out60;
        lo38 = b94 ^ cnt40;
        lo38 = y40 + y40;
        cur68 = out60 + sum7;
        b94 = a66 - v13;
        sum7 = sum7 ^ y40;
        lo38 = cur68 + v13;
        cnt40 = cnt40 - 1;
        if (out60 > 7) goto done;
        if (sum7 >= 74) {
        v13 = y40 - v13;
        }
        yo[i] = cnt40;
    }
done:
    out60 = 0;
}
int main() { test_func(); return 0; }

