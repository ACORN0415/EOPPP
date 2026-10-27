// RTPG_2842: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int prev77 = 29573;
    int lo58 = -35;
    int sum4 = 85;
    int *ptr = &lo58;
    int i;
    for (i = 0; i < 51; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        lo58 = prev77 - sum4;
        sum4 = sum4 - 3;
        sum4 = lo58;
        lo58 = prev77 - prev77;
        sum4 = prev77 + lo58;
        }
    }
}
int main() { test_func(); return 0; }

