int test_func(void) {
    int v0 = 94;
    int v1 = 95;
    int v2 = 7;
    int v3 = 57;
    int v4 = 30;
    int i;
    v1 = v1 + v3;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
