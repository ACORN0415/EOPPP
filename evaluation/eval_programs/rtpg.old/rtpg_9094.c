// RTPG_9094: vars=13 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int y36 = 6;
    int sum41 = -5;
    int v34 = 18;
    int sum18 = -25;
    int a91 = 67;
    int hi93 = 0;
    int val52 = 8;
    int c37 = 4;
    int sum68 = 568;
    int prev12 = 10;
    int a76 = 9;
    int out24 = -15;
    int acc10 = 47904;
    int i;
    for (i = 0; i < 16; i++) {
        a76 = xn[i];
        val52 = xn[idx_arr[i]];
        prev12 = prev12 - out24;
        prev12 = out24;
        out24 = sum41;
        acc10 = val52 - out24;
        if (acc10 >= 56) {
        a76 = sum68 - v34;
        }
        yo[i] = sum41;
    }
}
int main() { test_func(); return 0; }

