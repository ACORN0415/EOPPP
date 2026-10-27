int test_func(void) {
    int v0 = 5;
    int v1 = 27;
    int v2 = 21;
    int v3 = 83;
    int v4 = 77;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v3 = v3 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
