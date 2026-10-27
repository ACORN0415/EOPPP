int test_func(void) {
    int v0 = 55;
    int v1 = 21;
    int v2 = 40;
    int v3 = 77;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
