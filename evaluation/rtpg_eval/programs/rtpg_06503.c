int test_func(void) {
    int v0 = 86;
    int v1 = 87;
    int v2 = 66;
    int v3 = 96;
    int v4 = 70;
    int v5 = 73;
    int v6 = 97;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v3;
    }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
