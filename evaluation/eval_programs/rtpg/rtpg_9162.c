// RTPG_9162: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cur59 = 27;
    int out21 = 44;
    int val97 = -6;
    int cur71 = 6;
    int c13 = 15;
    int i;
    for (i = 0; i < 32; i++) {
        out21 = xn[i];
        cur59 = cur71 + val97;
        c13 = cur59 + c13;
        cur59 = cur59 + 1;
        cur71 = cur71 + cur59;
        c13 = val97;
        if (cur71 == 15) {
        cur71 = val97 - c13;
        }
        yo[i] = cur59;
    }
}
int main() { test_func(); return 0; }

