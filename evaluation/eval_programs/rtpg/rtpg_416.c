// RTPG_416: vars=5 stmts=5
int idx_arr[32];
void test_func(void) {
    int res91 = 9110;
    int val39 = 63736;
    int res51 = -50;
    int z59 = -43;
    int out1 = 23;
    int *ptr = &res51;
    int i;
    for (i = 0; i < 60; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        z59 = out1;
        val39 = res91 - z59;
        z59 = z59 + res51;
        val39 = val39 + 2;
        out1 = res91 + z59;
        }
    }
}
int main() { test_func(); return 0; }

