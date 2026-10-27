int test_func(void) {
    int v0 = 61;
    int v1 = 23;
    int v2 = 20;
    int v3 = 95;
    int v4 = 19;
    int v5 = 45;
    int v6 = 83;
    int i;
    v0 = v0 + v6;
    for (i = 0; i < 20; i++) {
        v6 = v6 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
