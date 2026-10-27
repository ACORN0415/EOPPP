int test_func(void) {
    int v0 = 1;
    int v1 = 92;
    int v2 = 95;
    int v3 = 99;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v3;
    }
    v0 = v0 + v1;
    return v0;
}
int main(void) { return test_func(); }
