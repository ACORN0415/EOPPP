int test_func(void) {
    int v0 = 4;
    int v1 = 7;
    int v2 = 13;
    int v3 = 37;
    int v4 = 60;
    int v5 = 65;
    int i;
    v0 = v0 - v1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
