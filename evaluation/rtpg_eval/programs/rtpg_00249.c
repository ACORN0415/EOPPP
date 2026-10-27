int test_func(void) {
    int v0 = 59;
    int v1 = 29;
    int v2 = 64;
    int v3 = 32;
    int v4 = 40;
    int i;
    v3 = v3 - v4;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
