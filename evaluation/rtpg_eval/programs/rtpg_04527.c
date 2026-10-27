int test_func(void) {
    int v0 = 97;
    int v1 = 55;
    int v2 = 54;
    int v3 = 64;
    int v4 = 73;
    int v5 = 54;
    int v6 = 82;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v2;
    }
    v1 = 73;
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
