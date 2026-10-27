int test_func(void) {
    int v0 = 93;
    int v1 = 69;
    int v2 = 11;
    int v3 = 43;
    int i;
    v1 = 57;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
