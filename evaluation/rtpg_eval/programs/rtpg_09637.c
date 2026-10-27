int test_func(void) {
    int v0 = 51;
    int v1 = 13;
    int v2 = 16;
    int v3 = 52;
    int v4 = 53;
    int v5 = 53;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v4;
    }
    v5 = v5 + v3;
    return v0;
}
int main(void) { return test_func(); }
