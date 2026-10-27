int test_func(void) {
    int v0 = 11;
    int v1 = 22;
    int v2 = 80;
    int v3 = 50;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
