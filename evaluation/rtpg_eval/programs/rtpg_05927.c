int test_func(void) {
    int v0 = 84;
    int v1 = 57;
    int v2 = 55;
    int v3 = 91;
    int v4 = 9;
    int v5 = 34;
    int i;
    v1 = v1 + v4;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v1;
    }
    if (v3 > v1) { v3 = v1; }
    return v0;
}
int main(void) { return test_func(); }
