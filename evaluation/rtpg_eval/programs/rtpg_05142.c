int test_func(void) {
    int v0 = 83;
    int v1 = 50;
    int v2 = 32;
    int v3 = 47;
    int v4 = 10;
    int v5 = 72;
    int v6 = 59;
    int i;
    v3 = v3 - v5;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
