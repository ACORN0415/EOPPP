int test_func(void) {
    int v0 = 71;
    int v1 = 2;
    int v2 = 94;
    int v3 = 50;
    int i;
    v2 = 34;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
