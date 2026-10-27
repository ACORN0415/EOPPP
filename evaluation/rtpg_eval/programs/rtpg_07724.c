int test_func(void) {
    int v0 = 3;
    int v1 = 100;
    int v2 = 31;
    int v3 = 52;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v2;
    }
    v3 = v3 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
