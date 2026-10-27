int test_func(void) {
    int v0 = 32;
    int v1 = 15;
    int v2 = 59;
    int v3 = 1;
    int v4 = 83;
    int v5 = 48;
    int v6 = 17;
    int i;
    v3 = 44;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
