int test_func(void) {
    int v0 = 43;
    int v1 = 95;
    int v2 = 68;
    int v3 = 3;
    int v4 = 48;
    int v5 = 62;
    int v6 = 100;
    int v7 = 66;
    int i;
    v2 = v2 - v6;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
