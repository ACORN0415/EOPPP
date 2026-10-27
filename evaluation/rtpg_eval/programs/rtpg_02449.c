int test_func(void) {
    int v0 = 40;
    int v1 = 52;
    int v2 = 28;
    int v3 = 34;
    int v4 = 73;
    int i;
    v2 = 48;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
