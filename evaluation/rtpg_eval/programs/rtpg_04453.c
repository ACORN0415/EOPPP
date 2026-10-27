int test_func(void) {
    int v0 = 54;
    int v1 = 57;
    int v2 = 67;
    int v3 = 18;
    int v4 = 71;
    int v5 = 15;
    int i;
    v5 = v5 + v5;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
