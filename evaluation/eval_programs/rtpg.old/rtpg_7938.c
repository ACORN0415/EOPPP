// RTPG_7938: vars=10 stmts=5
void test_func(void) {
    int z29 = 5;
    int prev30 = 5;
    int val53 = 37696;
    int sum94 = 7;
    int c56 = 45130;
    int b69 = 25617;
    int prev32 = 4;
    int b91 = 3;
    int prev5 = 62;
    int cur52 = -6;
    int i;
    for (i = 0; i < 20; i++) {
        switch (prev32) {
            case 0: b69 = 22; break;
            case 1: sum94 = 75; break;
            case 2: cur52 = 49835; break;
            case 3: z29 = 32282; break;
            default: break;
        }
        prev32 = prev32 + 1;
    }
done:
    prev32 = 0;
}
int main() { test_func(); return 0; }

