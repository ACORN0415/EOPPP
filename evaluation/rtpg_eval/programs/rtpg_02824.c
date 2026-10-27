int test_func(void) {
    int v0 = 22;
    int v1 = 51;
    int v2 = 43;
    int v3 = 55;
    int v4 = 21;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v1;
    }
    v0 = v0 & v2;
    return v0;
}
int main(void) { return test_func(); }
