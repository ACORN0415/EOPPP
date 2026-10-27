// RTPG_7423: vars=7 stmts=3
void test_func(void) {
    int y29 = -25;
    int acc12 = 51763;
    int res59 = 8;
    int res33 = 0;
    int dat47 = 35867;
    int prev48 = 84;
    int v79 = 8127;
    int *ptr = &dat47;
    int i;
    for (i = 0; i < 13; i++) {
        res33 = res59 | dat47;
        y29 = prev48 - y29;
        res33 = v79 - prev48;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

