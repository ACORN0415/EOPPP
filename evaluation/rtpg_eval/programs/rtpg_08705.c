int test_func(void) {
    int v0 = 35;
    int v1 = 34;
    int v2 = 52;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
