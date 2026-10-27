int test_func(void) {
    int v0 = 71;
    int v1 = 32;
    int v2 = 50;
    int v3 = 7;
    int v4 = 71;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v3;
    }
    v3 = v3 + v2;
    v1 = v1 & v3;
    return v0;
}
int main(void) { return test_func(); }
