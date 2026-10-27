// RTPG_8427: vars=5 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int v93 = 4;
    int cur82 = 45874;
    int c34 = 15705;
    int cur13 = 3;
    int dat59 = 7114;
    int h0 = 35619;
    int sv0 = 0;
    int h1 = 45;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v93 = xn[i];
        cur13 = dat59 - v93;
        c34 = cur13 + 82;
        cur82 = v93 - 3;
        c34 = c34 % cur13;
        cur13 = cur13 - 5;
        cur82 = cur82 & dat59;
        c34 = c34 * 5;
        cur82 = cur13 % dat59;
        dat59 = cur82 - cur82;
        cur13 = c34 / cur13;
        dat59 = cur13 * 49168;
        v93 = cur13 * 22;
        if (dat59 <= 51) {
        cur13 = cur13 + 9;
        }
        yo[i] = cur13;
    }
}
int main() { test_func(); return 0; }

