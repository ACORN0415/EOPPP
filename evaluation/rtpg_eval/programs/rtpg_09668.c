int test_func(void) {
    int v0 = 9;
    int v1 = 21;
    int v2 = 53;
    int v3 = 33;
    int v4 = 46;
    int v5 = 73;
    int i;
    v2 = 87;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
