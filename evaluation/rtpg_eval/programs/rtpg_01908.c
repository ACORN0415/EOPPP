int test_func(void) {
    int v0 = 16;
    int v1 = 74;
    int v2 = 77;
    int v3 = 86;
    int v4 = 3;
    int v5 = 28;
    int v6 = 32;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
