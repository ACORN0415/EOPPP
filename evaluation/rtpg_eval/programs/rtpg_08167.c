int test_func(void) {
    int v0 = 47;
    int v1 = 86;
    int v2 = 91;
    int v3 = 48;
    int v4 = 65;
    int v5 = 6;
    int i;
    v4 = v4 + v3;
    v5 = v5 - v0;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
