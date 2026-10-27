// RTPG_5055: vars=3 stmts=4
int idx_arr[32];
void test_func(void) {
    int cur85 = 31617;
    int b32 = 29323;
    int lo77 = 18;
    int i;
    for (i = 0; i < 9; i++) {
        cur85 = xn[idx_arr[i]];
        lo77 = b32 + lo77;
        lo77 = cur85 + b32;
        cur85 = lo77 + 32;
        cur85 = cur85 + 60;
        if (cur85 >= 51) {
        cur85 = lo77 + lo77;
        }
    }
}
int main() { test_func(); return 0; }

