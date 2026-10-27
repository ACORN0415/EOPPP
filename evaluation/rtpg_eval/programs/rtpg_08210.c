int test_func(void) {
    int v0 = 74;
    int v1 = 98;
    int v2 = 81;
    int v3 = 84;
    int v4 = 23;
    int v5 = 18;
    int v6 = 38;
    int i;
    v1 = 63;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v0 = v0 | v6;
    return v0;
}
int main(void) { return test_func(); }
