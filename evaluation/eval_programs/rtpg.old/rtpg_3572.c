// RTPG_3572: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int z83 = 5382;
    int res68 = 20;
    int sum10 = -4;
    int sum25 = 49;
    int dat74 = 60032;
    int i;
    for (i = 0; i < 64; i++) {
        dat74 = xn[i];
        dat74 = res68 - sum25;
        sum25 = sum10 + 1;
        res68 = res68 - res68;
        if (sum10 <= -5) {
        dat74 = res68;
        }
        yo[i] = sum25;
    }
}
int main() { test_func(); return 0; }

