int test_func(void) {
    int v0 = 1;
    int v1 = 70;
    int v2 = 67;
    int v3 = 25;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
