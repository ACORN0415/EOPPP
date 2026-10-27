int test_func(void) {
    int v0 = 8;
    int v1 = 39;
    int v2 = 75;
    int v3 = 71;
    int v4 = 46;
    int v5 = 2;
    int i;
    v1 = v1 + v0;
    v3 = 30;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
