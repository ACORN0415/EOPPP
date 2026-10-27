int test_func(void) {
    int v0 = 13;
    int v1 = 9;
    int v2 = 31;
    int v3 = 77;
    int v4 = 57;
    int v5 = 52;
    int v6 = 31;
    int i;
    v5 = v5 + v6;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
