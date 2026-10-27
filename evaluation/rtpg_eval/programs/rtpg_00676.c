int test_func(void) {
    int v0 = 20;
    int v1 = 34;
    int v2 = 87;
    int v3 = 35;
    int v4 = 30;
    int v5 = 96;
    int i;
    for (i = 0; i < 11; i++) {
        v5 = v5 + v5;
    }
    v3 = v3 + v5;
    return v0;
}
int main(void) { return test_func(); }
