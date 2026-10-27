int test_func(void) {
    int v0 = 7;
    int v1 = 91;
    int v2 = 43;
    int v3 = 91;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v0;
    }
    v1 = v1 + v1;
    v1 = 99;
    return v0;
}
int main(void) { return test_func(); }
