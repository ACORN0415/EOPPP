int test_func(void) {
    int v0 = 33;
    int v1 = 80;
    int v2 = 57;
    int v3 = 28;
    int v4 = 95;
    int v5 = 80;
    int i;
    v2 = 39;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
