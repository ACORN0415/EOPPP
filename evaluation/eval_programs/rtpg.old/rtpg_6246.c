// RTPG_6246: vars=5 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int v80 = 3;
    int dat61 = 10;
    int b22 = 90;
    int z76 = 74;
    int val55 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        v80 = xn[i];
        dat61 = dat61 - 3;
        z76 = dat61;
        v80 = b22 - val55;
        v80 = z76 + v80;
        b22 = b22 + 5;
        dat61 = v80 - b22;
        if (b22 >= -2) {
        v80 = dat61;
        }
        yo[i] = b22;
    }
}
int main() { test_func(); return 0; }

