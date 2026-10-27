int test_func(void) {
    int v0 = 94;
    int v1 = 73;
    int v2 = 74;
    int v3 = 58;
    int v4 = 91;
    int v5 = 21;
    int v6 = 53;
    int i;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
