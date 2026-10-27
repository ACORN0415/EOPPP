int test_func(void) {
    int v0 = 68;
    int v1 = 69;
    int v2 = 18;
    int v3 = 37;
    int i;
    v1 = v1 + v0;
    v0 = v0 | v3;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
