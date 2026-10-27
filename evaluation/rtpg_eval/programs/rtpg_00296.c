int test_func(void) {
    int v0 = 80;
    int v1 = 82;
    int v2 = 68;
    int v3 = 77;
    int v4 = 61;
    int v5 = 96;
    int i;
    v3 = 9;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
