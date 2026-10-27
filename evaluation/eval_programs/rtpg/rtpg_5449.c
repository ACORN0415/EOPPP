// RTPG_5449: vars=3 stmts=6
void test_func(void) {
    int prev32 = 93;
    int hi19 = 49;
    int res63 = 50;
    int i;
    for (i = 0; i < 63; i++) {
        hi19 = hi19 - res63;
        prev32 = hi19;
        hi19 = prev32 + res63;
        hi19 = hi19 + hi19;
        prev32 = prev32 - 1;
        hi19 = prev32 - res63;
        if (prev32 != -32) {
        prev32 = prev32;
        }
    }
}
int main() { test_func(); return 0; }

